import os
import subprocess
import json
import sys
from colorama import Fore, Style

def check_names(tests):
	print('checking file names')
	files = os.listdir('../libft')
	required = tests['names'].split(',')
	for r in required:
		try:
			files.remove(f'ft_{r}.c')
			print(f'{r} {Fore.GREEN}OK{Style.RESET_ALL}, ', end = "") 
		except:
			print(f'function {r} {Fore.RED}not found{Style.RESET_ALL}', end = " ")
	return files

def check_names_bonus(files, tests):
	required = tests['names_bonus'].split(',')
	for r in required:
		try:
			files.remove(f'ft_{r}.c')
			print(f'{r} {Fore.GREEN}OK{Style.RESET_ALL}, ', end = "")
		except:
			print(f'function {r} {Fore.YELLOW}not found{Style.RESET_ALL}', end = " ")
	print("")
	return files

def print_awesome_logo(file):
	colors = [Fore.RED, Fore.YELLOW, Fore.GREEN, Fore.CYAN, Fore.BLUE, Fore.WHITE, Fore.MAGENTA]
	with open(file) as ls:
		x = 0
		for l in ls:
			print(f"{colors[x]}{l}", end="")
			x += 1
		print("")
		print(Fore.WHITE)

def test_case(args, v):
	if v:
		command = ["valgrind", "./test.out"] + args
		result = subprocess.run(command, stdout=subprocess.PIPE, check=True)
		output = result.stdout.decode('utf-8')
		return(output)
	else:
		path = "./test.out"
	process = subprocess.Popen([path] + args, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text= True)
	output, errors = process.communicate()
	return_code = process.returncode
	return (output, errors, return_code)

def test_org_ft(test, mode):
	if "valgrind" in test:
		result_org = test_case(test + ["1"], True)
		result_ft = test_case(test + ["2"], True)
	else:
		result_org = test_case(test + ["1"], False)
		result_ft = test_case(test + ["2"], False)
	if result_ft == result_org:
		print(f"{Fore.GREEN} OK!{Style.RESET_ALL}")
	else:
		print(f"{Fore.RED} fail{Style.RESET_ALL}")
		print(f"expected: {result_org}")
		print(f"your res: {result_ft}")
	if mode == "detail":
		print(f"{Fore.BLUE}{result_org}")
		print(f"{Fore.CYAN}{result_ft}{Fore.WHITE}")

if __name__ == "__main__":
	os.system("clear")
	if len(sys.argv) > 1:
		if sys.argv[1] == "d":
			mode = "detail"
		elif sys.argv[1] == "n":
			mode = "names"
		else:
			mode = "simple"
	if len(sys.argv) > 2:
		function = sys.argv[2]
	else:
		function = None
	print_awesome_logo("lg.txt")
	with open("args.json") as args:
		tests = json.load(args)
		for t in tests:
			if function:
				if function != t:
					continue
			if t == "names":
				if mode == "names":
					files = check_names(tests)
				continue
			elif t == "names_bonus":
				if mode == "names":
					res = check_names_bonus(files, tests)
					print(f'files left: {Fore.CYAN}{res}{Style.RESET_ALL}')
					exit()
				continue
			choice = input(f"{Fore.CYAN}press ENTER to begin next test {Fore.YELLOW} ({t}) {Style.RESET_ALL} or type END to finish ") 
			if choice == "END":
				break
			print(f'making the {t} test')
			subprocess.run(f"make {t}", shell=True)
			if isinstance(tests[t], str):
				cases = tests[t].split('||')
				for case in cases:
					if "range" in case:
						ds = case.replace("range:", "").split(';')
						start = int(ds[0])
						stop = int(ds[1])
						leap = int(ds[2])
						while start <= stop:
							print(start, end="")
							test_org_ft([str(start)], mode)
							start += leap
					else:
						print(case, end="")
						test_org_ft([case], mode)
			else:
				for e in tests[t]:
					print(e, end="")
					test_org_ft(e, mode)

# JP Tester

This tester was written by me to test the libft project at school 42
The tester is written in python which runs consecutive programs written in C and checks if the result of the original and the reproduced funcition is the same. 

**How to use:**

1. clone the repository to a directory that will be in the same directory as the libft directory
    example:
       42_shcool/
         |--jpt_libft
         |--libft
2. **in your libft directory, call make** (so as to create the libft.a file)
3. in the jpt_libft directory first type "make" - this will copy the library to the tester directory
4. then you can start testing by typing:
    make run - test all functions in the basic version
    make run_d - test all functions together with displaying details
    make run fun=ft_isalpha - test only the is_alpha function (also works with run_d)
5. in the file args.json you can manage the data on which the tests are performed

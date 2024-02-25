Ten tester został napisany przeze mnie w celu sprawdzenia projektu libft w szkole 42
Tester jest napisany w pythonie który uruchamia kolejne programy napisane w C i sprawdza czy wynik funckji oryginalej i odtwarzanej jest taki sam. 

Jak używać:

1. Sklonuj repozytorium do katalogu który będzie w tym samym katalogu co katalog libft
    przykład:
       42_shcool/
         |--jpt_libft
         |--libft
2. w swoim katalogu libft wywołaj make (tak aby utworzyć plik libft.a)
3. w katalogu jpt_libft najpierw wpisz "make" - to skopiuje bibliotekę do katalogu testera
4. nasępnie możesz zacząć przeprowadzać testy wpisując:
    make run - test wszystkich funkcji w wersji podstawowej
    make run_d - test wszystkich funkcji razem z wyświetlaniem detali
    make run ft_isalpha - test jedynie funkcji is alpha (działa również z run_d)
5. w pliku args.json możesz zarządzać danymi na których przeprowadzane są testy

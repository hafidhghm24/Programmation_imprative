prog_tst_pile_statique.out: pile_statique.o tst_pile_statique.o element.o
	gcc -o prog_tst_pile_statique.out pile_statique.o tst_pile_statique.o element.o

pile_statique.o: pile_statique.c pile_statique.h element.h
	gcc -c pile_statique.c -o pile_statique.o -W -Wall -ansi -pedantic

tst_pile_statique.o: tst_pile_statique.c pile_statique.h element.h 
	gcc -c tst_pile_statique.c -o tst_pile_statique.o -W -Wall -ansi -pedantic

element.o: element.c element.h
	gcc -c element.c -o element.o -W -Wall -ansi -pedantic

clean: 
	rm -rf *.o


prog_cinema.out: element.o file_dyn.o application.o tst_application.o
	gcc -o prog_cinema.out element.o file_dyn.o application.o tst_application.o

element.o: element.c element.h
	gcc -c element.c -o element.o -W -Wall -pedantic

file_dyn.o: file_dyn.c element.h file_dyn.h
	gcc -c file_dyn.c -o file_dyn.o -Wall -pedantic

application.o: application.c application.h file_dyn.h element.h
	gcc -c application.c -o application.o -Wall -pedantic

tst_application.o: tst_application.c file_dyn.h application.h
	gcc -c tst_application.c -o tst_application.o -Wall -pedantic

clean: 
	rm -rf *.o *.out
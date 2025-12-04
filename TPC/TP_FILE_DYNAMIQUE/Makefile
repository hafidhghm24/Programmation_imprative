
prog_tst_file_dyn.out: element.o tst_file_dyn.o file_dyn.o
	gcc -o prog_tst_file_dyn.out element.o tst_file_dyn.o file_dyn.o


element.o: element.c element.h
	gcc -c element.c -o element.o -W -Wall -pedantic

file_dyn.o: file_dyn.c element.h file_dyn.h
	gcc -c file_dyn.c -o file_dyn.o -Wall -pedantic


tst_file_dyn.o: tst_file_dyn.c element.h file_dyn.h
	gcc -c tst_file_dyn.c -o tst_file_dyn.o -W -Wall -pedantic

clean: 
	rm -rf *.o *.out
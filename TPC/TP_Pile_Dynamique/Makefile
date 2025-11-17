prog_tst_element.out: element.o tst_element.o
	gcc -o prog_tst_element.out element.o tst_element.o
element.o: element.c
	gcc -c element.c -o element.o -W -Wall -ansi -pedantic
	
tst_element.o: tst_element.c element.h
	gcc -c tst_element.c -o tst_element.o -W -Wall -ansi -pedantic
	
clean: 
	rm -rf *.o
	
	

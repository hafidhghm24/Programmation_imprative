prog_tst_PileDynamique.out: element.o tst_PileDynamique.o PileDynamique.o
	gcc -o prog_tst_PileDynamique.out element.o tst_PileDynamique.o PileDynamique.opro

element.o: element.c
	gcc -c element.c -o element.o -W -Wall -pedantic

PileDynamique.o : PileDynamique.c element.h PileDynamique.h
	gcc -c PileDynamique.c -o PileDynamique.o -Wall -pedantic

tst_PileDynamique.o: tst_PileDynamique.c element.h PileDynamique.h
	gcc -c tst_PileDynamique.c -o tst_PileDynamique.o -W -Wall -pedantic
	
clean: 
	rm -rf *.o
	
	

prog_tst_FileDynamique.out: element.o tst_FileDynamique.o FileDynamique.o
	gcc -o prog_tst_PileFynamique.out element.o tst_FileDynamique.o PileFynamique.opro

element.o: element.c
	gcc -c element.c -o element.o -W -Wall -pedantic

FileDynamique.o : FileDynamique.c element.h FileDynamique.h
	gcc -c FileDynamique.c -o FileDynamique.o -Wall -pedantic

tst_FleDynamique.o: tst_FileDynamique.c element.h FileDynamique.h
	gcc -c tst_FileDynamique.c -o tst_FileDynamique.o -W -Wall -pedantic
	
clean: 
	rm -rf *.o
	
	

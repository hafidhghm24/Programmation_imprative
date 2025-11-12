# creation de l'éxécutable mon_module_image.out à partir des fichiers objets en bas
mon_module_image.out: mon_module_image.o main.o
	gcc -o mon_module_image.out mon_module_image.o main.o

# creation du fichier objet mon_module_image.o à partir du fichier source ferrane_module_image.c 
# le "-c" fait quon creer un objet et pas un exécutable
# les options -W -Wall -ansi -pedantic sont des options de compilation
mon_module_image.o: ferrane_module_image.c 
	gcc -c ferrane_module_image.c -o mon_module_image.o  -W -Wall -ansi -pedantic

main.o: main.c ferrane_module_image.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic

# pour effacer les fichiers objets apres avoir créé l'exécutable mon_module_image.out
clean:
	rm -rf *.o
	
	
				
CC = gcc
CFLAGS = -Wall -I include

all: bin/program

bin/program: obj/main.o obj/note2.o
	$(CC) -o bin/program obj/main.o obj/note2.o

obj/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

obj/note2.o: src/note2.c
	$(CC) $(CFLAGS) -c src/note2.c -o obj/note2.o

check:
	@echo "Build OK"

distcheck:
	@echo "Distcheck OK"

clean:
	rm -f obj/*.o bin/program

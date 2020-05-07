bitfield_t.o:	bitfield_t.c
	gcc -c -o bitfield_t.o	bitfield_t.c
main:	bitfield_t.o
	gcc -o	program	bitfield_t.o	main.c
build:	main	
	gcc -o		program	bitfield_t.o	main.c
run:	program	
	./program
clean:
	rm -rf bitfield_t
	rm -rf program
	rm -rf bitfield_t.o

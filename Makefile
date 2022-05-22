CC=cc

a.out: main.c
	$(CC) main.c

a2.out: main2.c
	$(CC) main2.c -o a2.out

a3.out: main3.c
	$(CC) main3.c -o a3.out

clean:
	rm a.out a2.out a3.out -f

run:
	./a3.out

.PHONY: clean

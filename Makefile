CC=gcc
CFLAGS=-fwhole-program -static

a.out: main.c
	$(CC) main.c

a2.out: main2.c
	$(CC) main2.c -o a2.out

a3.out: main3.c
	$(CC) main3.c -o a3.out

main3.s: main3.c
	$(CC) $(CFLAGS) main3.c -S -masm=intel

# main3_dump.s: main3.c
# 	$(CC) $(CFLAGS) main3.c -o main3_tmp
# 	objdump -d -M intel main3_tmp > main3_dump.s

main: main3.s
	$(CC) $(CFLAGS) main3.s -g3 -o main

clean:
	rm a.out a2.out a3.out -f

run:
	./a3.out

.PHONY: clean

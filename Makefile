ALL = main

all: $(ALL)

main: prog.o inverte.o crescente.o decrescente.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $<

prog: prog.o inverte.o crescente.o decrescente.o
	gcc -o prog prog.o inverte.o crescente.o decrescente.o

inverte.o: inverte.c
	gcc -c inverte.c

crescente.o: crescente.c
	gcc -c crescente.c

decrescente.o: decrescente.c
	gcc -c decrescente.c

clean:
	rm -f *.s *.o output erro

distclean: clean
	rm -f $(ALL)
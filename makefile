#default target - file edit
edit: main_moncar.o
	cc -o edit main_moncar.o
main_moncar.o: main_moncar.с moncar.h
	cc -c main_moncar.c
clean:
	rm edit main_moncar.o

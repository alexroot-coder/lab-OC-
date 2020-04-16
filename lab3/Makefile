#default target - file edit
default: link

link: main_moncar.o
	cc -o main main_moncar.o

main_moncar.o: main_moncar.c moncar.h
	cc -c main_moncar.c

clean:
	rm main main_moncar.o
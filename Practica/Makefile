
CFLAGS=-O3 -fopenmp -I.
DEBUG_FLAGS=-g -fopenmp -DDEBUG
LIBS=-lm

energy: energy_v2.c
	gcc $(CFLAGS) $< -o $@ $(LIBS)

debug: energy_v2.c
	gcc $(CFLAGS) $(DEBUG_FLAGS) $< -o $@ $(LIBS)

clean:
	rm -f energy debug


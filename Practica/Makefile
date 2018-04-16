
CFLAGS=-O3 -I.
DEBUG_FLAGS=-g -DDEBUG
LIBS=-lm

energy: energy_v2.c
	gcc $(CFLAGS) $< -o $@ $(LIBS)

debug: energy_v2.c
	gcc $(CFLAGS) $(DEBUG_FLAGS) $< -o $@ $(LIBS)

clean:
	rm -f energy debug


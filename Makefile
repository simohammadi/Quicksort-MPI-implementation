CC=mpicc
CLIB=-lm

quicksort: quicksort.c
	$(CC) -o quicksort quicksort.c $(CLIB)

v3: v3_quicksort.c
	$(CC) -o v3 v3_quicksort.c $(CLIB)

v4: v4_quicksort.c
	$(CC) -o v4 v4_quicksort.c $(CLIB)

debug: quicksort.c
	$(CC) -g -o v3 quicksort.c $(CLIB)

gen_data: gen_data.c
	$(CC) -o gen_data gen_data.c $(CLIB)

clean:
	rm v3



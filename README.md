# Quicksort-MPI-implementation

Quicksort using MPI obtained a speedup of around three times with 4 number of procs.

The algorithm is implemented using different pivot modes, mode 1, mode 2 and mode 3.

* Mode 1: the median of a arbitrary proc.
* Mode 2: the median of medians among all procs.
* Mode 3: the mean value of medians among all procs.

# Outline:
1. The input array is distributed among the procs.
2. The subset arrays are localy sorted
3. Select a pivot.
4. Distribute larger/smaller than pivot to correct partner proc.
5. Do iteratively untill we are left with one proc.

To compile use makefile $ make quicksort

Run with $ mpirun -np 4 ./quicksort inputfile outputfile 1

// READ FILE WITH WHITESPACE SEPARATING INTEGERS
#include <stdio.h>
#include <stdlib.h>

int *read_input(char input_file[]){
	FILE *file;
	int i, size, *arr, block=1;
	int buff;
	char junk;
	file = fopen(input_file, "r");
	fscanf(file, "%d", &size);
	//printf("%d\n", size);
	arr = malloc(size*(sizeof(int)));
	for (i=0; i<size; i++){
		fscanf(file, "%c", &junk);
		fscanf(file, "%d", &buff);
		/*fread(buff, sizeof(int), block, file);
		fread(junk, sizeof(char), block, file);*/
		arr[i] = buff;
	}
	fclose(file);
	free(file);
	return arr;
}

int get_size(char input_file[]){
	FILE *file;
	int size;
	file=fopen(input_file, "r");
	fscanf(file, "%d", &size);
	return size;
}

int get_size2(char input_file[]){
	FILE *file;
	int num;
	file = fopen(input_file, "r");
	fscanf(file,"%d", &num);
	return num;
}

void write_to_file(int *arr, char output_name[], int size){
	FILE *file;
	int i, block = 1;
	char white_space = ' ';
	file = fopen(output_name, "w");
	for (i = 0; i<size; i++){
		fprintf(file, "%d", arr[i]);
		fprintf(file, "%s", " ");
	}
}

void print_arr(int *arr, int size){
	for (int i=0; i<size; i++){
		printf(" %d", arr[i]);
	}
	putchar('\n');
}

/*
int main(int argc, char *argv[]){
	int *arr = read_input("test_input.txt");
	print_arr(arr, 10);
	write_to_file(arr, "output_file_test.txt", 10);
}
*/



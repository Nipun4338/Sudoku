#ifdef FILEFUNCTION_H
#define FILEFUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readArray(int *arr){
	FILE *numList = fopen("sudoku.txt", "r");

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j ++){
			fscanf(numList, "%d", &arr[i][j]);
		}
	}

	fclose(numList);
}

void writeArray(int *arr){
	FILE *numList = fopen("sudoku.txt", "r");

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			fprint(numList ,"%d", arr[i][j]);
		}
		fprintf("\n");
	}
	fclose(numList);
}

#endif FILEFUNCTION_H
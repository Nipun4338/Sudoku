#ifndef File_H_INCLUDED
#define File_H_INCLUDED
# include "myVariables.h"
# include "myLoadPicture.h"

void play(){
	FILE *sudoku1 = fopen("sudoku1.txt", "r");
    for(int i = 0; i < 9; i++){
		if (sudoku1 != NULL){
        fscanf(sudoku1, "%d %d %d %d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5], &arr[i][6], &arr[i][7], &arr[i][8]);
		for(int j=0;j<9;j++)
			load_array[i][j] = arr[i][j];
		}
	}
	fclose(sudoku1);
	sudoku1 = fopen("sudokusolution.txt", "r");
    for(int i = 0; i < 9; i++){
		if (sudoku1 != NULL){
        fscanf(sudoku1, "%d %d %d %d %d %d %d %d %d", &solution_array[i][0], &solution_array[i][1], &solution_array[i][2], &solution_array[i][3], &solution_array[i][4], &solution_array[i][5], &solution_array[i][6], &solution_array[i][7], &solution_array[i][8]);
		}
	}
	fclose(sudoku1);


	FILE *sudoku2 = fopen("sudoku2.txt", "a");
    for(int i = 0; i < 9; i++){
		if (sudoku2 != NULL){
        fscanf(sudoku2, "%d %d %d %d %d %d %d %d %d", &load_array[i][0], &load_array[i][1], &load_array[i][2], &load_array[i][3], &load_array[i][4], &load_array[i][5], &load_array[i][6], &load_array[i][7], &load_array[i][8]);
		}
	}
	fclose(sudoku2);

}
#endif // File_H_INCLUDED
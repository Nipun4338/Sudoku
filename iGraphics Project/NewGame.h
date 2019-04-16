#ifndef NewGame_H_INCLUDED
#define NewGame_H_INCLUDED
# include "myVariables.h"
# include "myLoadPicture.h"
#include<string.h>
#include "File.h"
#include "Filecompare.h"



void myItoa(int source, char* destination, int size)
{
	if(source==-1)
		strcpy(destination,"");
	else 
		itoa(source,destination,size);

}

void NewGameInside()
{
	iShowImage(0,0,900,800,image1);
	iShowImage(200,200,500,500,image3);

	char x[100][81];
	//for(int i=0; i<1; i++){
	iSetColor(0,0,0);
		myItoa(arr[0][0],x[0],10);
		iText(200+a/2.5,200-a/1.7+9*a,x[0],GLUT_BITMAP_TIMES_ROMAN_24);  //11
		myItoa(arr[1][0],x[1],10);
		iText(200+a/2.5,200-a/1.7+8*a,x[1],GLUT_BITMAP_TIMES_ROMAN_24);  //21
		myItoa(arr[2][0],x[2],10);
		iText(200+a/2.5,200-a/1.7+7*a,x[2],GLUT_BITMAP_TIMES_ROMAN_24);  //31
		myItoa(arr[3][0],x[3],10);
		iText(200+a/2.5,200-a/1.7+6*a,x[3],GLUT_BITMAP_TIMES_ROMAN_24);  //41
		myItoa(arr[4][0],x[4],10);
		iText(200+a/2.5,200-a/1.7+5*a,x[4],GLUT_BITMAP_TIMES_ROMAN_24);  //51
		myItoa(arr[5][0],x[5],10);
		iText(200+a/2.5,200-a/1.7+4*a,x[5],GLUT_BITMAP_TIMES_ROMAN_24);  //61
		myItoa(arr[6][0],x[6],10);
		iText(200+a/2.5,200-a/1.7+3*a,x[6],GLUT_BITMAP_TIMES_ROMAN_24);  //71
		myItoa(arr[7][0],x[7],10);
		iText(200+a/2.5,200-a/1.7+2*a,x[7],GLUT_BITMAP_TIMES_ROMAN_24);  //81
		myItoa(arr[8][0],x[8],10);
		iText(200+a/2.5,200-a/1.7+1*a,x[8],GLUT_BITMAP_TIMES_ROMAN_24);  //91


		myItoa(arr[0][1],x[9],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+9*a,x[9],GLUT_BITMAP_TIMES_ROMAN_24); //12
		myItoa(arr[1][1],x[10],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+8*a,x[10],GLUT_BITMAP_TIMES_ROMAN_24); //22
		myItoa(arr[2][1],x[11],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+7*a,x[11],GLUT_BITMAP_TIMES_ROMAN_24); //32
		myItoa(arr[3][1],x[12],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+6*a,x[12],GLUT_BITMAP_TIMES_ROMAN_24); //42
		myItoa(arr[4][1],x[13],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+5*a,x[13],GLUT_BITMAP_TIMES_ROMAN_24); //52
		myItoa(arr[5][1],x[14],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+4*a,x[14],GLUT_BITMAP_TIMES_ROMAN_24); //62
		myItoa(arr[6][1],x[15],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+3*a,x[15],GLUT_BITMAP_TIMES_ROMAN_24); //72
		myItoa(arr[7][1],x[16],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+2*a,x[16],GLUT_BITMAP_TIMES_ROMAN_24); //82
		myItoa(arr[8][1],x[17],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+1*a,x[17],GLUT_BITMAP_TIMES_ROMAN_24); //92

		myItoa(arr[0][2],x[18],10);
		iText(200+6*a/2.5,200-a/1.7+9*a,x[18],GLUT_BITMAP_TIMES_ROMAN_24); //13
		myItoa(arr[1][2],x[19],10);
		iText(200+6*a/2.5,200-a/1.7+8*a,x[19],GLUT_BITMAP_TIMES_ROMAN_24); //23
		myItoa(arr[2][2],x[20],10);
		iText(200+6*a/2.5,200-a/1.7+7*a,x[20],GLUT_BITMAP_TIMES_ROMAN_24); //33
		myItoa(arr[3][2],x[21],10);
		iText(200+6*a/2.5,200-a/1.7+6*a,x[21],GLUT_BITMAP_TIMES_ROMAN_24); //43
		myItoa(arr[4][2],x[22],10);
		iText(200+6*a/2.5,200-a/1.7+5*a,x[22],GLUT_BITMAP_TIMES_ROMAN_24); //53
		myItoa(arr[5][2],x[23],10);
		iText(200+6*a/2.5,200-a/1.7+4*a,x[23],GLUT_BITMAP_TIMES_ROMAN_24); //63
		myItoa(arr[6][2],x[24],10);
		iText(200+6*a/2.5,200-a/1.7+3*a,x[24],GLUT_BITMAP_TIMES_ROMAN_24); //73
		myItoa(arr[7][2],x[25],10);
		iText(200+6*a/2.5,200-a/1.7+2*a,x[25],GLUT_BITMAP_TIMES_ROMAN_24); //83
		myItoa(arr[8][2],x[26],10);
		iText(200+6*a/2.5,200-a/1.7+1*a,x[26],GLUT_BITMAP_TIMES_ROMAN_24); //93

		myItoa(arr[0][3],x[27],10);
		iText(200+8.5*a/2.5,200-a/1.7+9*a,x[27],GLUT_BITMAP_TIMES_ROMAN_24); //14
		myItoa(arr[1][3],x[28],10);
		iText(200+8.5*a/2.5,200-a/1.7+8*a,x[28],GLUT_BITMAP_TIMES_ROMAN_24); //24
		myItoa(arr[2][3],x[29],10);
		iText(200+8.5*a/2.5,200-a/1.7+7*a,x[29],GLUT_BITMAP_TIMES_ROMAN_24); //34
		myItoa(arr[3][3],x[30],10);
		iText(200+8.5*a/2.5,200-a/1.7+6*a,x[30],GLUT_BITMAP_TIMES_ROMAN_24); //44
		myItoa(arr[4][3],x[31],10);
		iText(200+8.5*a/2.5,200-a/1.7+5*a,x[31],GLUT_BITMAP_TIMES_ROMAN_24); //54
		myItoa(arr[5][3],x[32],10);
		iText(200+8.5*a/2.5,200-a/1.7+4*a,x[32],GLUT_BITMAP_TIMES_ROMAN_24); //64
		myItoa(arr[6][3],x[33],10);
		iText(200+8.5*a/2.5,200-a/1.7+3*a,x[33],GLUT_BITMAP_TIMES_ROMAN_24); //74
		myItoa(arr[7][3],x[34],10);
		iText(200+8.5*a/2.5,200-a/1.7+2*a,x[34],GLUT_BITMAP_TIMES_ROMAN_24); //84
		myItoa(arr[8][3],x[35],10);
		iText(200+8.5*a/2.5,200-a/1.7+1*a,x[35],GLUT_BITMAP_TIMES_ROMAN_24); //94

		myItoa(arr[0][4],x[36],10);
		iText(200+11*a/2.5,200-a/1.7+9*a,x[36],GLUT_BITMAP_TIMES_ROMAN_24); //15
		myItoa(arr[1][4],x[37],10);
		iText(200+11*a/2.5,200-a/1.7+8*a,x[37],GLUT_BITMAP_TIMES_ROMAN_24); //25
		myItoa(arr[2][4],x[38],10);
		iText(200+11*a/2.5,200-a/1.7+7*a,x[38],GLUT_BITMAP_TIMES_ROMAN_24); //35
		myItoa(arr[3][4],x[39],10);
		iText(200+11*a/2.5,200-a/1.7+6*a,x[39],GLUT_BITMAP_TIMES_ROMAN_24); //45
		myItoa(arr[4][4],x[40],10);
		iText(200+11*a/2.5,200-a/1.7+5*a,x[40],GLUT_BITMAP_TIMES_ROMAN_24); //55
		myItoa(arr[5][4],x[41],10);
		iText(200+11*a/2.5,200-a/1.7+4*a,x[41],GLUT_BITMAP_TIMES_ROMAN_24); //65
		myItoa(arr[6][4],x[42],10);
		iText(200+11*a/2.5,200-a/1.7+3*a,x[42],GLUT_BITMAP_TIMES_ROMAN_24); //75
		myItoa(arr[7][4],x[43],10);
		iText(200+11*a/2.5,200-a/1.7+2*a,x[43],GLUT_BITMAP_TIMES_ROMAN_24); //85
		myItoa(arr[8][4],x[44],10);
		iText(200+11*a/2.5,200-a/1.7+1*a,x[44],GLUT_BITMAP_TIMES_ROMAN_24); //95

		myItoa(arr[0][5],x[45],10);
		iText(200+13.5*a/2.5,200-a/1.7+9*a,x[45],GLUT_BITMAP_TIMES_ROMAN_24); //16
		myItoa(arr[1][5],x[46],10);
		iText(200+13.5*a/2.5,200-a/1.7+8*a,x[46],GLUT_BITMAP_TIMES_ROMAN_24); //26
		myItoa(arr[2][5],x[47],10);
		iText(200+13.5*a/2.5,200-a/1.7+7*a,x[47],GLUT_BITMAP_TIMES_ROMAN_24); //36
		myItoa(arr[3][5],x[48],10);
		iText(200+13.5*a/2.5,200-a/1.7+6*a,x[48],GLUT_BITMAP_TIMES_ROMAN_24); //46
		myItoa(arr[4][5],x[49],10);
		iText(200+13.5*a/2.5,200-a/1.7+5*a,x[49],GLUT_BITMAP_TIMES_ROMAN_24); //56
		myItoa(arr[5][5],x[50],10);
		iText(200+13.5*a/2.5,200-a/1.7+4*a,x[50],GLUT_BITMAP_TIMES_ROMAN_24); //66
		myItoa(arr[6][5],x[51],10);
		iText(200+13.5*a/2.5,200-a/1.7+3*a,x[51],GLUT_BITMAP_TIMES_ROMAN_24); //76
		myItoa(arr[7][5],x[52],10);
		iText(200+13.5*a/2.5,200-a/1.7+2*a,x[52],GLUT_BITMAP_TIMES_ROMAN_24); //86
		myItoa(arr[8][5],x[53],10);
		iText(200+13.5*a/2.5,200-a/1.7+1*a,x[53],GLUT_BITMAP_TIMES_ROMAN_24); //96

		myItoa(arr[0][6],x[54],10);
		iText(200+16*a/2.5,200-a/1.7+9*a,x[54],GLUT_BITMAP_TIMES_ROMAN_24); //17
		myItoa(arr[1][6],x[55],10);
		iText(200+16*a/2.5,200-a/1.7+8*a,x[55],GLUT_BITMAP_TIMES_ROMAN_24); //27
		myItoa(arr[2][6],x[56],10);
		iText(200+16*a/2.5,200-a/1.7+7*a,x[56],GLUT_BITMAP_TIMES_ROMAN_24); //37
		myItoa(arr[3][6],x[57],10);
		iText(200+16*a/2.5,200-a/1.7+6*a,x[57],GLUT_BITMAP_TIMES_ROMAN_24); //47
		myItoa(arr[4][6],x[58],10);
		iText(200+16*a/2.5,200-a/1.7+5*a,x[58],GLUT_BITMAP_TIMES_ROMAN_24); //57
		myItoa(arr[5][6],x[59],10);
		iText(200+16*a/2.5,200-a/1.7+4*a,x[59],GLUT_BITMAP_TIMES_ROMAN_24); //67
		myItoa(arr[6][6],x[60],10);
		iText(200+16*a/2.5,200-a/1.7+3*a,x[60],GLUT_BITMAP_TIMES_ROMAN_24); //77
		myItoa(arr[7][6],x[61],10);
		iText(200+16*a/2.5,200-a/1.7+2*a,x[61],GLUT_BITMAP_TIMES_ROMAN_24); //87
		myItoa(arr[8][6],x[62],10);
		iText(200+16*a/2.5,200-a/1.7+1*a,x[62],GLUT_BITMAP_TIMES_ROMAN_24); //97

		myItoa(arr[0][7],x[63],10);
		iText(200+18.5*a/2.5,200-a/1.7+9*a,x[63],GLUT_BITMAP_TIMES_ROMAN_24); //18
		myItoa(arr[1][7],x[64],10);
		iText(200+18.5*a/2.5,200-a/1.7+8*a,x[64],GLUT_BITMAP_TIMES_ROMAN_24); //28
		myItoa(arr[2][7],x[65],10);
		iText(200+18.5*a/2.5,200-a/1.7+7*a,x[65],GLUT_BITMAP_TIMES_ROMAN_24); //38
		myItoa(arr[3][7],x[66],10);
		iText(200+18.5*a/2.5,200-a/1.7+6*a,x[66],GLUT_BITMAP_TIMES_ROMAN_24); //48
		myItoa(arr[4][7],x[67],10);
		iText(200+18.5*a/2.5,200-a/1.7+5*a,x[67],GLUT_BITMAP_TIMES_ROMAN_24); //58
		myItoa(arr[5][7],x[68],10);
		iText(200+18.5*a/2.5,200-a/1.7+4*a,x[68],GLUT_BITMAP_TIMES_ROMAN_24); //68
		myItoa(arr[6][7],x[69],10);
		iText(200+18.5*a/2.5,200-a/1.7+3*a,x[69],GLUT_BITMAP_TIMES_ROMAN_24); //78
		myItoa(arr[7][7],x[70],10);
		iText(200+18.5*a/2.5,200-a/1.7+2*a,x[70],GLUT_BITMAP_TIMES_ROMAN_24); //88
		myItoa(arr[8][7],x[71],10);
		iText(200+18.5*a/2.5,200-a/1.7+1*a,x[71],GLUT_BITMAP_TIMES_ROMAN_24); //98

		myItoa(arr[0][8],x[72],10);
		iText(200+21*a/2.5,200-a/1.7+9*a,x[72],GLUT_BITMAP_TIMES_ROMAN_24); //19
		myItoa(arr[1][8],x[73],10);
		iText(200+21*a/2.5,200-a/1.7+8*a,x[73],GLUT_BITMAP_TIMES_ROMAN_24); //29
		myItoa(arr[2][8],x[74],10);
		iText(200+21*a/2.5,200-a/1.7+7*a,x[74],GLUT_BITMAP_TIMES_ROMAN_24); //39
		myItoa(arr[3][8],x[75],10);
		iText(200+21*a/2.5,200-a/1.7+6*a,x[75],GLUT_BITMAP_TIMES_ROMAN_24); //49
		myItoa(arr[4][8],x[76],10);
		iText(200+21*a/2.5,200-a/1.7+5*a,x[76],GLUT_BITMAP_TIMES_ROMAN_24); //59
		myItoa(arr[5][8],x[77],10);
		iText(200+21*a/2.5,200-a/1.7+4*a,x[77],GLUT_BITMAP_TIMES_ROMAN_24); //69
		myItoa(arr[6][8],x[78],10);
		iText(200+21*a/2.5,200-a/1.7+3*a,x[78],GLUT_BITMAP_TIMES_ROMAN_24); //79
		myItoa(arr[7][8],x[79],10);
		iText(200+21*a/2.5,200-a/1.7+2*a,x[79],GLUT_BITMAP_TIMES_ROMAN_24); //89
		myItoa(arr[8][8],x[80],10);
		iText(200+21*a/2.5,200-a/1.7+1*a,x[80],GLUT_BITMAP_TIMES_ROMAN_24); //99



		//for load arry
		iSetColor(90,207,110);
		//myItoa(load_array[0][0],x[0],10);
		//iText(200+a/2.5,200-a/1.7+9*a,x[0],GLUT_BITMAP_TIMES_ROMAN_24);  //11
		myItoa(load_array[1][0],x[1],10);
		iText(200+a/2.5,200-a/1.7+8*a,x[1],GLUT_BITMAP_TIMES_ROMAN_24);  //21
		//myItoa(load_array[2][0],x[2],10);
		//iText(200+a/2.5,200-a/1.7+7*a,x[2],GLUT_BITMAP_TIMES_ROMAN_24); //31
		//myItoa(load_array[3][0],x[3],10);
		//iText(200+a/2.5,200-a/1.7+6*a,x[3],GLUT_BITMAP_TIMES_ROMAN_24);  //41
		//myItoa(load_array[4][0],x[4],10);
		//iText(200+a/2.5,200-a/1.7+5*a,x[4],GLUT_BITMAP_TIMES_ROMAN_24);  //51
		//myItoa(load_array[5][0],x[5],10);
		//iText(200+a/2.5,200-a/1.7+4*a,x[5],GLUT_BITMAP_TIMES_ROMAN_24);  //61
		//myItoa(load_array[6][0],x[6],10);
		//iText(200+a/2.5,200-a/1.7+3*a,x[6],GLUT_BITMAP_TIMES_ROMAN_24);  //71
		//myItoa(load_array[7][0],x[7],10);
		//iText(200+a/2.5,200-a/1.7+2*a,x[7],GLUT_BITMAP_TIMES_ROMAN_24);  //81
		//myItoa(load_array[8][0],x[8],10);
		//iText(200+a/2.5,200-a/1.7+1*a,x[8],GLUT_BITMAP_TIMES_ROMAN_24);  //91

		//for load arry
		//myItoa(load_array[0][1],x[9],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+9*a,x[9],GLUT_BITMAP_TIMES_ROMAN_24); //12
		//myItoa(load_array[1][1],x[10],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+8*a,x[10],GLUT_BITMAP_TIMES_ROMAN_24); //22
		//myItoa(load_array[2][1],x[11],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+7*a,x[11],GLUT_BITMAP_TIMES_ROMAN_24); //32
		//myItoa(load_array[3][1],x[12],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+6*a,x[12],GLUT_BITMAP_TIMES_ROMAN_24); //42
		//myItoa(load_array[4][1],x[13],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+5*a,x[13],GLUT_BITMAP_TIMES_ROMAN_24); //52
		//myItoa(load_array[5][1],x[14],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+4*a,x[14],GLUT_BITMAP_TIMES_ROMAN_24); //62
		//myItoa(load_array[6][1],x[15],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+3*a,x[15],GLUT_BITMAP_TIMES_ROMAN_24); //72
		//myItoa(load_array[7][1],x[16],10);
		//iText(200+3.5*a/2.5,200-1.5*a/2.5+2*a,x[16],GLUT_BITMAP_TIMES_ROMAN_24); //82
		myItoa(load_array[8][1],x[17],10);
		iText(200+3.5*a/2.5,200-1.5*a/2.5+1*a,x[17],GLUT_BITMAP_TIMES_ROMAN_24); //92

		//for load arry
		//myItoa(load_array[0][2],x[18],10);
		//iText(200+6*a/2.5,200-a/1.7+9*a,x[18],GLUT_BITMAP_TIMES_ROMAN_24); //13
		//myItoa(load_array[1][2],x[19],10);
		//iText(200+6*a/2.5,200-a/1.7+8*a,x[19],GLUT_BITMAP_TIMES_ROMAN_24); //23
		//myItoa(load_array[2][2],x[20],10);
		//iText(200+6*a/2.5,200-a/1.7+7*a,x[20],GLUT_BITMAP_TIMES_ROMAN_24); //33
		//myItoa(load_array[3][2],x[21],10);
		//iText(200+6*a/2.5,200-a/1.7+6*a,x[21],GLUT_BITMAP_TIMES_ROMAN_24); //43
		//myItoa(load_array[4][2],x[22],10);
		//iText(200+6*a/2.5,200-a/1.7+5*a,x[22],GLUT_BITMAP_TIMES_ROMAN_24); //53
		//myItoa(load_array[5][2],x[23],10);
		//iText(200+6*a/2.5,200-a/1.7+4*a,x[23],GLUT_BITMAP_TIMES_ROMAN_24); //63
		//myItoa(load_array[6][2],x[24],10);
		//iText(200+6*a/2.5,200-a/1.7+3*a,x[24],GLUT_BITMAP_TIMES_ROMAN_24); //73
		myItoa(load_array[7][2],x[25],10);
		iText(200+6*a/2.5,200-a/1.7+2*a,x[25],GLUT_BITMAP_TIMES_ROMAN_24); //83
		//myItoa(load_array[8][2],x[26],10);
		//iText(200+6*a/2.5,200-a/1.7+1*a,x[26],GLUT_BITMAP_TIMES_ROMAN_24); //93

		//for load arry
		myItoa(load_array[0][3],x[27],10);
		iText(200+8.5*a/2.5,200-a/1.7+9*a,x[27],GLUT_BITMAP_TIMES_ROMAN_24); //14
		//myItoa(load_array[1][3],x[28],10);
		//iText(200+8.5*a/2.5,200-a/1.7+8*a,x[28],GLUT_BITMAP_TIMES_ROMAN_24); //24
		myItoa(load_array[2][3],x[29],10);
		iText(200+8.5*a/2.5,200-a/1.7+7*a,x[29],GLUT_BITMAP_TIMES_ROMAN_24); //34
		//myItoa(load_array[3][3],x[30],10);
		//iText(200+8.5*a/2.5,200-a/1.7+6*a,x[30],GLUT_BITMAP_TIMES_ROMAN_24); //44
		myItoa(load_array[4][3],x[31],10);
		iText(200+8.5*a/2.5,200-a/1.7+5*a,x[31],GLUT_BITMAP_TIMES_ROMAN_24); //54
		//myItoa(load_array[5][3],x[32],10);
		//iText(200+8.5*a/2.5,200-a/1.7+4*a,x[32],GLUT_BITMAP_TIMES_ROMAN_24); //64
		//myItoa(load_array[6][3],x[33],10);
		//iText(200+8.5*a/2.5,200-a/1.7+3*a,x[33],GLUT_BITMAP_TIMES_ROMAN_24); //74
		//myItoa(load_array[7][3],x[34],10);
		//iText(200+8.5*a/2.5,200-a/1.7+2*a,x[34],GLUT_BITMAP_TIMES_ROMAN_24); //84
		//myItoa(load_array[8][3],x[35],10);
		//iText(200+8.5*a/2.5,200-a/1.7+1*a,x[35],GLUT_BITMAP_TIMES_ROMAN_24); //94

		//for load arry
		//myItoa(load_array[0][4],x[36],10);
		//iText(200+11*a/2.5,200-a/1.7+9*a,x[36],GLUT_BITMAP_TIMES_ROMAN_24); //15
		//myItoa(load_array[1][4],x[37],10);
		//iText(200+11*a/2.5,200-a/1.7+8*a,x[37],GLUT_BITMAP_TIMES_ROMAN_24); //25
		myItoa(load_array[2][4],x[38],10);
		iText(200+11*a/2.5,200-a/1.7+7*a,x[38],GLUT_BITMAP_TIMES_ROMAN_24); //35
		//myItoa(load_array[3][4],x[39],10);
		//iText(200+11*a/2.5,200-a/1.7+6*a,x[39],GLUT_BITMAP_TIMES_ROMAN_24); //45
		//myItoa(load_array[4][4],x[40],10);
		//iText(200+11*a/2.5,200-a/1.7+5*a,x[40],GLUT_BITMAP_TIMES_ROMAN_24); //55
		//myItoa(load_array[5][4],x[41],10);
		//iText(200+11*a/2.5,200-a/1.7+4*a,x[41],GLUT_BITMAP_TIMES_ROMAN_24); //65
		myItoa(load_array[6][4],x[42],10);
		iText(200+11*a/2.5,200-a/1.7+3*a,x[42],GLUT_BITMAP_TIMES_ROMAN_24); //75
		//myItoa(load_array[7][4],x[43],10);
		//iText(200+11*a/2.5,200-a/1.7+2*a,x[43],GLUT_BITMAP_TIMES_ROMAN_24); //85
		//myItoa(load_array[8][4],x[44],10);
		//iText(200+11*a/2.5,200-a/1.7+1*a,x[44],GLUT_BITMAP_TIMES_ROMAN_24); //95

		//for load arry
		//myItoa(load_array[0][5],x[45],10);
		//iText(200+13.5*a/2.5,200-a/1.7+9*a,x[45],GLUT_BITMAP_TIMES_ROMAN_24); //16
		//myItoa(load_array[1][5],x[46],10);
		//iText(200+13.5*a/2.5,200-a/1.7+8*a,x[46],GLUT_BITMAP_TIMES_ROMAN_24); //26
		//myItoa(load_array[2][5],x[47],10);
		//iText(200+13.5*a/2.5,200-a/1.7+7*a,x[47],GLUT_BITMAP_TIMES_ROMAN_24); //36
		//myItoa(load_array[3][5],x[48],10);
		//iText(200+13.5*a/2.5,200-a/1.7+6*a,x[48],GLUT_BITMAP_TIMES_ROMAN_24); //46
		myItoa(load_array[4][5],x[49],10);
		iText(200+13.5*a/2.5,200-a/1.7+5*a,x[49],GLUT_BITMAP_TIMES_ROMAN_24); //56
		//myItoa(load_array[5][5],x[50],10);
		//iText(200+13.5*a/2.5,200-a/1.7+4*a,x[50],GLUT_BITMAP_TIMES_ROMAN_24); //66
		myItoa(load_array[6][5],x[51],10);
		iText(200+13.5*a/2.5,200-a/1.7+3*a,x[51],GLUT_BITMAP_TIMES_ROMAN_24); //76
		//myItoa(load_array[7][5],x[52],10);
		//iText(200+13.5*a/2.5,200-a/1.7+2*a,x[52],GLUT_BITMAP_TIMES_ROMAN_24); //86
		//myItoa(load_array[8][5],x[53],10);
		//iText(200+13.5*a/2.5,200-a/1.7+1*a,x[53],GLUT_BITMAP_TIMES_ROMAN_24); //96

		//for load arry
		//myItoa(load_array[0][6],x[54],10);
		//iText(200+16*a/2.5,200-a/1.7+9*a,x[54],GLUT_BITMAP_TIMES_ROMAN_24); //17
		//myItoa(load_array[1][6],x[55],10);
		//iText(200+16*a/2.5,200-a/1.7+8*a,x[55],GLUT_BITMAP_TIMES_ROMAN_24); //27
		myItoa(load_array[2][6],x[56],10);
		iText(200+16*a/2.5,200-a/1.7+7*a,x[56],GLUT_BITMAP_TIMES_ROMAN_24); //37
		//myItoa(load_array[3][6],x[57],10);
		//iText(200+16*a/2.5,200-a/1.7+6*a,x[57],GLUT_BITMAP_TIMES_ROMAN_24); //47
		//myItoa(load_array[4][6],x[58],10);
		//iText(200+16*a/2.5,200-a/1.7+5*a,x[58],GLUT_BITMAP_TIMES_ROMAN_24); //57
		myItoa(load_array[5][6],x[59],10);
		iText(200+16*a/2.5,200-a/1.7+4*a,x[59],GLUT_BITMAP_TIMES_ROMAN_24); //67
		//myItoa(load_array[6][6],x[60],10);
		//iText(200+16*a/2.5,200-a/1.7+3*a,x[60],GLUT_BITMAP_TIMES_ROMAN_24); //77
		//myItoa(load_array[7][6],x[61],10);
		//iText(200+16*a/2.5,200-a/1.7+2*a,x[61],GLUT_BITMAP_TIMES_ROMAN_24); //87
		myItoa(load_array[8][6],x[62],10);
		iText(200+16*a/2.5,200-a/1.7+1*a,x[62],GLUT_BITMAP_TIMES_ROMAN_24); //97

		//for load arry
		//myItoa(load_array[0][7],x[63],10);
		//iText(200+18.5*a/2.5,200-a/1.7+9*a,x[63],GLUT_BITMAP_TIMES_ROMAN_24); //18
		//myItoa(load_array[1][7],x[64],10);
		//iText(200+18.5*a/2.5,200-a/1.7+8*a,x[64],GLUT_BITMAP_TIMES_ROMAN_24); //28
		//myItoa(load_array[2][7],x[65],10);
		//iText(200+18.5*a/2.5,200-a/1.7+7*a,x[65],GLUT_BITMAP_TIMES_ROMAN_24); //38
		//myItoa(load_array[3][7],x[66],10);
		//iText(200+18.5*a/2.5,200-a/1.7+6*a,x[66],GLUT_BITMAP_TIMES_ROMAN_24); //48
		//myItoa(load_array[4][7],x[67],10);
		//iText(200+18.5*a/2.5,200-a/1.7+5*a,x[67],GLUT_BITMAP_TIMES_ROMAN_24); //58
		myItoa(load_array[5][7],x[68],10);
		iText(200+18.5*a/2.5,200-a/1.7+4*a,x[68],GLUT_BITMAP_TIMES_ROMAN_24); //68
		//myItoa(load_array[6][7],x[69],10);
		//iText(200+18.5*a/2.5,200-a/1.7+3*a,x[69],GLUT_BITMAP_TIMES_ROMAN_24); //78
		myItoa(load_array[7][7],x[70],10);
		iText(200+18.5*a/2.5,200-a/1.7+2*a,x[70],GLUT_BITMAP_TIMES_ROMAN_24); //88
		//myItoa(load_array[8][7],x[71],10);
		//iText(200+18.5*a/2.5,200-a/1.7+1*a,x[71],GLUT_BITMAP_TIMES_ROMAN_24); //98

		//for load arry
		//myItoa(load_array[0][8],x[72],10);
		//iText(200+21*a/2.5,200-a/1.7+9*a,x[72],GLUT_BITMAP_TIMES_ROMAN_24); //19
		//myItoa(load_array[1][8],x[73],10);
		//iText(200+21*a/2.5,200-a/1.7+8*a,x[73],GLUT_BITMAP_TIMES_ROMAN_24); //29
		//myItoa(load_array[2][8],x[74],10);
		//iText(200+21*a/2.5,200-a/1.7+7*a,x[74],GLUT_BITMAP_TIMES_ROMAN_24); //39
		myItoa(load_array[3][8],x[75],10);
		iText(200+21*a/2.5,200-a/1.7+6*a,x[75],GLUT_BITMAP_TIMES_ROMAN_24); //49
		//myItoa(load_array[4][8],x[76],10);
		//iText(200+21*a/2.5,200-a/1.7+5*a,x[76],GLUT_BITMAP_TIMES_ROMAN_24); //59
		myItoa(load_array[5][8],x[77],10);
		iText(200+21*a/2.5,200-a/1.7+4*a,x[77],GLUT_BITMAP_TIMES_ROMAN_24); //69
		//myItoa(load_array[6][8],x[78],10);
		//iText(200+21*a/2.5,200-a/1.7+3*a,x[78],GLUT_BITMAP_TIMES_ROMAN_24); //79
		//myItoa(load_array[7][8],x[79],10);
		//iText(200+21*a/2.5,200-a/1.7+2*a,x[79],GLUT_BITMAP_TIMES_ROMAN_24); //89
		//myItoa(load_array[8][8],x[80],10);
		//iText(200+21*a/2.5,200-a/1.7+1*a,x[80],GLUT_BITMAP_TIMES_ROMAN_24); //99

		iShowImage(425,140,50,50,check);

		iShowImage(13,737,90,50,back);

}

#endif //NewGame_H_INCLUDED
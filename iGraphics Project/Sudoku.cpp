# include "iGraphics.h"
# include "myheader.h"
# include "myVariables.h"
# include "myLoadPicture.h"
#include<string.h>
#include "File.h"
#include "Filecompare.h"
#include "NewGame.h"
#include "greedtouch.h"


void LoadingPage()
{
	loadshow++;

}
void MainMenu()
{

	iShowImage(0,0,900,800,menu);
}



void iDraw()
{
	
	iClear();
	iShowImage(0,0,900,800,image2);
	if (loadshow == 1)
	{
		iShowImage(0,0,900,800,image2);
	}
	
	if (loadshow == 2)
	{
		MainMenu();
		iPauseTimer(t);
	}

	if (NewGame == 1)
	{
		iClear();
		NewGameInside();
		if (check == 1)
		{
			match();
		}
	}
	
	if (MenuAbout == 1)
	{
		iClear();
		iShowImage(0, 0, 900, 800, about);
		iShowImage(13,737,90,50,back);
	}

	if (MenuHighScore == 1)
	{
		iClear();
		iShowImage(0, 0, 900,800, score);
		iShowImage(13,737,90,50,back);
	}

	else if (MenuBack == 1)
	{
		iClear();
		iShowImage(0, 0, 900,800, menu);
	}
}


void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouse(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		menux = mx;
		menuy = my;

		if (menux >= 62 && menux <= 340 && menuy >= 500 && menuy <= 585 && MenuHighScore != 1 && MenuAbout != 1 && Quit!=1)  //New game button activation
		        {
				    NewGame = 1;
					MenuHighScore = 0;
					MenuAbout = 0;
					MenuBack = 0;
					Quit=0;
	
		        }	
		else if (mx >= 62 && mx <= 340 && my >= 407 && my <= 490 && MenuAbout != 1 && NewGame!=1 && Quit!=1)  //highscore
				{
					NewGame = 0;
					MenuHighScore = 1;
					MenuAbout = 0;
					MenuBack = 0;
					Quit=0;
		}

		else if (mx >= 62 && mx <= 340 && my >=313  && my <= 396 && MenuHighScore!=1 && NewGame!=1 && Quit!=1) //about activation
				{
					NewGame = 0;
					MenuHighScore = 0;
					MenuAbout = 1;
					MenuBack = 0;
					Quit=0;
				}
		else if (mx >= 62 && mx <= 340 && my >=219  && my <= 302 && MenuHighScore!=1 && NewGame!=1) //Quit activation
				{
					NewGame = 0;
					MenuHighScore = 0;
					MenuAbout = 0;
					MenuBack = 0;
					Quit=1;
					exit(0);
				}


		else if (mx >= 13 && mx <= 90 && my >= 737 && my <= 777)   ///back button
				{
					NewGame=0;
					MenuHighScore = 0;
					MenuAbout = 0;
					MenuBack = 1;
					Quit=0;
				}
		if (mx >= 425 && mx <= 475 && my >= 140 && my <= 190 && NewGame==1)  ///check button
				{
					NewGame = 1;
					MenuHighScore = 0;
					MenuAbout = 0;
					MenuBack = 0;
					Quit=0;
					check=1;
				}

	///greedtouch work
	allworks(mx,my);

	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
	}
}


void iKeyboard(unsigned char key)
{
	if(mode == 1)
	{
        if(key == '\r')
		{
			len = 0;
		}
		FILE *sudoku2 = fopen("sudoku2.txt", "w"); 
		if(key == '3' || key=='1' || key=='2' || key=='4' || key=='5' || key=='6' || key=='7' || key=='8' || key=='9')
		{
			load_array[bc][ab]=key-'0';
			for(int i = 0; i < 9; i++){
			fprintf(sudoku2, "%d %d %d %d %d %d %d %d %d\n", load_array[i][0], load_array[i][1], load_array[i][2], load_array[i][3], load_array[i][4], load_array[i][5], load_array[i][6], load_array[i][7], load_array[i][8]);
			}

		}
		fclose(sudoku2);
	}

	if(key == 'x')
	{
		exit(0);
	}
}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}



int main()
{
	
	play();
	iInitialize(900, 800, "Sudoku");

	iSetTimer(20, objectChange);

	dx = 5;
	dy = 7;

	pic_x = 0;
	pic_y = 0;

	len = 0;
	mode = 0;
	str[0]= 0;

	mode1=0;
	str1[0]=0;


	loadPicture();
	t = iSetTimer(1000, LoadingPage);

	iStart(); 

	return 0;
}


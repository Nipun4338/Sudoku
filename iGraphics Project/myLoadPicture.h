#ifndef myLoadPicture_H_INCLUDED
#define myLoadPicture_H_INCLUDED
#include"myVariables.h"

/*loads all the pictures in this game;called from iMain;return type void*/
void loadPicture()
{

	
	image1 = iLoadImage("images\\Image1.jpg");

	image2 =iLoadImage("images\\image2.png");
	
	image3=iLoadImage("greed.png");
    menu = iLoadImage("menu.png");
	about=iLoadImage("about.png");
	score=iLoadImage("score.png");
	back=iLoadImage("back.png");
	done=iLoadImage("done.jpg");
	undone=iLoadImage("undone.jpg");
	check=iLoadImage("check.png");




}

	







#endif // myLoadPicture_H_INCLUDED
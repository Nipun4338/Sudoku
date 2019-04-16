#ifndef File_compare_H_INCLUDED
#define File_compare_H_INCLUDED
# include "myVariables.h"
# include "myLoadPicture.h"
#include<string.h>
#include "File.h"

void match(){
	FILE *s1,*s2;
	int x,y;
	s1=fopen("sudokusolution.txt","r");
    s2=fopen("sudoku2.txt","r");
	if(s1!=NULL || s2!=NULL)
    {
        x=getc(s1);
        y=getc(s2);

        while(x!=EOF && y!=EOF)
        {
            x=getc(s1);
            y=getc(s2);
        }

        if(x==y)
        {
            iShowImage(0,0,900,800,done);
			iShowImage(13,737,90,50,back);
        }
        else if(x!=y)
        {
            iShowImage(0,0,900,800,undone);
			iShowImage(13,737,90,50,back);
        }
    }
    fclose(s1);
    fclose(s2);
}

#endif //File_compare_H_INCLUDED
#ifndef allworks_H_INCLUDED
#define allworks_H_INCLUDED
# include "myVariables.h"
# include "myLoadPicture.h"
#include<string.h>

void allworks(int mx, int my)
{
	
		if(mx >=200 && mx <=200+9*a && my >=200 && my <=200+9*a && NewGame==1)
		{
			if(mx>=200 && mx<=255.55)
			{
				ab=0;
			}
			else if(mx>255.55 && mx<=311.1)
			{
				ab=1;
			}
			else if(mx>311.1 && mx<=366.65)
			{
				ab=2;
			}
			else if(mx>366.65 && mx<=422.2)
			{
				ab=3;
			}
			else if(mx>422.2 && mx<=477.75)
			{
				ab=4;
			}
			else if(mx>477.75 && mx<=533.3)
			{
				ab=5;
			}
			else if(mx>533.3 && mx<=588.85)
			{
				ab=6;
			}
			else if(mx>588.85 && mx<=644.4)
			{
				ab=7;
			}
			else if(mx>644.4 && mx<=699.95)
			{
				ab=8;
			}



			if(my>=200 && my<=255.55)
			{
				bc=8;
			}
			else if(my>255.55 && my<=311.1)
			{
				bc=7;
			}
			else if(my>311.1 && my<=366.65)
			{
				bc=6;
			}
			else if(my>366.65 && my<=422.2)
			{
				bc=5;
			}
			else if(my>422.2 && my<=477.75)
			{
				bc=4;
			}
			else if(my>477.75 && my<=533.3)
			{
				bc=3;
			}
			else if(my>533.3 && my<=588.85)
			{
				bc=2;
			}
			else if(my>588.85 && my<=644.4)
			{
				bc=1;
			}
			else if(my>644.4 && my<=699.95)
			{
				bc=0;
			}
			mode=1;
		}

}

#endif //allworks_H_INCLUDED
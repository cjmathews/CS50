#include <stdio.h>
#include <cs50.h>
	
int main (void)

{
	int h, p, r;
		
	do
		{
			printf ("Height?");	
			h = GetInt();
		}
	while (h<0 || h>23);
		
	int w=h+1;

	for (r=h; r>0; r--)
		for (p=0; p<=w; p++)
			if (p<(r-1))
				printf (" ");
			else if (p==w)
				printf ("\n");
			else 
				printf ("#");
}
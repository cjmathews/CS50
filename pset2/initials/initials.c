#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string s = get_string ();
    if (s != NULL)
    {
        printf ("%c",s[0]);
    	for (int i=0; i<strlen(s); i++)
    		{
    			if (s[i] == (' '))
    			printf ("%c",toupper (s[i+1]));
    		}
    	printf ("\n");
        
        
        
        
        
        
//        for (int j=0,i=strlen (s); j<i; j++)
//        {
//            for (int n=0; char s[j] != " ";n++)
//            printf("%c", toupper (s[j]));
//        }
//        printf("\n");
    }
}    
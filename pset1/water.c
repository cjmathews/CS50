#include <stdio.h>
#include <cs50.h>

int main (void)

{
    printf ("How long does your shower take? ");
    int s = GetInt();
    printf ("You use %i bottles of water\n", s*12);
}
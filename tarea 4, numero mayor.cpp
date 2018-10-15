#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main (void)
{
    int a;
    int b;
    int c;
    int n;
    printf("\n introcuce el valor de a");
    scanf("%d",&a);
    printf("\n introduce el valor de b");
    scanf("%d",&b);
    printf("\n introduce el valor de c");
    scanf("%d",&c);
    if(a>= b && a>=c)
    printf("\n %d es el mayor. ",a);
    else 
    if (b>c)
    printf("\n %d es el mayor.",b);
    else
    printf("\n %d es el mayor.",c);
    
    getch ();
    return 0;
}

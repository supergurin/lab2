#include <stdio.h>

int max (float a, float b)

{
    if (a > b) {

    return a;

    } else {
	
    return b;
    
    }

}

int main ()

{

    int a, b, y;
    
    printf ("Vvedite a: ");
    scanf ("%d", &a);
    
    printf ("\nVvedite b: ");
    scanf ("%d", &b);
   
    y = max(a, b);

    printf("Max: %d", y);

    return 0; 

}

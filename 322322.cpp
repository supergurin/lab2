#include <stdio.h>
#include <math.h>


int main()
{
    int s, f;
    
    printf("Vvedite s: ");
    scanf ("%d", &s);
    
    if ((s >= -3) && (s <= 5)){
    	f = pow(s, 2);
    	printf ("\nf(s)= %d", f);
    } else {
    	f = 6 * s;
    	printf ("\nf(s)= %d", f);
    }
	return 0;
}

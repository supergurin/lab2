#include <stdio.h>
#include <math.h>

int main()
{
    int s, f;
    
    printf("Vvedite s: ");
    scanf ("%d", &s);
    
    if ((s > 0) && (s < 1)){
    	f = s;
    	printf ("f(s)= %d", f);
    } else {
    	if (s > 1){
    	    f = pow (s, 3);
    	    printf ("f(s)= %d", f);
    	} else {
    	    if (s <= 0) {
    	    printf ("f(s)= 0");
    	    }
    	}
    }
	return 0;
}

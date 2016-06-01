#include <stdio.h>

int main() 
{
    double a, b, c;
    
    printf("Vvedite a=");
    scanf("%lf", &a);
    
    if ((a < 8) && (a > -5)){
    	printf("a nahoditsya v intervale (-5,8)");
    } else {
    	printf("a ne nahoditsya v intervale (-5,8)");
    }
    
    printf("\n\nVvedite b=");
    scanf ("%lf", &b);
    
    if ((b < 8)&&(b > -5)){
    	printf("b nahoditsya v intervale(-5,8)");
    } else {
    	printf("b ne nehoditsya v intervale (-5,8)");
    }
    
    printf("\n\nVvedite c=");
    scanf("%lf", &c);
    
    if ((c < 8)&&(c > -5)){
    	printf("c nahoditsya v intervale (-5,8)");
    }else {
    	printf("c ne nahoditsya v intervale (-5,8)");
    }
		
	return 0;
}

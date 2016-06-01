#include <stdio.h>

int max (float a, float b, float c)
{

   if ((a > b) && (a > c)) {
   return a;
   } else {
   	if ((b > a) && (b > c)){
    		return b;
    	} else {
    		return c;
    	}
	
    return b;
    
    }

int main ()
{
    int a, b, c, y;
	
    printf("Vvedite a:");
    scanf("%d", &a);
    
    printf("Vvedite b:");
    scanf("%d", &b);
    
    printf("Vvedite c:");
    scanf("%d", &c);
    
    y = max(a, b, c);

    printf("%d", y);
	
    return 0;
}

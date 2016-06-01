#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, x1, x2;
	float diskriminant;
	
//	a * pow(x, 2) + b * x + c = 0
	
	printf("Enter a: ");
	scanf("%f", &a);
	
	printf("Enter b: ");
	scanf("%f", &b); 
	
	printf("Enter c: ");
	scanf("%f", &c);  
	
	diskriminant = pow(b, 2) - 4 * a * c; 

	if ((a == 0) && (b != 0)){
		x = - (c / b);
		printf ("%f", x);
	} else {
		if (diskriminant > 0){
			x1 = (-b + sqrt(diskriminant))/ 2 * a;
			x2 = (-b - sqrt(diskriminant))/ 2 * a;
			printf ("\tx1 = %.2f", x1);
			printf ("\n\tx2 = %.2f", x2);
		} else {
			if (diskriminant <= 0){
			    printf ("\n\tError!");
			}
		}
	}		
	return 0;
}

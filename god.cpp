#include <stdio.h>

int main()
{

	int age, remainder;
	
	printf ("Enter age: ");
	scanf ("%d", &age);
	
	remainder = age%10;
	
	if (remainder == 1){
		printf ("Vam %d god", age);
	} else {
		if ((remainder >= 2) &&(remainder <= 4)){
			printf ("Vam %d goda", age);
		} else {
		printf ("Vam %d let", age);
		} 
	
	}
	return 0;
}

#include <stdio.h>

int main() 
{
	
    	int mouth;
	
	printf("Enter the number of the month: ");
	scanf("%d", &mouth);
	
	if ((mouth <= 2) && (mouth >= 1)) {
		printf("\nWinter.");
	} else {
		if (mouth == 12) {
			printf("\nWinter");
		} else {
			if ((mouth >= 3) && (mouth <= 5)) {
				printf("\nSpring.");
			} else {
				if ((mouth >= 6) && (mouth <= 8)) {
					printf("\nSummer.");
				} else {
					if ((mouth >= 9) && (mouth <= 11)) {
						printf("\nAutumn.");
					} else {
					    printf ("\nError!");
						
					}
				}
			}
		}
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(void){
	int N,i,j;
	scanf("%d",&N);
	for(i=2;i<N;i++){
		int f=0;
		for(j=2;j<i;j++){
			if(i%j==0){
	    		 f=1;
				break;	
			}
		}
		if (f==0)
		printf("%d\n",i);
	}
	getch();
	return(0);
}

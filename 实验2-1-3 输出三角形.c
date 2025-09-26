#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=1;i<=4;i++){
		for(j=4;j>=i;j--)
			printf("*");
		if(i<=3)
			printf("\n");
	}
	return 0;
} 

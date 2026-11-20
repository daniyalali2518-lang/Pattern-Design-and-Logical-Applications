#include<stdio.h>
int main(){
	int i,j,row=3,space;
	
	for(i=1;i<=row;i++){
		for(i=1;i<=row;i++){
		
		for(j=1;j<=(row+1)-i;j++){
			printf("*");
		}
		printf("\n");
	

		for(j=1;j<=i;j++){
			printf("*");
		}
	
		printf("\n");
	}
}
}


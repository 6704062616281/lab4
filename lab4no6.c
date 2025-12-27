#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=0; i<b; i++){
		for(j=0; j<b; j++){
			printf("%d",a);
		}
		printf("\n");
	}
}

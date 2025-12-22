#include<stdio.h>
int main(){
	char x;
	int c,r,i,j;
	scanf("%c %d %d",&x,&c,&r);
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%c",x);
		}
		printf("\n");
	}
}

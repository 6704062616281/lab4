#include <stdio.h>
int main(){
	int score,i;
	for(i=1; i!=-1; i++){
		scanf("%d",&score);
		if(score >= 68){
			if(score > 100){
				printf("error score");
			}else if(score >= 85){
				printf("%d(A)\n",score);
			}else if(score >= 75){
				printf("%d(B)\n",score);
			}else if(score >= 68){
				printf("%d(C)\n",score);
			}
		}else{
			if(score < 0){
				if(score > -2){
	                    break;
	                }
			}else if(score >= 55){
				printf("%d(D)\n",score);
			}else{
				printf("%d(F)\n",score);
			}
		}	
	}
	return 0;
}

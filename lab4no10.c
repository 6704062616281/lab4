#include<stdio.h>
int main(){
	int score,i;
	int a=0,b=0,c=0,d=0,f=0;
	for(i=1; i!=-1; i++){
		scanf("%d",&score);
		if (score >=68){
			if (score >=85){
				printf("%d(A)\n",score);
				a++;
			}else if(score >=75){
				printf("%d(B)\n",score);
				b++;
			}else{
				printf("%d(C)\n",score);
				c++;
			}
		}else{
			if (score < 0){
                if(score > -2){
                    break;
                }
            }
            else if(score <56){
				printf("%d(F)\n",score);
				f++;
			}
			else{
				printf("%d(D)\n",score);
				d++;
			}
		}
	}
	printf("A(%d)\n",a);
    printf("B(%d)\n",b);
    printf("C(%d)\n",c);
    printf("D(%d)\n",d);
    printf("F(%d)\n",f);	
}

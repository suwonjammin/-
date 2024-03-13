#include<cstdio>
int main(){
	int i,N,score,sum=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&score);
		sum= sum + score;
		
	}
	sum= sum/N;
	if(sum>=80){
		printf("easy");
		
	}
	else if(sum>=60){
		printf("normal");
	}
	else{
		printf("hard");
	}
	return 0;
}
 

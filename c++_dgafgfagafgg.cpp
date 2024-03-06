#include<cstdio>

int main(){
	long long N,M,i;
	scanf("%d %d",&N,&M);
	scanf("%d",&i);
	
	if(N/M ==(i-1)/M){
		printf("0");
	}
	else{
		printf("%lld",(i-1)%M+1);
	}
}

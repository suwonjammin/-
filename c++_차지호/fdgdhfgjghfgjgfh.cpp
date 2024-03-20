#include <cstdio>
int main(){
	int N,sum=0;
	int Ai[100000]={0,};
	int Bi[100000]={0,};
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&Ai[i]);
	}
	for(int j=0; j<N; j++){
		scanf("%d",&Bi[j]);
	}
	for(int i=0; i<N; i++){
		if(Ai[i]==Bi[i]){
			sum+=1;
		}
	}
	printf("%d",sum);
	
	return 0;
	
}

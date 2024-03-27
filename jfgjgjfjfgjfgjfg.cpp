#include <cstdio>
int main(){
	int N,max=0,min=101,a=0;
	int Ai[10000];
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){
		scanf("%d",&Ai[i]);
		
	}
	
	for(int i=0; i<N; i++){
		
		if(max<Ai[i]){
			max = Ai[i];
		}
		if(min>Ai[i]){
			min = Ai[i];
		}
		
		a += Ai[i];
		
		
	
}
	a-= max;
	a-= min;
	
	a = a/(N-2);
	
	
	
	printf("%d",a);
	
	return 0;
	
	
	
	
}

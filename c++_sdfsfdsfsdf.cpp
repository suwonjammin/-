#include<cstdio>

int main(){
	int H,M,S,T;
	scanf("%d,%d,%d",&H,&M,&S);
	scanf("%d",&T);
	
	S = S - (T % 60);
	T = T/60;
	
	if(S<0){
		M--;
		S+= 60;
	}
	
	
	
	M = M-(T%60);
	T= T/60;
	if(M<0){
		H = H-1;
		M= M +60;
	}
	H = H-T;
	printf("%d %d %d",H,M,S);
	
}

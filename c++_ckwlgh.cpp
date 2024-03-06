#include<cstdio>

int main(){
	char C;
	int I;
	long long L;
	double D;
	char S[100];
	
	scanf(" %c %d %lld %lf %s",&C,&I,&L,&D,&S);
	printf("%s %.1lf %lld %d %c",S,D,L,I,C);
	
	return 0;
	
	
}

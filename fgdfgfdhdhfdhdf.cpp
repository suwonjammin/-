#include<stdio.h>
int plus= 0;
int Divisor(int n,int s){
	plus = s*10 + n;
	printf("%d",plus);
}

int main(){
	int n;
	int s;
	
	scanf("%d",&n);
	scanf("%d",&s);
	
	Divisor(n,s);
}

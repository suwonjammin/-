#include<stdio.h>

int Sum(int n){
	int a=0;
	for(int i=1;i<=n;i++){
		a += i;
		
	}
	return a;
}

int main(){
	int n;
	
	scanf("%d",&n);
	printf("%d",Sum(n));
	
}

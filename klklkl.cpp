#include <stdio.h>
int plus = 0;
int a(int n){
	plus = (n-2) * (n+1) * n/2;
	return plus ; 
}
int b(int n){
	plus = (n*n*n) - ( (n-1) * (n-1) * (n-1) );
	
	return plus ; 
}
int c(int n){
	plus = (3 * n * n * n) - (n * n) - (3 * n);
	
	return plus ;
}

int main(){
	int n;
	int m;
	scanf("%d",&n);
	scanf("%d",&m);
	if(m==1){
		printf("%d",a(n));
	}
	else if(m==2){
		printf("%d",b(n));
	}
	else{
		printf("%d",c(n));
	}
	
}

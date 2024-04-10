#include<stdio.h>
int Divisor(int n){
	int plus =0;
	for(int i=1; i<=n;i++){
		if(n%i==0){
			plus +=1;
			
		}
	}
	printf("%d",plus);
}

int main(){
	int n;
	scanf("%d",&n);
	Divisor(n);
	
}

#include <cstdio>

int main(){
	int A,B,C,sum=0;
	scanf("%d %d",&A,&B);
	scanf("%d",&C);
	
	sum = B + C;
	
	A+= sum/60;
	B = sum%60;
	if(A>=24){
		A=A%24;
	}
		
	
	
	printf("%d %d",A,B);
	
	
	
	return 0;
	
}

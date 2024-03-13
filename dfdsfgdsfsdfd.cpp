#include<cstdio>
int main(){
	int a1,a2,a3,a4,a5,sum=0;
	scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
	a1=a1*a1;
	a2=a2*a2;
	a3=a3*a3;
	a4=a4*a4;
	a5=a5*a5;
	sum= (a1+a2+a3+a4+a5)%10;
	
	printf("%d",sum);
	
	return 0;
}

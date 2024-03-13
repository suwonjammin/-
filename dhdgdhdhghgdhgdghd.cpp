#include<cstdio>
int main(){
	int a1,a2,a3,a4;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	
	if(a1+a2+a3+a4==3){
		printf("A");
	}
	if(a1+a2+a3+a4==2){
		printf("B");
	}
	if(a1+a2+a3+a4==1){
		printf("C");
	}
	if(a1+a2+a3+a4==4){
		printf("D");
	}
	return 0;
}

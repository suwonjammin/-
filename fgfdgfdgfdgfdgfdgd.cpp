#include<cstdio>
int main(){
	int a[11];
	int b[11];
	int ai=0,bi=0,n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<10;i++){
		if(a[i]>b[i]){
			ai +=1;
		}
		if(a[i]<b[i]){
			bi +=1;
		}
		if(a[i] == b[i]){
			n+=1;
		}
	}
	if(ai > bi){
		printf("a");
	}
	if(ai < bi){
		printf("b");
	}
	if(ai == bi){
		printf("draw");
	}
	
		
	return 0;
}

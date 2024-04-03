#include <cstdio>
int main(){
	int n,max=0,count=0;
 	int h[10000];
 	scanf("%d",&n);
 	
 	for(int i=0; i<n;i++){
 		scanf("%d",&h[i]);
	}
	for(int i=n; n>=0;i--){
		if(h[i]>max){
			max = h[i];
			count ++;
		}
	}
	printf("%d",count);
	
}

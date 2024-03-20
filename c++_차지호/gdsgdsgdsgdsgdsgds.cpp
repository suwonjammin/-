#include <cstdio>
int main(){
	int m,n,min=10000,sum=0;
	
	scanf("%d %d ",&m,&n);
	
	for(int i=m; i<=n;i++){
		for(int j=1; j*j<=n; j++){
			if(i==j*j){
				sum += i;
				if(min>i){
					min = i;
					
				}
			}
		}
	}
	if(sum == 0){
		printf("-1");
	}
	else{
		printf("%d",sum);
		printf("%d",min);
	}
}

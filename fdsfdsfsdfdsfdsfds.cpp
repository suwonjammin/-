#include<cstdio>
const int MAX = 10000;
int is_prime[MAX+1];
int main(){
	
	for(int i=0;i<=MAX;i++){
		is_prime[i] = 1;
	}
	
	is_prime[0] = 0;
	is_prime[1] = 0;
	
	for(int i=2;i<=MAX;i++){
		if(is_prime[i]){
			for(int j = i*i;j<=MAX;j+=1){
				is_prime[j] = 0;
			}
		}
	}
	
	while(1){
		int n;
		scanf("%d",&n);
		if(n == 0){
			break;
		}
		for(int i=2;i<=n/2;i++){
			if(is_prime[i]&&is_prime[i-1]){
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}
		
		}
	}
	
	
}

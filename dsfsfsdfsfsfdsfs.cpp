#include<cstdio>
int is_prime[101];

int main(){
	for(int i=0;i<=100;i++){
		is_prime[i] = 1;
	}
	
	is_prime[0] = 0;
	is_prime[1] = 0;
	
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			for(int j = i*i;j<=n;j+=1){
				is_prime[j] = 0;
			}
		}
	}
	
	for(int i = 2;i<=n;i++){
		if(is_prime[i]){
			printf("%d ",i);
		}
		
	}
}

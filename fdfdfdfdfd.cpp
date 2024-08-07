#include<cstdio>

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int is_prime[n+1];
	for(int i = 0; i<=n;i++){
		is_prime[i] = 1;
		
	}
	
	is_prime[0] = 0;
	is_prime[1] = 0;
	
	for(int i=2;i<=n;i++){
		for(int j=i*i;j<=n;j+=i){
			if(is_prime[j]){
				is_prime[j] = 0;
			}
		}
	}
	                                
	for(int i=m;i<=n;i++){
		if(is_prime[i]){
			printf("%d\n",i);
		}
	}
}

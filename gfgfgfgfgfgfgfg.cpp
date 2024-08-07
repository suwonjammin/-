#include<cstdio>
int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		scanf("%d",&n);
		int q,d,ni,p;
		q = n/25;
		n -= q*25;
		d = n/10;
		n-= d*10;
		ni = n/5;
		n -= ni*5; 
		p = n/1;
		n -=  p*1;
		printf("%d %d %d %d\n",q,d,ni,p);
		
	}
	
	
	
	
}

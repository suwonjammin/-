#include<cstdio>
int gcd(int x ,int y){
		if(y==0){
			return x;
		}
		return gcd(y,x%y);
	}
	
	int main(){
		int t;
		scanf("%d",&t);
		
		while(t--){
			int a,b;
			scanf("%d %d",&a,&b);
			int g = gcd(a,b);
			printf("%d",(a*b)/g);
		}
	}
	


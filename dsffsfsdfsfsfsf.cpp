#include<cstdio>

int gcd(int a, int b){
		if(b==0){
			return 0;
		}
		else{return gcd(b,a%b);
		}
	}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int g = gcd(a,b);
	printf("%d\n%d",g,a*b/g);
	
}

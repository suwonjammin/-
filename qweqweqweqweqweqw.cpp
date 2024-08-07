#include<cstdio>
int tree[100001];

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&tree[i]);
	}
	int gap[100001];
	for(int i=1;i<=n;i++){
		gap[i] = tree[i+1] - tree[i];
	}
	int g= gap[1];
	for(int i=1;i<n;i++){
		g = gcd(gap[i],g);
	}
	int ans = 0;
	for(int i = 1; i< n-1; i++){
		ans += gap[i]/g -1;
	}
	printf("%d",ans);
}

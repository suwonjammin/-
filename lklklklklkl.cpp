#include<cstdio>
int ar[1001];
int dp[1001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
		dp[i] = 1;
	}
	int max = 1;
	
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(ar[i] < ar[j] && dp[i] < dp[j]+1){
				dp[i] = dp[j]+1;
			}
		}
		if(max = dp[i]){
			max = dp[i];
		}
	}
	printf("%d",max);
}
#include<cstdio>
#include<algorithm>
using namespace std;
int stick[2][100];
int dp[2][100];

int main(){
	int t,n;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		
		for(int i=0; i<2;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&stick[i][j]);
			}
		}
	
	dp[0][0] = stick[0][0];
	dp[1][0] = stick[1][0];
	dp[0][1] = stick[0][1];
	dp[1][1] = stick[1][1];
	
	for(int j=2;j<=n;j++){
		dp[0][j] = max(dp[1][j-2],dp[1][j-1])+stick[0][j];
		dp[1][j] = max(dp[0][j-2],dp[0][j-1])+ stick[1][j];
	}
	int ans = max(dp[0][n],dp[1][n]);
	printf("%d\n",ans);
	}
	
	
	
}

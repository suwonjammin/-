#include<cstdio>

int first[1000000];
int second[1000000];

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&first[i]);
	}
	
	int ans = n;
	
	for(int i=0;i<n;i++){
		second[first[i]] = second[first[i] - 1]+1;
		
		if(ans>n-second[first[i]]){
		ans = n - second[first[i]];
	}
	}
	
	
	
	printf("%d",ans);
	
	
}


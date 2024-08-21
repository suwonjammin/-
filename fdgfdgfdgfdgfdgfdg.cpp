#include<cstdio>

int main(){
	int m,n;
	int sum,a= 0;
	int ai[101][101] = {0,};
	int b,c = 0;
	scanf("%d %d",&m,&n);
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&ai[i][j]);
			
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a = ai[i][j]+ai[i][j+1]+ai[i][j-1]+ai[i+1][j]+ai[i-1][j];
			if(sum < a){
				sum = a;
				b = i;
				c = j;
				
				
			}
		}
	}
	printf("%d %d %d",b,c,sum);
}

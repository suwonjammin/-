#include<cstdio>
int main{
	int n;
	int paper[101][101];
	
	scanf("%d",n);
	
	while(n--){
		int x,y;
		scanf("%d %d",&x,&y);
		
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				paper[i][j] = 1;
			}
		}
	}
	int count = 0;
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			count ++ ;
		}
	}
	printf("%d",count);
}

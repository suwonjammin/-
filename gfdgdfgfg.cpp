#include<cstdio>
int n,s;
float sum=0;

int g[100];
float a[100];

int main(){

scanf("%d",&n);

	while(n--){
		scanf("%d",&s);
		for(int i=0;i<s;i++){
			scanf("%d",&g[i]);
			sum += g[i];
		}
		float avg =sum/s;
		int count=0;
		for(int i=0;i<s;i++){
			if(g[i] > avg ){
				count ++;
				
			}
		}
		
		printf("%.3f%%",(double)count*100/n);
	}
}


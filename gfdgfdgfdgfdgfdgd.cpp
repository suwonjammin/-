#include<cstdio>
int d[10001];
int wine[10001];

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&wine[i]);
	}
	d[1] = wine[1];
	d[2] = wine[1] + wine[2];
	
	for(int i=3;i<=n;i++){
		int option1 = d[i-1];
		int option2 = d[i-2] + wine[i];
		int option3 = d[i-3] + wine[i-1] + wine[i];
		
		if(option1 > option2){
			if(option1 > option3){
				d[i] =option1;
			}
			else{
				d[i] = option3;
			}
			
		}
		else{
			if(option2 > option3){
				d[i] = option2;
			}
			else{
				d[i] = option3;
			}
		}
	}
	printf("%d",d[n]);
}

#include <cstdio>
int main(){
	int n,m,liq_x,liq_y;
	int map[100][100];
	
	scanf("%d %d",&n,&m);
	
	for(int i = 0; i<m; i++){
		
		for(int j=0; j<n; j++){
			scanf("%d",&map[i][j]);
			
			if(map[i][j] == 2){
				liq_x = j;
				liq_y = i;
			}
		}
	}
	while(!(map[liq_y+1][liq_x]&&map[liq_y][liq_x+1])){
		
		if(map[liq_y+1][liq_x]==0){
			liq_y++;
		}
		else if((map[liq_y][liq_x+1])==0){
			liq_x++;
		}
	}
	printf("%d %d",liq_x,liq_y);
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;

vector<int> d[8];
int check[8];
void dfs(int x){
	if (check[x]){
		return ;
	}
	check[x] = 1;
	printf("%d",x);
	
	for(int i=0;i<d[x].size();i++){
		int y = d[x][i];
		dfs(y);
	}
}

int main(){
	d[1].push_back(2);
	d[2].push_back(1);
	
	
	
	d[1].push_back(3);
	d[3].push_back(1);
	
	d[2].push_back(3);
	d[2].push_back(4);
	d[2].push_back(5);
	
	d[3].push_back(2);
	d[4].push_back(2);
	d[5].push_back(2);
	
	d[3].push_back(6);
	d[3].push_back(7);
	d[6].push_back(3);
	d[7].push_back(3);
	
	
	
	
	

	
	dfs(1);
	
	return 0;
}

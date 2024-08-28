#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
vector<int> d[1001];
int check[1001];
int bfs(int start){
	queue<int> q;
	q.push(start);
	check[start] = 1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		
		
		for(int i=0;i<d[x].size();i++){
			int y = d[x][i];
			
			if(!check[y]){
				q.push(y);
				check[y] = 1;
			}
		}
	}
}
int main(){
	int n,m;
	int a,b;
	scanf("%d %d",&n,&m);
	
	for(int i = 0; i<m;i++){
		scanf("%d %d",&a,&b);
		d[a].push_back(b);
		d[b].push_back(a);
	}
	int cnt = 0;
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			cnt ++;
			bfs(i);
		}
	}
	printf("%d",cnt);
}

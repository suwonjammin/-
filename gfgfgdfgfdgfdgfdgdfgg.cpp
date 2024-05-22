#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	stack<int> s;
	queue<int> q;
	
		
		
		for(int i=1;i<11;i++){
			q.push(i);
			s.push(i);
		}
		
		while(!q.empty()){
			cout << q.front() << " ";
			q.pop();
		}
	
	return 0;
}

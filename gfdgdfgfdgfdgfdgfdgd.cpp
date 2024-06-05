#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	int m;
	cin >> n >> m;
	queue<int> a;
	cout << "<";
	for(int i=1;i<=n;i++){
		a.push(i);
	}
	
	while(a.size()>1){
		
		for(int i=0;i<m-1;i++){
			a.push(a.front());
			a.pop();
		}
		cout << a.front() << ", ";
		a.pop();
	}
	cout << a.front() << ">";
	return 0;
	}


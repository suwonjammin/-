#include<cstdio>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
	stack<pair<int,int> >s;
	int n,h;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> h; 
		if(s.empty()){
			s.push({i,h});
			cout << "0 ";
		}
		else{
		
			while(!s.empty()){
				if(s.top().second<h){
					s.pop();
				}
				else{
					cout << s.top().first << " ";
					break;
				}
			}
		if(s.empty()){
			cout << "0 ";
		}
		s.push({i,h});
	}
	}
		
	
	return 0;
}


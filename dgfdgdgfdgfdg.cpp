#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main(){
	string ccc;
	stack<char> s;
	int ans=0;
	
	cin>> ccc;
	for(int i=0;ccc[i];i++){
		if(s.empty()){
			s.push(ccc[i]);
		}
		else{
			if(ccc[i]=='('){
				s.push(ccc[i]);
			}
			else if(s.top() == '(' && ccc[i] == ')'){
				s.pop();
				ans += s.size();
			}
			else{
				ans ++;
			}
			
		}
	}
	cout << ans;
	return 0;
	
} 

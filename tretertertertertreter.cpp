#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
	int t;
	string s;
	stack<char> test;
	
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> s;
		

		for(int j=0;j<s[i];j++){
			if(test.empty()){
				test.push(s[j]);
			}
			else{
				if(test.top() == '(' && s[j]== ')'){
					test.pop();
				}
				else{
					test.push(s[j]);
				}
			}
		}
		if(test.empty()){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	return 0;
}

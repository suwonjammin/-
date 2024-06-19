#include<cstdio>
#include<stack>
#include<iostream>
using namespace std;
int main(){
	 string ccc;
	 int temp =1;
	 stack<char>s;
	 int answer = 0;
	 cin >> ccc;
	 
	 for(int i=0;ccc[i];i++){
	 	if(ccc[i] == '('){
	 		temp = temp*2;
	 		s.push(ccc[i]);
		 }
		else if(ccc[i] == '['){
			temp = temp*3;
			s.push(ccc[i]);
		}
		else if(ccc[i] == ')'){
			if(s.empty() || s.top()!='(' ){
				answer = 0;
				break;
			}
			if(ccc[i-1] == '('){
				answer += temp;
				temp /= 2;
				s.pop();
				
			}
			else{
				temp/=2;
				
				s.pop();
			}
		}
		else if(ccc[i] == ']'){
			if(ccc[i-1] == '['){
				answer += temp;
				temp/=3;
				s.pop();
			}
			else{
				temp/=3;
				s.pop();
			}
		}
		
	 }
	 cout << answer;
	 return 0;
}

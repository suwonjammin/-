#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int check = 0;
	int cnt = 0;
	int t;
	cin >> t;
	
	
	for(int i = 0; i<t ;i++){
		cin >> s;
		int a =	s.size();
		check = 0;
		for(int j = 0; j<a/2;j++){
			if(s[j] !=  s[a-1-j]){
				check =1;
				break;
			}
		}
		if(check ==0){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	string temp;
	string c;
	int n;
	int check = 0;
	cin >> c;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> temp;
		if(c == temp){
			check = 1;
		}
	}
	if(check == 1){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}

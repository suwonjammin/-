#include <iostream>
#include <string>
using namespace std;
int main(){
	string A;
	string B;
	cin >> A;
	cin >> B;
	if(A.size() > B.size()){
		cout << A;
	}
	else if(A.size() < B.size()){
		cout << B;
	}
	else{
		if(A>B){
			cout << A;
		}
		if(A<B){
			cout << B;
		}
	}
	return 0;
}

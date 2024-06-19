#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int>	v;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		v.push_back(temp); 
	}
	sort(v.begin(),v.end());
	int cnt=0,max=0,ans;
	for(int i=0;i<n;i++){
		if(v[i] == v[i+1]){
			cnt++;
		}
		else{
			cnt = 0;
		}
		if(cnt>max){
		max = cnt;
		ans = v[i];
	}
	}
	
	
	cout << ans;
	
	return 0;
}

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,t,s;
	pair<int,int> p[100001];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t >> s;
		p[i] = make_pair(t,s);
	}
	sort(p,p+n);
	
	for(int i=0;i<n;i++){
		cout << p[i].second << " ";
		if(p[i].first != p[i+1].first){
			cout << "\n";
		}
	}
	return 0;
}

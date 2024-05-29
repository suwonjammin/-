#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;



int main(){
	int n, cnt =0;
	double h[100001];
	double temp_h[100001];
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> h[i];
		temp_h[i] = h[i];
	}
	sort(h,h+n);
	
	for(int i=0;i<n;i++){
		if(h[i] != temp_h[i]){
			cnt++;
		}
	}
	cout << cnt++;
	return 0;
}

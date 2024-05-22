#include<cstdio>
#include<iostream>
#include<utility>

int main(){
	pair<int , double> item[11];
	int N,M;
	double A;
	
	cin >> N;
	for(int i=0;i<=N;i++){
		cin >> M >> A;
		item[i]= make_pair(M,A);
	}
	int I,MI;
	double IA;
	cin >> I >> MI >> IA;
	
	item[I-1] == make_pair(MI,IA);
	int sum;
	double mul;
	for(int = 0; i<N;i++){
		sum += item[i].first;
		mul *= item[i].second;
	}
	cout << int(sum * mul);
	return 0;
	
}

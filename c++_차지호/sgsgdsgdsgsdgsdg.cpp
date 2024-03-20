#include <cstdio>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	for(int i=0; i<10; i++){
		int temp;
		scanf("%d",&temp);
		v.push_back(temp);
	}
	for(int i = v.size() - 1; i>=0; i--)
			printf("%d\n",v[i]);
	return 0;	
}

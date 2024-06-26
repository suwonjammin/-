#include<cstdio>
#include<algorithm>
using namespace std;
struct Asia{
	int country;
	int num;
	int score;
};
bool cmp(const Asia left , const Asia right){
	return left.score > right.score;
}
int main(){
	Asia stud[101];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&stud[i].country,&stud[i].num,&stud[i].score);
	}
	sort(stud,stud+n,cmp);
	int cnt_country[101]={0,};
	int check = 0;
	for(int i=0;i<n;i++){
		if(cnt_country[stud[i].country] >=2){
			continue;
		}
		cnt_country[stud[i].country]++;
		
		printf("%d %d",stud[i].country , stud[i].num);
		check++;
		if(check>=3){
			break;
		}
	}
	return 0;
}

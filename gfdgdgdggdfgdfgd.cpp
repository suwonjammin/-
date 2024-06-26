#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct Ab{
	char name[10];
	int korean;
	int english;
	int math;
};
bool cmp(const Ab left , const Ab right){
		if(left.korean > right.korean){
			return true;
		}
		else if(left.korean == right.korean){
			if(left.english < right.english){
				return true;
			}
		}
		else if(left.english == right.english){
			if(left.math > right.math){
				return true;
			}
			else if(left.math == right.math){
					return strcmp(left.name,right.name) <= 0;
				}
			}
		}

		
	
	

int main(){
	Ab stud[1001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d",stud[i].name,&stud[i].korean,&stud[i].english,&stud[i].math);
		
	}
	sort(stud,stud+n,cmp);
	
	for(int i=0;i<n;i++){
		printf("%s",stud[i].name);
	}
	
}

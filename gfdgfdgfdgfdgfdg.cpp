#include<cstdio>
int main(){
	int n;
	char s[1000];
	scanf("%d",&n);
	scanf("%s",s);
	for(int i=0;i<=n;i++){
		s[i] = s[i] + 3;
		if(s[i]>'Z'){
			s[i]=s[i] -26;
		}
	}
	printf("%s",s);
}

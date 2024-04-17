#include <cstdio>
int main(){
	int n =3;
	char s[1000];
	scanf("%s",s);
	for(int i=0;s[i];i++){
		s[i] = s[i] - 3;
		if(s[i]<'A'){
			s[i] = s[i] +26;
		}
	}
	printf("%s",s);
}

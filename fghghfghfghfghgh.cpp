#include <cstdio>
int main(){
	char s[1000];
	int str[26]={0,};
	scanf("%s",s);
	for(int i=0;s[i];i++){
		if('A'<=s[i]&&s[i]<='Z'){
			s[i] = s[i] - 'A' +'a';
			
	}
	
		str[s[i]-'a']++;
}
	for(int i=0;i<26;i++){
		printf("%d ",str[i]);
	}
}

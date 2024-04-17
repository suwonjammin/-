#include <cstdio>
int main(){
	char str[1000];
	scanf("%[^\n]",str);
	for(int i=0;str[i];i++){
		if('A'<=str[i]&&str[i]<='Z'){
			str[i] = str[i] - 'A' + 'a';
		}
	}
	printf("%s",str);
}

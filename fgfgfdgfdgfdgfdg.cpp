#include <cstdio>
#include <cstring>

int main(){
	char a[100];
	char b[100];
	scanf("%s",a);
	scanf("%s",b);
	if(strcmp(a,b) == 1){
		printf("%s","sir");
	}
	else{
		printf("%s","kid");
	}
	return 0;
}

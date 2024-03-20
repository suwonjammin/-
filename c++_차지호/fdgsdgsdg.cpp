#include <cstdio>
int main(){
	int min=10000, a=0;
	int ar[10] = {5,2,1,5,6,7,8,9,4,2};
	
	for(int i=0; i<10; i++){
		if(ar[i]<min){
			min = ar[i];
			a= i;
		}
	}
	printf("%d",min);
	printf("%d",a);
	
	return 0;
}

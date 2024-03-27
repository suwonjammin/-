#include <cstdio>
int main(){
	int A[10];
	int B[10];
	int ai=0,bi=0,s=0;
	
	for(int i=0; i<10; i++){
		scanf("%d",&A[i]);
	}
		
	for(int i=0; i<10; i++){
		scanf("%d",&B[i]);
	}

	for(int i=0; i<10; i++){
	
		if(A[i]>B[i]){
			ai+=1;
		}
		else if(A[i]<B[i]){
				bi+=1;
			}
		else{
			s+=1;
			
		}
         
	}
	if(ai>bi){
		printf("A");
	}
	if(ai<bi){
		printf("B");
	}
	if(ai==bi){
		printf("D");
	}
	return 0;
}

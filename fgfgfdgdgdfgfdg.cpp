#include<cstdio>

int main(){
	int w,h,p,q,t;
	scanf("%d %d",&w,&h);
	scanf("%d %d",&p,&q);
	scanf("%d",&t);
	
	int final_x = (p+t) % (w*2);
	int final_y = (q+t) % (h*2);
	
	if(final_x > w){
		final_x  = 2*w - final_x;
	}
	if(final_y>h){
		final_y = 2*h - final_y;
	}
	
	
	
	printf("%d %d",final_x,final_y);	
}

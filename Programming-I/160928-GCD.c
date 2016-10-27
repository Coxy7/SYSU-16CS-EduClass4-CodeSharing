//by Xiao Yao
#include <stdio.h>
int gcd(int x,int y){
	if (y==0) return x;
	return gcd(y,x%y);
}
int main(){
	int x,y;
	while (scanf("%d%d",&x,&y)==2)
		printf("%d\n",gcd(x,y));
	return 0;
}

//by Xiao Yao
//Algorithm: Chinese Remainder Theorem(CRT) , Extended GCD
#include <stdio.h>
int exgcd(int a,int b,int *x,int *y){
	if (b==0){
		*x=1;*y=0;
		return a;
	}
	int r=exgcd(b,a%b,y,x);
	*y-=(*x)*(a/b);
	return r;
}
int CRT(int a[],int m[],int n){
	int M=1,ret=0,i;
	int x,y,tm;
	for (i=0;i<n;i++) M*=m[i];
	for (i=0;i<n;i++){
		tm=M/m[i];
		exgcd(tm,m[i],&x,&y);
		ret=(ret+tm*x*a[i])%M;
	}
	return (ret+M)%M;
}
int main(){
	int m[3]={3,5,7};
	int a[3],i;
	for (i=0;i<3;i++) scanf("%d",a+i);
	printf("%d\n",CRT(a,m,3));
	return 0;
}

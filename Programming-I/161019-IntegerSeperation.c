//by Xiao Yao
#include <stdio.h>
#include <string.h>
int main(){
	int n,a[105];
	long long x;
	for (scanf("%d",&n);n;n--){
		scanf("%lld",&x);
		if (x==0){
			printf("0\n");
			continue;
		}
		int i;
		for (i=0 ; x ; i++ , x/=10)
			a[i]=x%10;
		for (i--;i;i--)
			printf("%d ",a[i]);
		printf("%d\n",a[0]);
	}
	return 0;
}

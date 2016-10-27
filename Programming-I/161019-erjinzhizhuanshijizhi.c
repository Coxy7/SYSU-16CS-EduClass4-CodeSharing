//by Xiao Yao
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char st[105];
int main(){
	scanf("%s",st);
	int i;
	long long x=0;
	for (i=0;i<strlen(st);i++)
		x = (x<<1) + (st[i]-'0');
	printf("%lld\n",x);
	return 0;
}

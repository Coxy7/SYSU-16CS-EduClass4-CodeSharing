//by Xiao Yao
//Data structure: Stack
#include <stdio.h>
#include <string.h>
int h[256];
int main(){
	memset(h,0,sizeof(h));
	h['(']=-1; h[')']=1;
	h['[']=-2; h[']']=2;
	h['{']=-3; h['}']=3;
	char c;
	int stack[100005],top=-1;
	bool ok=1;
	while (scanf("%c",&c)==1 &&h[c]!=0){
		//printf("%d\n",h[c]);
		if (h[c]<0){
			top++;
			stack[top]=h[c];
		}else{
			if (top==-1 || stack[top]+h[c]!=0){
				ok=0;
				break;
			}
			top--;
		}
	}
	if (ok && top==-1) printf("True\n");
		else printf("False\n");
	return 0;
}

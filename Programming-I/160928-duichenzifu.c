//by Xiao Yao
#include <stdio.h>
int main(){
	const int c[30]={2,1,1,1,1,0,0,4,4,0,1,0,2,3,4,0,0,0,3,2,2,2,2,4,2,3}; //Trick: initialization of array
	char cc;
	scanf("%c",&cc);
	switch (c[cc-'A']){
		case 0:
			printf("common\n");
			break;
		case 1:
			printf("up-down\n");
			break;
		case 2:
			printf("left-right\n");
			break;
		case 3:
			printf("center\n");
			break;
		case 4:
			printf("up-down\nleft-right\ncenter\n");
			break;
	}
	return 0;
}

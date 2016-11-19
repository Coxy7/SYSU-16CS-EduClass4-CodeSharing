//by Yan Bin
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = sqrt(2*m); i >= 1; --i)
	{
		if(2*m % i == 0)
		{
			int B = i;
			int A = 2*m / i;
      //若分子为奇数，跳过本次循环
			if((A - B + 1) % 2 != 0 || (A + B - 1) % 2 != 0)
				continue;
			int a = (A - B + 1) / 2;
			int b = (A + B - 1) / 2;
			printf("[%d,%d]\n",a,b);
		}
	}
	return 0;
}

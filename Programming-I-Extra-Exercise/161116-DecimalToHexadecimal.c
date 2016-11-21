//by Yan Bin
#include<stdio.h>
#include<string.h>
const int SIZE = 100;

int main()
{
	int decimal;
	scanf("%d", &decimal);
	
	int hex[SIZE];	
	int index = 0;
	while(decimal)
	{
		hex[index++] = decimal % 16;
		decimal /= 16;
	}
	
	if(index == 0)
		printf("0");
	else
		for(int i = 0; i < index; ++i)
			printf("%c",hex[i] <= 9? hex[i] + '0': hex[i] - 10 + 'A');
	printf("\n");
}
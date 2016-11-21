//by Yan Bin
#include<stdio.h>
#include<string.h>
const int SIZE = 100;

int main()
{
	int decimal;
	scanf("%d", &decimal);
	
	char hex[SIZE];
	sprintf(hex, "%X", decimal);
	
	for(int i = strlen(hex)- 1; i >= 0; --i)
		printf("%c", hex[i]);
	printf("\n");
}
//by Yan Bin
#include<stdio.h>
#include<string.h>
const int SIZE = 126 + 5;

int main()
{
	char code[SIZE];
	memset(code, 0, sizeof(code));
	
	code[0] = ' ';
	for(int i = 'a'; i <= 'z'; ++i)
		code[i - 'a' + 1] = i;
	for(int i = 'A'; i <= 'Z'; ++i)
		code[i - 'A' + 101] = i;
		
	int input;
	while(scanf("%3d",&input) != EOF)
		printf("%c",code[input]);
	printf("\n");
	return 0;
}
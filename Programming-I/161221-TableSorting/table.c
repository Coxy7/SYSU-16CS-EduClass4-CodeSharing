#include "table.h"
#include <string.h>

void print(Stu* stus, int n)
{
  printf("%-6s %-6s %-8s %-5s\n","Gender", "Name", "Id", "Score");
	for(int i = 0; i < n; ++i)
		printf("%-6s %-6s %-8d %-5d\n", stus[i].gender, stus[i].name, stus[i].id, stus[i].score);
	printf("\n");
}

int GenderCmp(const void* lhs, const void* rhs)
{
	if (strcmp( ((Stu*)lhs)->gender, ((Stu*)rhs)->gender ) == 0) 
		return ((Stu*)lhs)->id - ((Stu*)rhs)->id;
	else
		return strcmp( ((Stu*)lhs)->gender, ((Stu*)rhs)->gender );
}

int NameCmp(const void* lhs, const void* rhs)
{
	return strcmp( ((Stu*)lhs)->name, ((Stu*)rhs)->name );
}

int IdCmp(const void* lhs, const void* rhs)
{
	return ((Stu*)lhs)->id - ((Stu*)rhs)-> id;
}

int ScoreCmp(const void* lhs, const void* rhs)
{
	if ( ((Stu*)lhs)->score != ((Stu*)rhs)-> score)
		return ((Stu*)rhs)->score - ((Stu*)lhs) -> score;
	else
		return ((Stu*)lhs)->id - ((Stu*)rhs)->id;
}

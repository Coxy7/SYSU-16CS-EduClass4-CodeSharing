#ifndef _TABLE_H_
#define _TABLE_H_

typedef struct Stu
{
	char gender[2];
	char name[7];
	int id;
	int score;
}Stu;

void print(Stu* stus, int n);
int GenderCmp(const void*, const void*);
int NameCmp(const void*, const void*);
int IdCmp(const void*, const void*);
int ScoreCmp(const void*, const void*);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"
int main()
{
	//freopen("input","r",stdin);
	int n;
	scanf("%d",&n);
	Stu *stus = (Stu*)malloc(n * sizeof(Stu));
	Stu *sort_stus = (Stu*)malloc(n * sizeof(Stu));
	for (int i = 0; i < n; ++i)
	{
		scanf("%s%s%d%d", stus[i].gender, stus[i].name, &stus[i].id, &stus[i].score);
		sort_stus[i] = stus[i];
	}
	int op;
	while(scanf("%d",&op) == 1)
	{
		if (op == -1) break;
		if (op == 0) { print(stus,n); continue; }
		if (op == 1) qsort(sort_stus, n, sizeof(*stus), GenderCmp);
		if (op == 2) qsort(sort_stus, n, sizeof(*stus), NameCmp);
		if (op == 3) qsort(sort_stus, n, sizeof(*stus), IdCmp);
		if (op == 4) qsort(sort_stus, n, sizeof(*stus), ScoreCmp);
		print(sort_stus, n);
	}
  free(stus);
  free(sort_stus);
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct tabletype{
	char gender;
	char name[7];
	int id, score;
};

typedef struct tabletype tb;

//Private
int cmp_gender(const tb * const , const tb * const );

int cmp_name(const tb * const , const tb * const );

int cmp_id(const tb * const , const tb * const );

int cmp_score(const tb * const , const tb * const );

void myqsort(tb ** , int ,int ,int (*cmp)(const tb * const, const tb * const));

//Public
void read(tb * );

void print(tb ** , int );

void sort_by_gender(tb ** , int );

void sort_by_name(tb ** , int );

void sort_by_id(tb ** , int );

void sort_by_score(tb ** , int );

void disp(tb ** , int );

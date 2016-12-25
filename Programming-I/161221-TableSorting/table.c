#include "table.h"

//-----------------------------------------------------
int cmp_gender(const tb * const a, const tb * const b){
	return ( a->gender < b->gender ) ||
		( a->gender == b->gender && a->id < b->id );
}

int cmp_name(const tb * const a, const tb * const b){
	int c = strncmp( a->name , b->name , 6);
	return ( c < 0 ) || ( c == 0 && a->id < b->id );
}

int cmp_id(const tb * const a, const tb * const b){
	return ( a->id < b->id );
}

int cmp_score(const tb * const a, const tb * const b){
	return ( a->score > b->score ) ||
		( a->score == b->score && a->id < b->id );
}

//-----------------------------------------------------
void sort_by_gender(tb ** dat, int size){
	myqsort( dat , 0 , size-1 , cmp_gender );
}

void sort_by_name(tb ** dat, int size){
	myqsort( dat , 0 , size-1 , cmp_name );
}

void sort_by_id(tb ** dat, int size){
	myqsort( dat , 0 , size-1 , cmp_id );
}

void sort_by_score(tb ** dat, int size){
	myqsort( dat , 0 , size-1 , cmp_score );
}

void myqsort(tb ** a,int l,int r,int (*cmp)(const tb * const,const tb * const)){
	int i = l , j = r;
	tb * x = a[ (l+r) / 2 ];
	while ( i < j ){
		while ( cmp( a[i] , x ) ) i++;
		while ( cmp( x , a[j] ) ) j--;
		if ( i <= j ){
			tb * tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if ( l < j ) myqsort( a, l, j, cmp );
	if ( i < r ) myqsort( a, i, r, cmp );
}

//-----------------------------------------------------
void read(tb * a){
	scanf( "\n%c%s%d%d", &(a->gender), a->name, &(a->id), &(a->score) );
}

void print(tb ** a, int size){
	int i;
	printf("Gender Name   Id       Score\n");
	for ( i = 0; i < size; i++ )
		printf( "%-7c%-7s%-9d%-5d\n" ,
			a[i]->gender, a[i]->name, a[i]->id, a[i]->score );
	printf("\n");
}

void disp(tb ** a, int size){
	int i;
	for ( i = 0; i < size; i++ )
		free( a[i] );
	free( a );
}

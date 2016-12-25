#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "table.h"
int main(){
	int size, i;
	tb ** ori, ** cur;
	scanf("%d", &size);
	ori = (tb **)malloc( sizeof(tb *) * size );
	cur = (tb **)malloc( sizeof(tb *) * size );

	for ( i = 0; i < size; i++ ){
		ori[i] = malloc( sizeof(tb) );
		read( ori[i] );
		cur[i] = malloc( sizeof(tb) );
		*cur[i] = *ori[i];
	}

	while ( scanf("%d",&i) == 1 && i != -1 ){
		if ( i == 0 )
			print( ori , size );
		else if ( i == 1 )
			sort_by_gender( cur , size );
		else if ( i == 2 )
			sort_by_name( cur , size );
		else if ( i == 3 )
			sort_by_id( cur , size );
		else if ( i == 4 )
			sort_by_score( cur , size );

		if ( i ) print( cur , size );
	}

	disp( ori , size );
	disp( cur , size );

	return 0;
}

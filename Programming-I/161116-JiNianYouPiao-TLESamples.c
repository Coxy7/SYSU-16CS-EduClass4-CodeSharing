//by Xiao Yao
//班会课上我提到的三种时间复杂度较高的算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void solve1(int n, int m){
	// O(n^3)
	int l, r;
	for (l = 1; l <= n; l++){
		for (r = l; r <= n; r++){
			int i , sum = 0;
			for (i = l; i <= r; i++)
				sum += i;
			if ( sum == m )
				printf("[%d,%d]\n", l, r);
		}
	}
}
void solve2(int n, int m){
	// O(n^2)
	int l, r;
	for (l = 1; l <= n; l++){
		int sum = 0;
		for (r = l; r <= n; r++){
			sum += r;
			if ( sum == m )
				printf("[%d,%d]\n", l, r);
		}
	}
}
void solve3(int n, int m){
	// O(n)
	int l = 1, r = 0, sum = 0;
	while ( sum < m )
		sum += ++r;
	sum -= r;
	for ( ; r <= n; r++){ //过程中保持区间[l,r]的sum不大于m
		sum += r;
		while ( sum > m )
			sum -= l++;
		if ( sum == m )
			printf("[%d,%d]\n", l, r);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	solve1( n , m ); puts("");
	solve2( n , m ); puts("");
	solve3( n , m ); puts("");
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 105
int dat[maxn], tmp[maxn];
int n;

void init(){
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++)
		scanf("%d",dat+i);
}
void Merge(int *a,int l,int m,int r){
	int p=l, q=m+1 ,i=l;
	while (p<=m || q<=r){
		if (p>m)
			tmp[i++] = a[q++];
		else if (q>r)
			tmp[i++] = a[p++];
		else
			tmp[i++] = a[p]<a[q] ? a[p++] : a[q++];
	}
	for (i=l;i<=r;i++)
		a[i]=tmp[i];
}
void print(){
	int i;
	for (i=0;i<n-1;i++)
		printf("%d ",dat[i]);
	printf("%d\n",dat[n-1]);
}
void MergeSort(int *a,int l,int r){
	if (l==r) return ;
	int m = (l+r)/2;
	MergeSort(a,l,m);
	MergeSort(a,m+1,r);
	Merge(a,l,m,r);
	print();
}
int main(){
	init();
	MergeSort(dat,0,n-1);
	return 0;
}
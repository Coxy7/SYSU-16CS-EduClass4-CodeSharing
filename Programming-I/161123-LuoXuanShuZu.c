#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int fx[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};//四个方向对应的向量
int a[105][105];
int main(){
	int n,x,y,i,c=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	x=y=1;
	for (i=1;i<=n*n;i++){
		a[x][y]=i;
		int xx = x + fx[c][0];	//xx,yy：当前方向下一步的坐标
		int yy = y + fx[c][1];
		if ( xx<1 || xx>n || yy<1 || yy>n || a[xx][yy] ){	//如果下一步出了边界，或走到已填过的格子
			c = (c+1) % 4;	//转向
			xx = x + fx[c][0];
			yy = y + fx[c][1];
		}
		x = xx;
		y = yy;
	}
	for (x=1;x<=n;x++){
		for (y=1;y<n;y++)
			printf("%d ",a[x][y]);
		printf("%d\n",a[x][n]);
	}
	return 0;
}

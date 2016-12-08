//by Xiao Yao
//Algorithm: Matrix Quick_power
#include <stdio.h>
#include <string.h>
long long getStepNum(int );
int main() {
    int n;
    scanf("%d", &n);
	for (int i=1;i<=n;i++){
		long long answer = getStepNum(i);
		printf("%d %lld\n",i, answer);
	}
    return 0;
}

struct Matrix{
	int n,m;
	int a[3][3];
	void init_id(int _n){ //n*n identity matrix
		n=m=_n;
		memset(a,0,sizeof(a));
		int i;
		for (i=0;i<n;i++) a[i][i]=1;
	}
	void init_base(){   //matrix A
		n=m=2;
		a[0][0]=2; a[0][1]=1;
		a[1][0]=0; a[1][1]=1;
	}
	void clear(int _n,int _m){
		n=_n; m=_m;
		memset(a,0,sizeof(a));
	}
	Matrix operator * (const Matrix &b) const{  //reload * for matrix multiplication
		Matrix tmp;
		tmp.clear(n,b.m);
		int i,j,k;
		for (i=0;i<n;i++)
			for (j=0;j<b.m;j++)
				for (k=0;k<m;k++)
					tmp.a[i][j]=(tmp.a[i][j] + a[i][k] * b.a[k][j] % 10007) % 10007;
		return tmp;
	}
	void show(){  //for debugging
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		puts("");
	}
};
long long getStepNum(int n){
	int i;
	Matrix base,M;
	M.init_id(2);
	base.init_base();
	for (i=n-1 ; i ; i>>=1){    //compute A^(n-1)
		if (i&1) M=M*base;
		base=base*base;
		//M.show();
	}
	return (M.a[0][0]+M.a[0][1])%10007 *3 %10007;
}

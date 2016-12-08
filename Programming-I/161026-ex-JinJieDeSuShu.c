//by Xiao Yao (copy from Red-Book)
//Algorithm: Miller-Rabin Test
int pow_mod(int base,int pow,int mod){
	long long a=base , i , ans=1;
	for (i=pow; i ; i>>=1){
		if (i&1) ans = ans * a % mod;
		a = a * a % mod;
	}
	return ans;
}
int test(int n,int a,int d){
	if (n==2 || n==a) return 1;
	if ((n&1)==0) return 0;
	while (!(d&1)) d=d>>1;
	int t=pow_mod(a,d,n);
	while ( (d!=n-1) && (t!=1) && (t!=n-1) ){
		t=(long long)t*t%n;
		d=d<<1;
	}
	return (t==n-1 || (d&1)==1);
}
int isPrime(int n){
	if (n<2) return 0;
	int a[]={2,3,61};
	int i;
	for (i=0;i<3;i++)
		if (!test(n,a[i],n-1))
			return 0;
	return 1;
}

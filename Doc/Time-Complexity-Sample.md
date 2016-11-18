##### Sample 1
```c
tmp = a;
a = b;
b = tmp;
```
##### Sample 2
```c
for ( i = 0; i < n; i++)
{
	p = a % b;
	a++;
	c = p * a + i;
}
```
##### Sample 3
```c
for ( i = 0; i < n; i++)
{
	for ( j = 0; j < n; j++)
	{
		a[i][j] = i + j;
		b[i][j] = i - j;
	}
	a[i][n] = -1;
}

for ( i = 0; i < n; i++)
{
	for ( j = 0; j <= i; j++)
	{
		a[i][j] = i + j;
		b[i][j] = i - j;
	}
	a[i][n] = -1;
}

for ( i = 0; i < n; i++)
{
	for ( j = 0; j * j < n; j++)
	{
		a[i][j] = i + j;
		b[i][j] = i - j;
	}
	a[i][n] = -1;
}
```
##### Sample 4
```c
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= n; j++)
	{
		a[i][j] = gcd( i, j );
	}
}
```

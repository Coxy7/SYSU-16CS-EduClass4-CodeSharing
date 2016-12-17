void SelectionSort(int *a,int n){
	int i,j,tmp;
	for (i = 0; i < n; i++){
		int maxa = 0, k;
		for (j = 0; j < n-i; j++)
			if (a[j] > maxa){
				maxa = a[j];
				k = j;
			}
		tmp = a[k];
		a[k] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}
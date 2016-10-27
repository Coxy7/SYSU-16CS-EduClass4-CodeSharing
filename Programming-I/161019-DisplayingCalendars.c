//by Xiao Yao
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char mon[13][10]={"","January","February","March","April","May","June","July",
			"August","September","October","November","December"};
char day[8][5]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int num_of_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int year,day1,month;

int getd1(int Y,int M,int D){
	if (Y%4==0){				//The check of leap year can be written with simply one if-sentence.
		num_of_day[2]++;		//I'm just being lazy...
		if (Y%100==0 && Y%400!=0)	//But in many cases it's better to avoid complex logical expressions
			num_of_day[2]--;	//  to ensure readability, maintainability and testability.
	}
	int i,d=D;
	for (i=1;i<M;i++)
		d=(d+num_of_day[i])%7;
	return d;
}
int main(){
	scanf("%d%d%d",&year,&day1,&month);
	printf("%s %d\n",mon[month],year);
	int i,j,d;
	for (i=0;i<7;i++)
		printf("%8s",day[i]);
	printf("\n");
	d=getd1(year,month,day1);
	for (j=0;j<d;j++) printf("        ");
	for (i=1,j=d;i<=num_of_day[month];i++){
		printf("%8d",i);
		j++;
		if (j==7){
			j=0;
			printf("\n");
		}
	}
	if (j) printf("\n");
	return 0;
}

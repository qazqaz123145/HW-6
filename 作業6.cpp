#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int year; 
	
	printf("請輸入公元年分\n");
	scanf("%d",&year);
	
	if((year%4==0 && year%100!=0)||(year%400==0 && year%3200!=0))
		printf("此年為:閏年\n");
	else
		printf("此年為:平年\n");
	
	system("pause");
	return 0;
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TIME 36000


int main()
{
	srand(time(0));
	int count[13] = { 0 };
	for (int x = 0; x < TIME; x++)
		count[(rand()%6+1) + (rand()%6+1)]++;

	puts("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12");
	for (int i = 2; i < 13; i++)printf("%d\t", count[i]);
	printf("\n");
	for (int i = 2; i < 13; i++)printf("%.3f\t",(float)count[i]/36000);
	printf("\n");



}
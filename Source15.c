#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void bubblesort(int *const array, const int size);
int main(void)
{
	int a[SIZE] = { 2,6,4,10,12,89,68,45,37 };
	int i;
	
		printf("Data items in original order\n");
		for (i = 0; i < SIZE; i++)
			printf("%4d", a[i]);

		bubblesort(a, SIZE);

		printf("\nData items in ascending order\n");

		for (i = 0; i < SIZE; i++)
			printf("%4d", a[i]);

		printf("\n");

		system("pause");
		return 0;



}
void bubblesort(int *const array, const int size)
{
	void swap(int *ele1, int *ele2);
	int pass;
	int k=0;
	for (pass = 0; pass < size - 1; pass++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}
void swap(int *ele1, int *ele2)
{
	int x = *ele1;
	*ele1 = *ele2;
	*ele2 = x;
}
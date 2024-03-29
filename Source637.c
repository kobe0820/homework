#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int recursiveMaximum(int *array, int size) {
	if (size == 1) return array[0];
	int max = recursiveMaximum(array, size - 1);
	if (max > array[size - 1])
		return max;
	else
		return  array[size - 1];
}

int main() {
	srand(time(0));
	int a[10];
	for (int i = 0; i < 10; i++) a[i] = rand() % 100;
	printf("Array a:\n");
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
	printf("\n");
	printf("The maximum of array a is ");
	printf("%d\n", recursiveMaximum(a, 10));
}
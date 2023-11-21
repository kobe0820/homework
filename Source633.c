#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *array, int left, int right, int key) {
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (array[mid] == key) {
			return mid;
		}

		if (array[mid] < key) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return -1;
}

int cmp(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

int main() {
	int arr[10] = { 5, 6, 1, 3, 4, 9, 13, 46, 79, 12 };
	int key ;
	printf("Inter the number which you want to serch :");
		scanf("%d", &key);
	qsort(arr, 10, sizeof(int), cmp);

	int result = binarySearch(arr, 0, 9, key);

	if (result == -1) {
		printf("Not found\n");
	}
	else {
		printf("The index is %d\n", result);
	}

	return 0;
}

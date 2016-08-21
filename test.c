#include "sort.h"
#include <stdio.h>

void print_int_arr(int *arr, int len, const char *prompt)
{
	printf("%s: ", prompt);
	int i;
	for (i = 0; i < len; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {89, 19, 28, 38, 1, 2, 90, 3, 78, 14, 18, 90, 23, 47, 31};
	int len = sizeof(arr) / sizeof(int);

	print_int_arr(arr, len, "before quick sort");
	quicksort(arr, 0, len - 1);
	print_int_arr(arr, len, " after quick sort");

	return 0;
}

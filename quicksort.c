#include "sort.h"

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int *a, int p, int r)
{
	int i = p - 1;
	int j;
	for (j = p; j < r; ++j) {
		if (a[j] < a[r]) {
			i += 1;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1], &a[r]);
	return i + 1;
}

void quicksort(int *a, int p, int r)
{
	if (p < r) {
		int q = partition(a, p, r);
		quicksort(a, p, q - 1);
		quicksort(a, q + 1, r);
	}
}

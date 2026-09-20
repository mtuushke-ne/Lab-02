#include "sort.h"
void read(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
}

void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void insertion_sort(int a[], int n)
{
	int i, j, key;
 
	for (i = 1; i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

}

void selection_sort(int a[], int n)
{
int i, j, min_idx, tmp;
 
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min_idx]) {
				min_idx = j;
			}
		}
		if (min_idx != i) {
			tmp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = tmp;
		}
	}
}

void bubble_sort(int a[], int n)
{
	int i, j, tmp;
 
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

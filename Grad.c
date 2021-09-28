#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
	int N;
	scanf("%d", &N);
	int* array = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		array[i] = rand() % 10000;
	}
	int tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < (N - 1); j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}

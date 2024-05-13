#include < stdio.h > 
#include < stdlib.h >

int* find(int arr[]) {
	int min = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[min] > arr[i]) {
			min = i;
		}
	}
	return &arr[min];
}

int main() {
	int arr[5];

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("%d", *find(arr));
}
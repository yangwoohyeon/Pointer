#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int deleteElement(int arr[],int *size,int value) {
	bool check = false;
	int position = 0;
	for (int i = 0; i < *size; i++) {
		if (arr[i] == value) {
			check = true;
			position = i;
		}
	}
	if (check == false) {
		return 0;
	}
	else {
		for (int i = position; i < *size; i++) {
			if (i == *size - 1) {
				*size=*size - 1;
				return value;
			}
			arr[i] = arr[i + 1];

		}
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = 5; // 배열의 초기 크기
	int value, found;
	
	scanf_s("%d", &value); //삭제할 값 입력
	found = deleteElement(arr, &size, value);
	
	if (found) {
		for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
	}

	else
		printf("Not found");
	
	return 0;
}
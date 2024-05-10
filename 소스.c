#include<stdio.h>
#define SIZE 100
int stack[SIZE], choice, top;

void push(int x);
int pop(void);
void display(void);

int main() {
	top = -1;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	pop();
	pop();
	display();
	return 0;
}

void push(int x) {
	if (top == -1) {
		top = 0;
	}
	else if (top > SIZE - 1) {
		printf("오버플로우\n");
		return;
	}
	stack[top] = x;
	top = top + 1;
}

int pop() {
	if (top == -1) {
		printf("언더플로우\n");
		return -1;
	}
	else {
		int value = stack[top];
		top = top - 1;
		return value;
	}
}

void display() {
	for (int i = top-1; i>=0; i--) {
		printf("%d\n", stack[i]);
	}
	printf("\n");
}
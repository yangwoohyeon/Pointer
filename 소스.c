#include <stdio.h>
#define SIZE 100
void enqueue(int n);
int dequeue();
void show();
int queue[SIZE];
int Rear = -1;
int Front = -1;
int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	show();
	dequeue();
	dequeue();
	show();
}

void enqueue(int n) {
	if (Rear >= SIZE) {
		printf("오버플로우\n");
		return;
	}
	if (Front == -1) {
		Front = 0;
		Rear = Front;
	}
	Rear = Rear + 1;
	queue[Rear] = n;
}

int dequeue() {
	if (Front > Rear) {
		"언더플로우\n";
		return;
	}
	int value = queue[Front];
	Front = Front + 1;
	return value;
}

void show() {
	for (int i = Front+1; i <= Rear; i++) {
		printf("%d\n", queue[i]);
	}
	printf("\n");
}
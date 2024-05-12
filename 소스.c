#include <stdio.h> 
#include <stdlib.h>

struct Date {
	int year;
	int month;
	int day;
};

struct BirthDay {
	char* name;
	struct Date bday;

};
int main() {
	struct BirthDay bd;

	bd.name = "Gildong";
	bd.bday.year=2001;
	bd.bday.month = 7;
	bd.bday.day = 17;
	printf("%s\n", bd.name);
	printf("%d %d %d", bd.bday.year, bd.bday.month, bd.bday.day);
} 
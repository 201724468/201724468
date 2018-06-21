#include <stdio.h>
#include <string.h>


struct person{
	char name[50];
	char number[50];
};

extern struct person list[50];
extern unsigned int size;

void allprint(){
	printf("\n-------------------------------\n");
	printf("	List All the Members	\n");

	for(int i = 0; i < size; i++)
		printf("\n%s	%s\n", list[i].name, list[i].number);
	printf("\n--------------------------------\n");
}




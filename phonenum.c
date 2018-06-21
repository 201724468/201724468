#include <stdio.h>
#include <string.h>

struct person{
	char name[50];
	char number[50];
};

struct person list[50];
unsigned int size;

void regist();
void allprint();
void personalprint();

int main(void)
{
	
	int service;

	do
	{
		printf("\nTelephone Number System\n");
		printf("\n");
		printf("1. Register	2. Find All	");
		printf("\n3. Find Person	4. Exit");
		printf("\n");

		scanf("%d", &service);

		switch(service)
		{
			case 1: regist(); break;
			case 2: allprint(); break;	
			case 3: personalprint(); break;
		}

	}while(service != 4);
	
	printf("\nThank you for using Telephone Number System\n");
	return 0;

}



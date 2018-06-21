#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
	char name[50];
	char number[50];
};
extern struct person list[50];
extern unsigned int size;


void personalprint(){
        char tname[50] = "";
	int i;

        printf("Type the name to find : ");
        scanf("%s", tname);

	for(i = 0; i < size && !(strcmp(list[i].name, tname) == 0); i++)
	;
	if(i < size)
		printf("\n%s	%s\n", list[i].name, list[i].number);
	printf("\n");

}





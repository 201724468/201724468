#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
	char name[50];
	char number[50];
};

extern struct person list[50];
extern unsigned int size;

void regist(){
        static int count_service = 0;
        char password[50] = "qwer1234";
        char tpass[50];
        char name[50], number[50];


	printf("Type the password: ");
        while(count_service != 3){
                scanf("%s", tpass);
                
		if(!strcmp(password,tpass)){
                        printf("\nName to Register : ");
                        scanf("%s", list[size].name);
                        printf("\nNumber to Register : ");
                        scanf("%s", list[size].number);
                        printf("%s \'s ", list[size].name);
               		printf("\tnumber registered complete!\n");
			size += 1;
			break; 
		}
                else{
                        count_service++;
                        printf("Type the password");
                        printf("(%d Failure) :  \n", count_service);
                }

	}

	if(count_service == 3){
		printf("Password(%d Failure): Cannot Register!", count_service);
		printf("\n Quit the Program.\n");
		exit(0);
	}


}









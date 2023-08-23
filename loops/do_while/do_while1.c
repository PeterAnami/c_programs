#include<stdio.h>
#include<stdlib.h>

void main()
{
	char c;
	int choice,dummy;
	do{
		printf("\n1.Print hello\n2.Print Peter\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				prinf("Hello");
				break;
			case 2:
				printf("Peter");
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("plese enter valid choice");
		}
		printf("do you want to enter more?");
		scanf("%d",&dummy);
		scanf("%c",&c);
	}while (c=='y');
}



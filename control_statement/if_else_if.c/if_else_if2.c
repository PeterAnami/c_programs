// program to calculate the grade of the student accordint to the scpecified marks

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks?");
	scanf("%d",&marks);

	if (marks > 85 && marks <= 100)
	{
		printf("congrats, you scores grade A ..");
	}
	else if (marks >60 && marks <=85)
	{
		printf("you scores B+..");
	}
	else if (marks >40 && marks <=60)
	{
		printf("you scored grade B..");
	}
	else if (marks >30 && marks <= 40)
	{
		printf("you scored grade C..");
	}
	else 
	{
		printf("sorry you have failed..");
	}
}

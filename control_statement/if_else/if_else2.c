//program to check whether a person is eligible to vote or not
#include <stdio.h>

int main(){
	int age;
	printf("Enter your age?");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible to vote..");
	}
	else
	{
		printf("sorry..you can't vote");
	}
}

// program to calculate the area of the square

#include<stdio.h>
int sum();
void main()
{
	printf("going to calculate the area of the square\n");
	float area = square();
	printf("the area of the squar: %f\n",area);
}
int square()
{
	float side;
	printf("Enter the length of the side in meters:");
	scanf("%f",&side);
	return side*side;
}

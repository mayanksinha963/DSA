#include<stdio.h>
int main(int argc, char const *argv[])
{
	int length, breadth;

	printf("Enter the length\n");
	scanf("%d", &length);

	printf("Enter the breadth\n");
	scanf("%d", &breadth);

	printf("Area of your rectangle is %d", length * breadth );
	return 0;
}

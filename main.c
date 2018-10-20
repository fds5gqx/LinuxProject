#include <stdio.h>
#include "testlib.h"

int main()
{
		printf("add(1,2) = %d \n", add(1,2));
		printf("subract(1,2) = %d \n", subract(1,2));
		printf("multiply(1,2) = %d \n", multiply(1,2));
		printf("divide(1,2) = %d \n", divide(1,2));
}

int add(int a, int b)
{
		int c=0;
		c = a+b;
		return c;
}

int subract(int a, int b)
{
		int c = 0;
		c = a-b;
		return c;
}

int multiply(int a, int b)
{
		int c = 0;
		c = a*b;
		return c;
}

int divide(int a, int b)
{
		int c = 0;
		c = a/b;
		return c;
}

#include<stdio.h>
int main()
{
	int a, b, c = 0;
	char d;
	scanf("%d %d %c", &a, &b, &d);
	switch (d)
	{
	case'+':
		c = a + b;
		printf("%d", c);
		break;
	case'-':
		c = a - b;
		printf("%d", c);
		break;
	case'*':
		c = a*b;
		printf("%d", c);
		break;
	case'/':
		if (b == 0)
		{
			printf("Divided by zero!\n");
			break;
		}
		else
			c = a / b;
		printf("%d", c);
		break;
	default:
		printf("Invalid operator!\n");
		break;
	}
	return 0;
}

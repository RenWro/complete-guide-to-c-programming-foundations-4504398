#include <stdio.h>

int main()
{
	int a,b;

	printf("How long is the line? ");
	scanf("%d",&a);

	while(a>0)
	{
		putchar('-');
		a--;
	}
	putchar('\n');

	return(0);
}

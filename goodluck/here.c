#include <stdio.h>

int main()
{
	int x,d;
	printf("Do you need some good luch?\n");
	printf("If you do,scanf a Y else N\n");
	char w;
	scanf("%c", &w);
	if (w == 'Y')
		for (x = 1, d = 1;x <= 520;x++)
		{
			printf("%d:Good luck to you!\n", d);
			d++;

		}
	else
		printf("Well,you are lucky enough!");
	return 0;
}
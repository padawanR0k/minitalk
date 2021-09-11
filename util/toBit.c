#include <stdio.h>
#include <stdlib.h>

/*
** 128 64 32 16 8  4  2  1
** [0][1][2][3][4][5][6][7]
*/
int	*toBit(char c)
{
	int	*arr;
	int	max_c;
	int	idx;

	idx = 0;
	max_c = 128;
	arr = malloc(sizeof(int) * 8);
	while (idx < 8)
	{
		if (c & max_c)
			arr[idx] = 1;
		else
			arr[idx] = 0;
		idx++;
		max_c = max_c / 2;
	}
	idx = 0;
	while (idx < 8)
	{
		printf("%d", arr[idx]);
		idx++;
	}
	return (arr);
}

int main()
{
	int n = 32;
	while(n<256)
	{
		printf("===%d[%c]===\n", n, (char)n);
		toBit((char)n);
		printf("\n");
		n++;
	}
	return 0;
}

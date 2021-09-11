#include <stdio.h>

int ft_pow(int n, int exp)
{
	int sum;

	if (exp == 0)
		return (1);
	else if (exp == 1)
		return (n);
	else
	{
		sum = 1;
		while (exp--)
			sum *= n;
	}
	return (sum);
}

char toChr(int bits[8])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (i < 8)
	{
		c += bits[i] * ft_pow(2, 7 - i);
		i++;
	}
	printf("c %d\n", c);
	return ((char)c);
}

int main()
{
	// int arr[8] = {0,0,1,1,1,1,1,1};
	// printf("%c\n", toChr(arr));
	// 1 + 32
	int arr2[8] = {0, 0, 1, 0, 0, 0, 0, 1};
	printf("%c\n", toChr(arr2));
	return 0;
}

#include <stdio.h>

/**
 * main - print the sum of even- valued fibonacci numbers
 * numbers should not exceed 4,000,000
 * numbers should start with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long first_num = 0, secon_num = 1;
	unsigned long sum;
	float total_num;

	while (1)
	{
		sum = first_num + second_num;

		if ((sum % 2) == 0)
			total_num += sum;

		first_num = second_num;
		second_num = sum;
	}
	printf("%.0f\n", total_num);

	return (0);
}

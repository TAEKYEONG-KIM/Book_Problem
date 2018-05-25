#include <stdio.h>

#define SIZE 1000

int AddEachDigitNum(int num)
{
	int total = num;

	while (num != 0)
	{
		total += num % 10;
		num = num / 10;
	}

	return total;
}

void Selfnum(int num)
{
	int checknum = 0;
	int i = 1;

	for (; i <= num; i++)
	{
		if (AddEachDigitNum(i) == num)
			++checknum;
	}

	if (checknum == 0)
		printf("%d\n", num);

	if (num > SIZE)
		return;
	else
		Selfnum(++num);
}

int main(void)
{
	Selfnum(1);
	return 0;
}
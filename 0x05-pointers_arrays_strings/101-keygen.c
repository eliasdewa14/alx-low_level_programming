#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * @n: input parameter
 * Return: 0 for success
 */
void randomPassword(int n)
{
	int i = 0;
	int random = 0;


	srand((unsigned int)(time(NULL)));
	
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[n];
	
	random = rand() % 3;
	
	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 3;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 3;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			random = rand() % 3;
			printf("%c", password[i]);
		}
	}
}
int main(void)
{
	randomPassword(10);

	printf("\n");

	return (0);
}

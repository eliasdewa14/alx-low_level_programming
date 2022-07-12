#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * 
 * Return: 0 for success
 */
int main(void)
{
	int a, b, c, d;
	
	char ch[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	char r[58];

	
	srand(time(NULL));
	
	while (d != 2772)
	{
		a = c = d = 0;
		
		while ((2772 - 122) > d)
		{
			b = rand() % 62;
			r[a] = ch[b];
			d += ch[b];
			a++;
		}
		
		while (ch[c])
		{
			if (ch[c] == (2772 - d))
			{
				r[a] = ch[c];
				d += ch[c];
				a++;
				break;
			}
			c++;
		}
	}
	r[a] = '\0';
	printf("%s", r);
	printf("\n");
	return (0);
}

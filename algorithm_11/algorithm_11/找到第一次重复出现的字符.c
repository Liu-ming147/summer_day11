#include<stdio.h>
char repeat_character(char *ch)
{
	int i, j;
	i = 0;
	j = 1;
	while (ch[i] != '\0')
	{
		while (ch[j] != '\0')
		{
			if (i != j)
			{
				if (ch[i] == ch[j])
				{
					return ch[i];
					break;
				}
			}
			j++;
		}
		i++;
		j = i;
	}
}
int main()
{
	char ch[30];
	scanf("%s", &ch);
	printf("%c\n", repeat_character(ch));

	return 0;
}
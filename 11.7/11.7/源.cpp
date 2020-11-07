#include<stdio.h>
#include<string.h>
void Reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		++start;
		--end;
	}
}
int main()
{
	char str[100];
	gets(str);
	int len = strlen(str);
	Reverse(str, str + len - 1);
	char* start = str, *end = str;
	while (*end != '\0')
	{
		if (*end == ' ')
		{
			Reverse(start, end - 1);
			start = end + 1;
			end = start;
		}
		else
		{
			end++;
		}
	}
	Reverse(start, end - 1);
	printf("%s\n", str);
	return 0;
}
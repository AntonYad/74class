#include<stdio.h>
int my_strlen1(const char* str)
{
	assert(str);

	int n = 0;
	while (*str != '\0')
	{
		++n;
		++str;
	}

	return n;
}
int main()
{
	my_strlen1("abcd");
	return 0;
}
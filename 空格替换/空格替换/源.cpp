#define _CRT_SECURE_NO_WARNINGS 1
{
	for (int i = 0; i < len; i++)
	{
		if (ch[i] = ' ')
			count++;
	}
	 int  newlen = len + count * 2-1;
	for (int i = len-1; i>=0; i--)
	{
		if (ch[i] = ' ')
		{
			ch[newlen--] = '0';
			ch[newlen--] = '2';
			ch[newlen--] = '%';
		}
		else
		{
			ch[newlen--] = ch[i];
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%s", ch[i]);
	}

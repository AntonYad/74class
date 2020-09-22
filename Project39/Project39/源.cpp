#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef int ElemType;
struct sqList
{
	int length;
	int *data;
};
bool Del_Min(sqList &L, ElemType &value)
{

	if (L.length == 0)return false;
	value = L.data[0];
	int pos = 0;
	for (int i = 1; i<L.length; i++)
	{
		if (L.data[i]<value)		
		{
			value = L.data[i];
			pos = i;
		}
	}
	L.data[pos] = L.data[L.length - 1];
	L.length--;
	for (int i = 0; i<L.length; i++)cout << L.data[i] << " ";
	return true;
}
int main()
{
	int value;
	sqList L;
	L.length = 10;
	int a[10] = { 1, 2, 4, 6, 9, -1, 8, 3, 6, 9 };
	L.data = a;
	Del_Min(L, value);
	cout << endl;
	cout << "min:" << value << endl;
}

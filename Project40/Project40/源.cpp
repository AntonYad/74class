#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#define Maxsize 100

typedef struct{
	int data[Maxsize];
	int Length;
}SqList;


bool delete_x(SqList &L, int x)
{
	int i = 0, k = 0;
	while (i<L.Length){
		if (L.data[i] == x)
			k++;
		else
			L.data[i - k] = L.data[i];
		i++;
	}
	L.Length = L.Length - k;
	return true;
}
 
int main()
{
	SqList li;

	cout << "输入数组长度:";
	cin >> li.Length;

	cout << "-----输入数组--------" << endl;
	for (int i = 0; i<li.Length; i++)
		cin >> li.data[i];

	delete_x(li, 3);

	for (int i = 0; i<li.Length; i++)
		cout << li.data[i] << " ";
	cout << endl;
}
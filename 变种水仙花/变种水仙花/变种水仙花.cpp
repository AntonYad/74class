# include<stdio.h>
# include<stdlib.h>
int main()
{
	int a, b, c, d, e;
	int i;
	for (i = 10000; i<100000; i++){
		a = i % 10;//��λ
		b = (i / 10) % 10;//ʮλ
		c = (i / 100) % 10;//��λ
		d = (i / 1000) % 10;//ǧλ
		e = (i / 10000) % 10;//��λ
		if (i == e * (1000 * d + 100 * c + 10 * b + a) +
			(10 * e + d) * (100 * c + 10 * b + a) +
			(100 * e + 10 * d + c) * (10 * b + a) +
			(1000 * e + 100 * d + 10 * c + b) * a){
			printf("%d ", i);
		}

	}

}
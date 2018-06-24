#include <stdio.h>
int yue(int a, int b)
{
	int m, n, r;
	if (a > b) {m = a; n = b; }
	else {m = b; n = a; }
	r = m % n;
	while (r != 0) {
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
int f(int a, int b)
{
	int x;
	x = a * b / yue(a, b);
	return x;
}
int main()
{
    int a , b , c , d;
    scanf("%d%d%d",&a,&b,&c);
    d = f( f(a, b), c);     
    printf("%d",d);
	return 0;
} 

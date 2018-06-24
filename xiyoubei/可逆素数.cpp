#include <stdio.h>
#include <math.h>
int prime( int x )
{
	int i, flag;
	flag = 1;
	if ( x == 1 ) flag = 0;
	for( i = 2; i <= sqrt(x); i++ ){	
		if ( x % i == 0 ){
			flag = 0;
			i = x;
		}
	}
	if( flag == 1 ) return 1;
	else return 0;
}
int main()
{
	int i, j,  n, x, T, t, res, count = 0, a[10], b[10], y;
	scanf("%d", &T);
	for(i = 0; i < T; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < T; i++){
		if(prime(a[i]) == 0 && i == T - 1){
			printf("%d不是素数", a[i]);
			continue;
		} else if(prime(a[i]) == 0){
			printf("%d不是素数\n", a[i]);
			continue;
		}
		y = t = a[i];
		while(t > 0){
			res = t % 10;
			t /= 10;
			count++; 
		}
		while(y > 0){
			res = y % 10;
			y /= 10;
			b[i] += res * pow(10, count-1);
			count--;
		}
		if(prime(b[i]) == 1 && i == T - 1) printf("%d是可逆素数", a[i]);
		else if(prime(b[i]) == 1) printf("%d是可逆素数\n", a[i]);
		if(prime(b[i]) == 0 && i == T - 1) printf("%d是素数，但不是可逆素数", a[i]);
		else if(prime(b[i]) == 0) printf("%d是素数，但不是可逆素数\n", a[i]);
	}
	return 0;
}

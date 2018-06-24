#include <stdio.h>
int main()
{
	int i, j, T, x, y, n, temp, res, flag;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &x, &y);
		n = 0;
		temp = 0;
		res = 0;
		flag = 0;
		for(i = 0; n < x; i++){
			n += i;
			if(n == x){
				for(j = 2; j <= n - 2; j++){
					temp = res = n - (j + j - 1) + (j * (j - 1));
					for(i = j + 2; i <= n; ++i){
						res = temp - (i + i - 1) + (i * (i - 1));
						if(res == y){
						printf("(%d,%d)", j - 1, i - 1);
						flag = 1;
						}
					}
				}
				if(flag == 0) printf("NONE\n");
				else printf("\n");
				break;
			}
			if(n > x){
				printf("NONE\n");
				break;
			}
		}
	}	
	return 0;
}


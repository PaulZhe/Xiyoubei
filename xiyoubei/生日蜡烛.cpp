#include <stdio.h>
int main()  
{  
	int x, i, j;
	scanf("%d", &x);
    for(i = 1; i <= 100; i++)  
    for(j = i; j <= 100; j++)  
    {  
        if(((i+j)*(j-i+1))/2 == x)  
        {  
            printf("%d %d",i,j);  
            goto mark;
        }  
    }
	mark:
    return 0;  
}

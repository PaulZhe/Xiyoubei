#include <stdio.h>
#include <string.h>
int main()
{
	char str1[1000], str2[1000];
	int a[1000];
	int i, n, count = 0;
	scanf("%s", str1);
	scanf("%s", str2);
	n = strlen(str1);
	for(i = 0; i < n; i++){
		if( str1[i] == str2[i] ) a[i] = 0;
		else a[i] = 1;
	}
	for(i = 0; i < n-1; i++)  {  
        if( a[i] == 1 && !a[i+1] )  
        {  
            count++;  
            a[i] = 0;  
            a[i+1] = 1;  
        }  
        else if( a[i] == 1 && a[i+1] == 1 )  
        {  
            count++;  
            a[i] = a[i+1] = 0;  
        }  
    } 
    printf("%d", count);
    return 0;
} 

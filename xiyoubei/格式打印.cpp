#include <stdio.h>
#include <string.h>
int main()
{
	char art[501], word[100][21];
	int len, n, t, i = 0, j = 0, k, sum = 0, a[100], count = 0, bj = 0, x = 0;//µ¥´ÊÊıÄ¿count 
	gets(art);
	n = strlen(art);
	for(k = 0; k < n; k++){
		
		if( art[k] == ' ' ){
			word[i][j] = '\0';
			a[i] = strlen(word[i]);
			
			i++;
			j = 0;
			k++;	
		}
		word[i][j] = art[k];
		j++;
	}
	count = i+1;
	word[i][j] = '\0';
	a[i] = strlen(word[i]);
	for(i = 0; i < count; i++){
		sum += a[i] + 1;
		if(sum > 21){
			sum = 0; 
			if(i - bj == 1) 
			printf("%s\n", word[bj]);
			
			else if(i - bj > 1){
				for(j = bj; j < i - 1; j++){
					printf("%s ", word[j]);
					x += strlen(word[j]) + 1;	
				}
				len = strlen(word[i - 1]);
				for(j = 0; j < 20 - x - len; j++ ){
					printf(" ");
				}
				x = 0;
				printf("%s\n", word[i - 1]);
				
			}
			bj = i;
			i--;
		}
	}	
	x = 0;
	if(sum != 0){
		for(j = bj ; j < count; j++){
			if( j == count - 1){
				len = strlen(word[i - 1]);
				if(i - bj == 1) 
				printf("%s", word[bj]);
				else {
				for(k = 0; k < 20 - x - len; k++ )
					printf(" ");
				printf("%s", word[j]);
				}
			}
			else{ 	
				printf("%s ", word[j]);		
				x += strlen(word[j]) + 1;	
			}
		}
	}
	return 0;
}

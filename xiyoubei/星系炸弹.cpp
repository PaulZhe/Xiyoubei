#include<stdio.h>  
int main()  
{  
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};  
    int day, y, m, d, i, T, weekday;
	scanf("%d", &T);
	while(T--){
		
		scanf("%d-%d-%d%d", &y, &m, &d, &day);

    	for(i = 0; i < day; i++)  
    	{  
    	    d++;  
    	    
    	    if(d > month[m-1])  
    	    {  
    	        d = 1;  
    	        m++;  
    	        if(m > 12)  
    	        {  
    	            m = 1;  
        	        y++;  
        	        if((y % 400 == 0) ||(y % 4 == 0 && y % 100 != 0))  
        	            month[1] = 29;  
        	        else  
        	            month[1] = 28;  
        	    }  
        	}  
    	}	  
    	if(m==1 || m==2) weekday= (d+2* (m+12)+3*(m+13)/5+(y-1)+(y-1)/4-(y-1)/100+(y-1)/400) % 7;
    	else weekday= (d+2* m+3*(m+1)/5+y+y/4-y/100+y/400) % 7;
    	switch(weekday){
    		case 6: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期日",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期日",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期日",y,m,d);break; 
			}else printf("%d年%d月%d日 星期日",y,m,d);break; 
    		
			case 0: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期一",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期一",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期一",y,m,d);break; 
			}else printf("%d年%d月%d日 星期一",y,m,d);break; 
    	
			case 1: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期二",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期二",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期二",y,m,d);break; 
			}else printf("%d年%d月%d日 星期二",y,m,d);break; 
    	
			case 2: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期三",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期三",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期三",y,m,d);break; 
			}else printf("%d年%d月%d日 星期三",y,m,d);break; 
    	
			case 3: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期四",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期四",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期四",y,m,d);break; 
			}else printf("%d年%d月%d日 星期四",y,m,d);break; 
    	
			case 4: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期五",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期五",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期五",y,m,d);break; 
			}else printf("%d年%d月%d日 星期五",y,m,d);break; 
    	
			case 5: if(m<10 && d<10){
				printf("%d年0%d月0%d日 星期六",y,m,d);break; 
			}else if(m<10 && d>=10){
				printf("%d年0%d月%d日 星期六",y,m,d);break; 
			}else if(m>=10 && d<10){
				printf("%d年%d月0%d日 星期六",y,m,d);break; 
			}else printf("%d年%d月%d日 星期六",y,m,d);break; 
		}
    	if(T > 0) printf("\n");
	}
    
    return 0;  
}  

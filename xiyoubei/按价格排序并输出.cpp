#include <stdio.h>
typedef struct Dat{
	int year;
	int month;
	int day;
}Date;
typedef struct Boo{
	int num;
	char name[20];
	char art[50];
	char pub[50];
	Date date;
	float price;
}Book;
//“编号”、“书名”、“作者”、“出版社”、“出版日期”、“价格” 
int main()
{
	int T, i, j, change;
	Book t, b[100];
	scanf("%d", &T);
	for(i = 0; i < T; i++){
		scanf("%d", &b[i].num);
		getchar();
		scanf("%s%s%s%d-%d-%d%f", b[i].name, b[i].art, b[i].pub, &b[i].date.year,
		&b[i].date.month, &b[i].date.day, &b[i].price);
	}
	change = 1;
	for(i = 0; i < T - 1 && change; i++){
		change = 0;
		for(j = 0; j < T - i - 1; j++){
			if(b[j].price > b[j+1].price){
				 t = b[j];
				 b[j] = b[j+1];
				 b[j+1] = t;
				 change = 1;
			}
		}
	}
	printf("编号 书名 作者 出版社 出版日期 价格\n");
	for(i = 0; i < T; i++){
		printf("%d %s %s %s %d年%d月%d日 %.2f\n", b[i].num, b[i].name, b[i].art, b[i].pub, b[i].date.year,
		b[i].date.month, b[i].date.day, b[i].price);
	}
	return 0;
}

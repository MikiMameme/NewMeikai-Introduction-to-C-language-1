/* 読み込んだ整数値を0までカウントダウン（その2） */

#include<stdio.h>

int main(void)
{
	int no;
	
	printf("正の整数を入力してください。 :");
	scanf("%d", &no);
	
	while(no >= 0)
		printf("%d", no --);
	printf("\n");
	
	return 0;
}
/* 右上が直角の直角二等辺三角形を表示 */

#include<stdio.h>

int main(void)
{
	int i, j, len;
	
	puts("右上直角二等辺三角形を作ります。");
	printf("短辺 :");
	scanf("%d", &len);
	
	for(i = len; i >= 1; i--){
		for(j = 1; j <= len - i; j++)
			putchar(' ');
		for(j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
/* 4章まとめ */

#include<stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;
	
	/* do文 */
	do{
		printf("0〜100の整数値");
		scanf("%d", &x);
	}while (x < 0 || x > 100);
	
	
	y = x;
	z = x;
	
	/* while文 */
	while(y >= 0)
		printf("%d %d\n", y--, ++z);
		
		printf("縦横が整数で面積が%d"
				"の長方形の辺の長さ : \n", x);
				
	/* for文 */
	for(i = 1; i < x; i++){
		if(i * i > x) break;
		if(x % i != 0) continue;
		printf("%d X %d\n", i, x / i);
	}
	
	puts("5行7列のアステリスク");
	/* 二重ループ */
	for(i = 1; i <= 5; i++){
		for(j = 1; j<= 7; j++)
			putchar('*');
		putchar('\n');
	}
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("현재의 x값은 %d입니다.\n", x);
	x += 50; //x = x + 50;
	printf("현재의 x값은 %d입니다.\n", x);
	x -= 50; //x = x - 50;
	printf("현재의 x값은 %d입니다.\n", x);
	x *= 50;//x = x * 50;
	printf("현재의 x값은 %d입니다.\n", x);
	x /= 50;//x = x / 50;
	printf("현재의 x값은 %d입니다.\n", x);
	x %= 3;//나머지 출력
	printf("현재의 x값은 %d입니다.\n", x);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	//줄바꿈 기호는 "\n"임
	printf("3*1 = 3\n");
	printf("3*2 = 6\n");
	printf("3*3 = 9\n");

	//연산자 기입력시
	int x, y, sum;
	x = 100;
	y = 200;
	sum = x + y;
	printf("두수의 합 : %d\n", sum);

	//연산자 입력이후
	int xx, yy, sum_s;
	printf("첫번째 숫자를 입력하시오 : ");
	scanf("%d", &xx);
	printf("두번째 숫자를 입력하시오 : ");
	scanf("%d", &yy);
	sum_s = xx + yy;
	printf("두수의 합 : %d", sum_s);

	//여행비용 계산예제
	int p_sum, price, days;
	p_sum = 0;
	printf("여행은 몇박인가요? : ");
	scanf("%d", &days);
	printf("항공권 가격 : ");
	scanf("%d", &price);
	p_sum = p_sum + price;
	printf("호텔 1박 가격 : ");
	scanf("%d", &price);
	p_sum = p_sum + days * price;
	printf("하루에 필요한 용돈 : ");
	scanf("%d", &price);
	p_sum = p_sum + days * price;
	printf("총 여행 비용 : %d\n", p_sum);
	return 0;
}
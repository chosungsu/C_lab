#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//증감연산자
	int x = 10, y = 10;
	printf("x = %d y = %d\n", x, y);
	x += 1;
	printf("(x+=1)이후 x = %d\n", x);
	y = x++;
	printf("(x++)이후 x = %d y = %d\n", x, y);
	y *= 2;
	printf("(y*=2)이후 y = %d\n", y);
	//비트 연산자
	//AND : bit 양쪽이 모두 1인 경우 1 출력
	//OR : bit 한쪽만이라도 1인 경우 1 출력
	//XOR : bit 한쪽만 1인 경우 1 출력
	//NOT : bit가 0인 경우 1 출력
	//>> : 감소이동
	//<< : 증가이동
	int xx = 9;
	int yy = 10;
	printf("비트 AND = %08X\n", xx & yy);
	printf("비트 OR = %08X\n", xx | yy);
	printf("비트 XOR = %08X\n", xx ^ yy);
	printf("비트 NOT = %08X\n", ~yy);
	printf("비트 증가이동 = %d\n", xx << 1);
	printf("비트 감소이동 = %d\n", xx >> 1);
	//우선순위
	//콤마 < 대입 < 논리 < 관계 < 산술 < 단항 순
	//형변환
	int i;
	double f;
	f = 5 / 4;
	printf("(5/4) = %f\n", f);
	f = (double)5 / 4;
	printf("(double)5/4 = %f\n", f);
	i = 1.3 + 1.8;
	printf("1.3 + 1.8 = %d\n", i);
	i = (int)1.3 + (int)1.8;
	printf("(int)1.3 + (int)1.8 = %d\n", i);
	//예제(1)
	int f_num, s_num;
	printf("첫번째 정수를 입력하시오 : ");
	scanf(" %d", &f_num);
	printf("두번째 정수를 입력하시오 : ");
	scanf(" %d", &s_num);
	printf("몫은 %d이고 나머지는 %d입니다.\n", f_num / s_num, f_num % s_num);
	//예제(2)
	int t_num;
	printf("첫번째 정수를 입력하시오 : ");
	scanf(" %d", &t_num);
	printf("세제곱값은 %d*%d*%d = %d\n", t_num, t_num, t_num, t_num*t_num*t_num);
	//예제(3)
	int ff_num;
	printf("정수를 입력하시오 : ");
	scanf(" %d", &ff_num);
	printf("백의 자리수 : %d\n", ff_num / 100);
	printf("십의 자리수 : %d\n", (ff_num % 100)/10);
	printf("일의 자리수 : %d\n", (ff_num % 100%10)/1);
	return 0;
}
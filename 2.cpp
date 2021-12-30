#define _CRT_SECURE_NO_WARNINGS
#define EXC_RATE 1120
#include <stdio.h>
//양수 변수는 unsigned로 표현
//기호상수는 상수에 이름을 붙인 것 = 리터럴 상수
//기호상수의 장점 2가지
//프로그램을 읽기가 쉬워짐
//변경을 쉽게 함
int main(void) {
	//변수 선언 방식
	printf("%d %#x %#o \n", 128, 128, 128);
	//기호상수 사용
	int usd, krw;
	printf("달러화 금액을 입력하시오 : ");
	scanf(" %d", &usd);
	krw = EXC_RATE * usd;
	printf("달러화 %d달러는 %d원입니다.\n",
		usd, krw);
	//변수 값 교환하기
	int a = 100;
	int b = 200;
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	//빛 도달 시간 예제
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	time = distance / light_speed;
	time = time / 60.0;
	printf("빛의 속도는 %.1fkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %.1fkm \n", distance);
	printf("도달 시간은 %f초 \n", time);
	//온도 변환 예제(feat.lf를 이용한 부동소수점)
	double cel, fah;
	printf("화씨온도 = ");
	scanf(" %lf", &fah);
	cel = (fah - 32) * 5 / 9;
	printf("섭씨온도 = %lf \n", cel);
	//제어문자 예제
	//\b는 뒤로 보내는 제어문자, \a는 경고음, \", \'등은 따옴표 출력
	int id, pass;
	printf("아이디와 패스워드를 4개의 숫자로 입력하세요 : \n");
	printf("id : ____\b\b\b\b");
	scanf(" %d", &id);
	printf("pass : ____\b\b\b\b");
	scanf(" %d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
	//예제(1)
	double db;
	printf("실수를 입력하시오 : ");
	scanf(" %f", &db);
	printf("지수 형식으로는 %e입니다.\n", db);
	//예제(2)
	char ci;
	printf("문자를 입력하시오 : ");
	scanf(" %c", &ci);
	printf("아스키 코드 : %d", ci);

	return 0;
}
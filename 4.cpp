#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	//if-else문(1)
	int tmp;
	printf("온도 입력 : ");
	scanf("%d", &tmp);
	if (tmp > 0) {
		printf("영상이다.\n");
	}
	else {
		printf("영하이다.\n");
	}
	printf("현재 온도는 %d도입니다.\n", tmp);
	//if-else문(2)
	int score;
	printf("성적 입력 : ");
	scanf("%d", &score);
	if (score >= 60) {
		printf("합격이다.\n");
	}
	else {
		printf("불합격이다.\n");
	}
	printf("현재 성적은 %d점입니다.\n", score);
	//복합문
	int x, y;
	printf("첫번째 수 : ");
	scanf("%d", &x);
	printf("두번째 수 : ");
	scanf("%d", &y);
	printf("큰 수 : %d\n", (x > y) ? x : y);
	printf("작은 수 : %d\n", (x < y) ? x : y);
	//연산자 사용
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	if (num >= 0 && num <= 100) {
		printf("입력한 정수가 0에서 100 사이\n");
	}
	else {
		printf("그렇지 않습니다.\n");
	}
	//switch-case문
	int month, days;
	printf("일수를 알고 싶은 달 입력 : ");
	scanf("%d", &month);
	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d이다.\n", month, days);
	//가위바위보 예제
	int user, computer;
	printf("가위(0), 바위(1), 보(2) 중 1개 선택 : ");
	scanf("%d", &user);
	srand((unsigned)time(0));
	computer = rand() % 3;
	printf("사용자 : %d\n", user);
	printf("컴퓨터 : %d\n", computer);
	if ((user + 1) % 3 == computer) {
		printf("컴퓨터 승\n");
	}
	else if (computer == user) {
		printf("비겼음\n");
	}
	else {
		printf("사용자 승리\n");
	}
	//큰 정수 찾기 예제
	int a, b, c, largest;
	printf("정수 3개를 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		largest = a;
	}
	else if (b > a && b > c) {
		largest = b;
	}
	else {
		largest = c;
	}
	printf("가장 큰 정수는 %d이다. \n", largest);
	//예제(1)
	int op_num;
	printf("정수를 입력하시오 : ");
	scanf(" %d", &op_num);
	if (op_num % 2 == 0) {
		printf("%d은 짝수입니다.\n", op_num);
	}
	else {
		printf("%d은 홀수입니다.\n", op_num);
	}
	//예제(2)
	char light;
	printf("신호등의 색깔 입력 (R, G, Y) : ");
	scanf(" %c", &light);
	if (light == 'R' || light == 'r') {
		printf("정지!\n");
	}
	else if (light == 'Y' || light == 'y') {
		printf("천천히...\n");
	}
	else {
		printf("고고!\n");
	}
	//예제(3)
	int m_money;
	printf("과세 표준을 입력하시오(만원) : ");
	scanf(" %d", &m_money);
	if (m_money <= 1000) {
		printf("소득세는 %d만원입니다.", int(m_money * 0.08));
	}
	else if (m_money > 1000 && m_money <= 4000) {
		printf("소득세는 %d만원입니다.", int(1000 * 0.08 + (m_money - 1000) * 0.17));
	}
	else if (m_money > 4000 && m_money <= 8000) {
		printf("소득세는 %d만원입니다.", int(1000 * 0.08 + 3000 * 0.17 + (m_money - 4000) * 0.26));
	}
	else {
		printf("소득세는 %d만원입니다.", int(1000 * 0.08 + 3000 * 0.17 + 4000 * 0.26 + (m_money - 8000) * 0.35));
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	//if-else��(1)
	int tmp;
	printf("�µ� �Է� : ");
	scanf("%d", &tmp);
	if (tmp > 0) {
		printf("�����̴�.\n");
	}
	else {
		printf("�����̴�.\n");
	}
	printf("���� �µ��� %d���Դϴ�.\n", tmp);
	//if-else��(2)
	int score;
	printf("���� �Է� : ");
	scanf("%d", &score);
	if (score >= 60) {
		printf("�հ��̴�.\n");
	}
	else {
		printf("���հ��̴�.\n");
	}
	printf("���� ������ %d���Դϴ�.\n", score);
	//���չ�
	int x, y;
	printf("ù��° �� : ");
	scanf("%d", &x);
	printf("�ι�° �� : ");
	scanf("%d", &y);
	printf("ū �� : %d\n", (x > y) ? x : y);
	printf("���� �� : %d\n", (x < y) ? x : y);
	//������ ���
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	if (num >= 0 && num <= 100) {
		printf("�Է��� ������ 0���� 100 ����\n");
	}
	else {
		printf("�׷��� �ʽ��ϴ�.\n");
	}
	//switch-case��
	int month, days;
	printf("�ϼ��� �˰� ���� �� �Է� : ");
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
	printf("%d���� �ϼ��� %d�̴�.\n", month, days);
	//���������� ����
	int user, computer;
	printf("����(0), ����(1), ��(2) �� 1�� ���� : ");
	scanf("%d", &user);
	srand((unsigned)time(0));
	computer = rand() % 3;
	printf("����� : %d\n", user);
	printf("��ǻ�� : %d\n", computer);
	if ((user + 1) % 3 == computer) {
		printf("��ǻ�� ��\n");
	}
	else if (computer == user) {
		printf("�����\n");
	}
	else {
		printf("����� �¸�\n");
	}
	//ū ���� ã�� ����
	int a, b, c, largest;
	printf("���� 3���� �Է� : ");
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
	printf("���� ū ������ %d�̴�. \n", largest);
	//����(1)
	int op_num;
	printf("������ �Է��Ͻÿ� : ");
	scanf(" %d", &op_num);
	if (op_num % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n", op_num);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.\n", op_num);
	}
	//����(2)
	char light;
	printf("��ȣ���� ���� �Է� (R, G, Y) : ");
	scanf(" %c", &light);
	if (light == 'R' || light == 'r') {
		printf("����!\n");
	}
	else if (light == 'Y' || light == 'y') {
		printf("õõ��...\n");
	}
	else {
		printf("���!\n");
	}
	//����(3)
	int m_money;
	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf(" %d", &m_money);
	if (m_money <= 1000) {
		printf("�ҵ漼�� %d�����Դϴ�.", int(m_money * 0.08));
	}
	else if (m_money > 1000 && m_money <= 4000) {
		printf("�ҵ漼�� %d�����Դϴ�.", int(1000 * 0.08 + (m_money - 1000) * 0.17));
	}
	else if (m_money > 4000 && m_money <= 8000) {
		printf("�ҵ漼�� %d�����Դϴ�.", int(1000 * 0.08 + 3000 * 0.17 + (m_money - 4000) * 0.26));
	}
	else {
		printf("�ҵ漼�� %d�����Դϴ�.", int(1000 * 0.08 + 3000 * 0.17 + 4000 * 0.26 + (m_money - 8000) * 0.35));
	}
	return 0;
}
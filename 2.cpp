#define _CRT_SECURE_NO_WARNINGS
#define EXC_RATE 1120
#include <stdio.h>
//��� ������ unsigned�� ǥ��
//��ȣ����� ����� �̸��� ���� �� = ���ͷ� ���
//��ȣ����� ���� 2����
//���α׷��� �бⰡ ������
//������ ���� ��
int main(void) {
	//���� ���� ���
	printf("%d %#x %#o \n", 128, 128, 128);
	//��ȣ��� ���
	int usd, krw;
	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf(" %d", &usd);
	krw = EXC_RATE * usd;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n",
		usd, krw);
	//���� �� ��ȯ�ϱ�
	int a = 100;
	int b = 200;
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	//�� ���� �ð� ����
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	time = distance / light_speed;
	time = time / 60.0;
	printf("���� �ӵ��� %.1fkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %.1fkm \n", distance);
	printf("���� �ð��� %f�� \n", time);
	//�µ� ��ȯ ����(feat.lf�� �̿��� �ε��Ҽ���)
	double cel, fah;
	printf("ȭ���µ� = ");
	scanf(" %lf", &fah);
	cel = (fah - 32) * 5 / 9;
	printf("�����µ� = %lf \n", cel);
	//����� ����
	//\b�� �ڷ� ������ �����, \a�� �����, \", \'���� ����ǥ ���
	int id, pass;
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ��� : \n");
	printf("id : ____\b\b\b\b");
	scanf(" %d", &id);
	printf("pass : ____\b\b\b\b");
	scanf(" %d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
	//����(1)
	double db;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf(" %f", &db);
	printf("���� �������δ� %e�Դϴ�.\n", db);
	//����(2)
	char ci;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf(" %c", &ci);
	printf("�ƽ�Ű �ڵ� : %d", ci);

	return 0;
}
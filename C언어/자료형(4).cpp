#include <stdio.h>

int main() {
	int a, b; //���� ������ ���� ���𰡴�

	scanf("%d%d", &a, &b); //&: ������(������ �ſ� ��ƴ�. ���̵� ���� �Ѵ�.)
	//sacnf("%d%d", a, b); ��� �ϸ� ���� ���.

	//scanf �Լ��� �и��Ǿ��ִ� ���� �ν��Ѵ�. �ȶ��� �Լ��̴�. ���и� �Ǿ������� �ν�

	int hap = a + b;
	int cha = a - b;
	int mok = a / b;
	int gop = a * b;

	printf("%d + %d = %d", a, b, hap);
	printf("%d + %d = %d", a, b, cha);
	printf("%d + %d = %d", a, b, mok);
	printf("%d + %d = %d", a, b, gop);

	float f = 3.14;

	printf("%f\n",f) // %d�� �Է��ϸ� �ȵȴ�. float �Լ��� ����߱� ������

		//scanf ��, ����ڿ��� �Ǽ��� �Է¹������� ��� �ؾ��ұ�?
		//int�� float�� ��ȯ %d�� %f�� ��ȯ �ϸ� �ȴ�. ��� �Ҽ��� 6�ڸ� ���� ���´�.




}

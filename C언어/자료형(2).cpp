#include <stdio.h>
/*
int main() {
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

}
// sizeof(x): X�� ũ�⸦ �˷���
// x: �� (int, float, ...)
//        �����̸�


int main() {
	int a = 3.14;
	double b = 10;

	printf("%d %f\n", a, b);
}
//�Ǽ��� ������ ������ ���� �� ����. > ������ ���� �ʴ´�.
//������ �Ǽ��� ������ ���� �� �ִ�.
*/

//����ȯ: �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg); // 93.666667 ������ ����� 93.000000 �� ���´�.

	// ���� / ���� = ����
	// �Ǽ� / ���� = �Ǽ�
	// ����/ �Ǽ� = �̷��� ������ ����.
	// �Ǽ� / �Ǽ� = �Ǽ�

	//�������� �Ǽ��� �� �پ��� ���� ������ �� �ִ�. 
	// ū���� �������� �ȴ�.

	// ���� avg = sum / 3; ������ sum �� 3 ��� �����̱� ������ avg�� ������ ���´�.
	// �̰� �ذ��Ϸ���

	double avge = (double)sum / 3;
	printf("%f\n", avge);
	//���� ���ָ� sum �� ��� �Ǽ��� ���Ѵ�.

	int a = 5 / 3;

	//���� + ���� = ����
	//���� + �Ǽ� = �Ǽ�
	//�Ǽ� + �Ǽ� = �Ǽ�

}
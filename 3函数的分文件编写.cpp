/*
		�����ķ��ļ���д��
		1�� ������׺��Ϊ .h ��ͷ�ļ�
		2�� ������׺��Ϊ .cpp ��Դ�ļ�
		3�� ��ͷ�ļ���д ����������
		4�� ��Դ�ļ���д �����Ķ���
		5��������ϲ���֮����	main	֮ǰ include ��ͷ�ļ�������ֱ������һ��Դ�ļ��ж���ĺ�����
*/

# include <iostream>
using namespace std;
#include "swap.h"


// ʵ���������ֽ����ĺ���
//void swap(int a, int b);	//����������

//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "����֮��Ϊ��num1 = " << a << ",  num2 = " << b << endl;
//}

int main() {
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}

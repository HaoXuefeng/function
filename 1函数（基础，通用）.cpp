
# include <iostream>
using namespace std;

//	��������һ�ξ���ʹ�õĴ����װ�����������ظ�����
//	һ���ϴ�ĳ���һ���Ϊ���ɸ�ģ�飬ÿ��ģ��ʵ���ض��Ĺ���
//	�������壺
//						����ֵ���� ������(�����б�)
//						{
//							������;
//							return ���ʽ;
//						}



int add(int a, int b) {		//	����� a, b ֻ����ʽ����һ���Ǳ��� a, b ����Ϊ�β�, �ββ�ռ�ڴ�ռ�
	int sum = a + b;		//	����ֵ���ݵ�ʱ���κζ����βεĲ�����������Ӱ��ʵ�Ρ�
	return sum;
}

//	�����������Ҫ����ֵ���ڶ���ʱ����ֵ����дΪ void

void swap(int num1, int num2) {		//	һ��������������������
	cout << "����ǰ��" << num1 << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << num1 << num2 << endl;

	//return;		//	����Ҫ����ֵ��ʱ�� return ����ֱ�Ӹ� ; ����Ҳ���Բ�дreturn
}

int main() {
	int a = 10;				//	����� a, b ��ʵ�ʵĲ�������Ϊʵ��
	int b = 8;

					//���ú���		���ú���ʱ����ʵ�ε�ֵ�����βΣ�����ֵ����
	int c = add(a, b);
	cout << "c = " << c << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;		//	�����ں�����Ľ�����������Ӱ��ʵ��

	system("pause");
	return 0;
}

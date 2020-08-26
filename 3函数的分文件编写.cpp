/*
		函数的分文件编写：
		1、 创建后缀名为 .h 的头文件
		2、 创建后缀名为 .cpp 的源文件
		3、 在头文件中写 函数的声明
		4、 在源文件中写 函数的定义
		5、完成以上步骤之后，在	main	之前 include 该头文件，就能直接用另一个源文件中定义的函数了
*/

# include <iostream>
using namespace std;
#include "swap.h"


// 实现两个数字交换的函数
//void swap(int a, int b);	//函数的声明

//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "交换之后为：num1 = " << a << ",  num2 = " << b << endl;
//}

int main() {
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}

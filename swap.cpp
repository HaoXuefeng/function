
//	2、 创建后缀名为.cpp 的源文件
//	4、 在源文件中写 函数的定义


# include "swap.h"		//	双引号代表这是一个自定义的头文件

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "交换之后为：\nnum1 = " << a << "\n" << "num2 = " << b << endl;
}
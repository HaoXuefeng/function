
# include <iostream>
using namespace std;

//	函数：把一段经常使用的代码封装起来，减少重复代码
//	一个较大的程序，一般分为若干个模块，每个模块实现特定的功能
//	函数定义：
//						返回值类型 函数名(参数列表)
//						{
//							函数体;
//							return 表达式;
//						}



int add(int a, int b) {		//	这里的 a, b 只是形式，不一定是变量 a, b ，称为形参, 形参不占内存空间
	int sum = a + b;		//	发生值传递的时候，任何对于形参的操作，都不会影响实参。
	return sum;
}

//	如果函数不需要返回值，在定义时返回值类型写为 void

void swap(int num1, int num2) {		//	一个函数，交换两个数字
	cout << "交换前：" << num1 << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << num1 << num2 << endl;

	//return;		//	不需要返回值的时候 return 后面直接跟 ; 或者也可以不写return
}

int main() {
	int a = 10;				//	这里的 a, b 是实际的参数，称为实参
	int b = 8;

					//调用函数		调用函数时，把实参的值传给形参，就是值传递
	int c = add(a, b);
	cout << "c = " << c << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;		//	发生在函数里的交换，并不会影响实参

	system("pause");
	return 0;
}

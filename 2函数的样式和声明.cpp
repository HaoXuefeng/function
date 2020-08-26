/*
函数的常见样式：1、无参无返；2、有参无返；3、无参有返；4、有参有返。

1、无参无返：
void test1(){
												//void a = 10	不合法，无类型是不能创建变量的
	cout << "this is a test" << endl;
	//	test1();	即可调用函数
}
2、有参无返：
void test2(int a){
	
	cout << "this is test2, and a = " << a << endl;
	//	test2(num);	即可调用
}
3、无参有返：
int test3(){
	cout << "this is test3" <<endl;
	return 10;
	//	a = test3();即可调用		调用后会输出字符，并且 a = 10
}

4、有参有返：
int test4( int a, int b){
	cout << "this is test4" <<endl;
	int c = 0;
	if ( a > b ){
		c = a;
	}
	else{
		c = b;
	}
	return c;
	//	int c = test(a,b);		会将 a 和 b 中较大的值赋予给c
}


		//	函数的声明：	告诉编译器函数的名称以及如何调用函数，函数的主题可以单独定义（即可以放在main()函数后面）
		//	函数的声明可以多次，但函数的定义只能有 1 次。

//声明
int max(int a, int b);
int min(int a, int b);

//定义
int max(int a, int b){
	return a > b ? a : b;
}

int min(int a, int b){
	return a > b ? b : a;
}


*/
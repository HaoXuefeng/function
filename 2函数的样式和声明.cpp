/*
�����ĳ�����ʽ��1���޲��޷���2���в��޷���3���޲��з���4���в��з���

1���޲��޷���
void test1(){
												//void a = 10	���Ϸ����������ǲ��ܴ���������
	cout << "this is a test" << endl;
	//	test1();	���ɵ��ú���
}
2���в��޷���
void test2(int a){
	
	cout << "this is test2, and a = " << a << endl;
	//	test2(num);	���ɵ���
}
3���޲��з���
int test3(){
	cout << "this is test3" <<endl;
	return 10;
	//	a = test3();���ɵ���		���ú������ַ������� a = 10
}

4���в��з���
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
	//	int c = test(a,b);		�Ὣ a �� b �нϴ��ֵ�����c
}


		//	������������	���߱����������������Լ���ε��ú�����������������Ե������壨�����Է���main()�������棩
		//	�������������Զ�Σ��������Ķ���ֻ���� 1 �Ρ�

//����
int max(int a, int b);
int min(int a, int b);

//����
int max(int a, int b){
	return a > b ? a : b;
}

int min(int a, int b){
	return a > b ? b : a;
}


*/
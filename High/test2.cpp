//#define TEST2
#ifdef TEST2

#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"Public/High_io.h"
#include"Public/High_int.h"
#include"Public/High_float.h"
#include"Public/High_math.h"
using namespace std;

int main()
{
	High_int result = 0;
	High_int a = 2, b = 114514;
	cout << "���ڼ���2��114514�η��Ľ��(Debug�������������ʹ��Release)..." << endl;
	result = pow(a, b);
	cout << "�����" << result << endl;
	system("pause");
	return 0;
}

#endif

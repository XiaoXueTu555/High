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
	cout << "正在计算2的114514次方的结果(Debug计算较慢，建议使用Release)..." << endl;
	result = pow(a, b);
	cout << "结果：" << result << endl;
	system("pause");
	return 0;
}

#endif

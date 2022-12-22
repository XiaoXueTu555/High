#define TEST1
#ifdef TEST1

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
	High_int a = 9, b = 6666;
	cout << "正在计算9的6666次方的结果..." << endl;
	result = pow(a, b);
	cout << "结果：" << result << endl;
	system("pause");
	return 0;
}

#endif

//#define TEST3
#ifdef TEST3

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
	High_float result = 2.0;
	result.setprecision(100);
	cout << "正在计算根号2（精确小数点100位）..." << endl;
	result = sqrt(result);
	cout << "结果：" << result << endl;
}

#endif

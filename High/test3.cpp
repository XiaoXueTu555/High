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
	cout << "���ڼ������2����ȷС����100λ��..." << endl;
	result = sqrt(result);
	cout << "�����" << result << endl;
}

#endif

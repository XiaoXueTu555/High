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
	cout << "���ڼ���9��6666�η��Ľ��..." << endl;
	result = pow(a, b);
	cout << "�����" << result << endl;
	system("pause");
	return 0;
}

#endif

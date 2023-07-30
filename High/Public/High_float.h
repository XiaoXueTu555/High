#pragma once
#include "High_int.h"

//��ʼ����������ļ��㾫��
#define PRECISION 32

class High_float
{
private:
	bool sign; //������
	class High_int integer; //����λ
	class High_int decimals; //С��λ
	int64_t decimals_leading_zero; //ǰ��0��������ʡ�ڴ������
public:
	//��������ľ�������
	static int64_t precision;
public:
	High_float();
	High_float(High_int data);
	High_float(long double data);
	High_float(std::string data);
public:
	~High_float();
public:
	High_float operator=(High_float data);
	High_float operator=(class High_int data);
	High_float operator=(long double data);
	High_float operator=(std::string data);
public:
	bool operator==(High_float b);
	bool operator!=(High_float b);
	bool operator>(High_float b);
	bool operator>=(High_float b);
	bool operator<(High_float b);
	bool operator<=(High_float b);
public:
	High_float operator+(High_float b);
	High_float operator-(High_float b);
	High_float operator*(High_float b);
	High_float operator/(High_float b);
	High_float operator%(High_float b);
public:
	High_float operator+=(High_float data);
	High_float operator-=(High_float data);
	High_float operator*=(High_float data);
	High_float operator/=(High_float data);
	High_float operator%=(High_float data);
public:
	operator High_int();
	operator std::string();
	operator long double();
public:
	//���ó�������ľ���
	void setprecision(int64_t precision);
	/*���õײ�Shrink_to_fit_of_decimals����*/
	void private_Shrink_to_fit_of_decimals();
public:
	class High_int& Integer();
	class High_int& Decimals();
	bool& Sign();
	int64_t& Decimals_leading_zero();
private:
	void AlignToSuitableSize(High_float& data);
	//����һЩ����״̬�ʹ���һЩ����
	void Shrink_to_fit_of_decimals();
};

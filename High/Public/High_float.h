#pragma once
#include "High_int.h"

//初始化浮点除法的计算精度
#define PRECISION 32

class High_float
{
private:
	bool sign; //正负性
	class High_int integer; //整数位
	class High_int decimals; //小数位
	int64_t decimals_leading_zero; //前置0的数量，省内存的做法
public:
	//除法计算的精度设置
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
	//设置除法计算的精度
	void setprecision(int64_t precision);
	/*调用底层Shrink_to_fit_of_decimals函数*/
	void private_Shrink_to_fit_of_decimals();
public:
	class High_int& Integer();
	class High_int& Decimals();
	bool& Sign();
	int64_t& Decimals_leading_zero();
private:
	void AlignToSuitableSize(High_float& data);
	//处理一些错误状态和处理一些事物
	void Shrink_to_fit_of_decimals();
};

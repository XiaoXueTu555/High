#pragma once
#include <vector>
#include <string>
class High_int
{
private:
	bool sign;
	class std::vector<int8_t> data;
public:
	High_int();
	High_int(const int64_t data);
	High_int(const std::string data);
public:
	~High_int();
public:
	operator int64_t();
	operator std::string();
public:
	High_int operator=(int64_t data);
	High_int operator=(High_int data);
	High_int operator=(std::string data);
public:
	bool operator==(High_int data);
	bool operator!=(High_int data);
	bool operator>(High_int data);
	bool operator>=(High_int data);
	bool operator<(High_int data);
	bool operator<=(High_int data);
public:
	High_int operator+(High_int b);
	High_int operator-(High_int b);
	High_int operator*(High_int b);
	High_int operator/(High_int b);
	High_int operator%(High_int b);
public:
	High_int operator++();
	High_int operator++(int);
	High_int operator--();
	High_int operator--(int);
	High_int operator+=(High_int data);
	High_int operator-=(High_int data);
	High_int operator*=(High_int data);
	High_int operator/=(High_int data);
	High_int operator%=(High_int data);
public:
	//数字的正负性
	bool& Sign();
	//获取底层vector的引用
    class std::vector<int8_t>& Data();
public:
	/*处理High_int的错误状态
	如果底层vector没有数据，则置0
	如果数字开头是0，且数字不是0，如05，
	则删除多余的0。在特殊情况下可能会用到*/
	void private_Shrink_to_fit();
private:
	//对齐到合适的大小(在对齐到对应位的时候会用到)
	void AlignToSuitableSize(High_int& data);
	/*处理High_int的错误状态*/
	void Shrink_to_fit();
private:
	/*底层的除法实现*/
	char basic_Division(High_int b);
};

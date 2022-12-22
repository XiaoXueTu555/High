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
	//���ֵ�������
	bool& Sign();
	//��ȡ�ײ�vector������
    class std::vector<int8_t>& Data();
public:
	/*����High_int�Ĵ���״̬
	����ײ�vectorû�����ݣ�����0
	������ֿ�ͷ��0�������ֲ���0����05��
	��ɾ�������0������������¿��ܻ��õ�*/
	void private_Shrink_to_fit();
private:
	//���뵽���ʵĴ�С(�ڶ��뵽��Ӧλ��ʱ����õ�)
	void AlignToSuitableSize(High_int& data);
	/*����High_int�Ĵ���״̬*/
	void Shrink_to_fit();
private:
	/*�ײ�ĳ���ʵ��*/
	char basic_Division(High_int b);
};

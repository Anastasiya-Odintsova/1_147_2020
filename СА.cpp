#include <iostream>
#include <cstdio>   // "������� ���� ���"
int main()
{
	std::cout << "������� 4 �����";
	float a, b, c, d;
	std::cin >> a >> b >> c >> d;
	float aver = (a + b + c + d) / 4;
	std::cout << "������� ��������������: " << aver;
	std::cin >> d;
}
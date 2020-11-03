#include <iostream>
#include <cmath>
#include <string>

double calc(double a, double b, double x);
double calc(double x);
void taskA(double a, double b, double xn, double xk, double dx);
void taskB(double a, double b, double* x, int size);

using namespace std;

double calc(double a, double b, double x)
{
	double numenator = pow(a + b * x, 2.5);
	double denominator = 1 + log10(a + b * x);
	double y = numenator / denominator;
	return y;
}

double calc(double x)
{
	const double a = 2.5;
	const double b = 4.6;
	return calc(a, b, x);
}

void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, b, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void taskB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);

		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}
int main(int argc, char* argv[])
{
	double a = 2.5;
	double b = 4.6;
	double xn = 1.1;
	double xk = 3.6;
	double dx = 0.5;

	cout << "taskA:" << endl;
	taskA(a, b, xn, xk, dx);

	double x[] = { 1.2,1.28,1.36,1.46,2.35 };
	cout << "taskB:" << endl;
	taskB(2.5, 4.6, x, sizeof(x) / sizeof(x[0]));

	return 0;
}
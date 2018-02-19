#pragma once

__declspec(dllexport) double addadd(double a, double b);


class Calc
{
public:
	explicit Calc();
	virtual ~Calc();

	double Add(double a, double b);
	double Sub(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);

	double Pow(double base, double pow);
	double Sqrt(double number);

	double GetMemory();

private:
	double memory_ = 1234;
};

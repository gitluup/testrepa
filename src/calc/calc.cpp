#include <stdio.h>
#include <math.h>
#include "calc.h"


double addadd(double a, double b)
{
	return a + b;
}


Calc::Calc()
{

}


Calc::~Calc()
{

}


double Calc::Add(double a, double b)
{
	return a + b;
}


double Calc::Sub(double a, double b)
{
	return a - b;
}


double Calc::Mul(double a, double b)
{
	return a * b;
}


double Calc::Div(double a, double b)
{
	return a / b;
}


double Calc::Pow(double base, double power)
{
	return pow(base, power);
}


double Calc::Sqrt(double number)
{
	return sqrt(number);
}


double Calc::GetMemory()
{
	return memory_;
}


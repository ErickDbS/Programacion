#include <cmath>
#include <iostream>
#include <algorithm>

bool approximatelyequal(double a, double b, double epsilon)
{
	return(std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon)); 
}

bool approximatelyequalabsrel(double a, double b, double absepsilon, double relepsilon)
{
	double diff{ std::abs(a - b)};
	if (diff <= absepsilon)
		return true;
	return (diff <= (std::max(std::abs(a), std::abs(b)) * relepsilon));
}

int main()
{
	std::cout << approximatelyequal(a, 1.0, 1e-8) << '\n';
	std::cout << approximatelyequal(a-1.0, 0.0, 1e-8)
	std::cout << approximatelyequalabsrel(a-1.0, 0.0, 1e-12, 1e-8)
}
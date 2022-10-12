#include <iostream>

int getvalue()
{
	std :: cerr << "getvalue () llamado \n";
	return 4;
}

int main ()
{
	std :: cerr << "main () llamado \n";
	std ::cout << getvalue;
	
	return 0;
}
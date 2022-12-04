#include <iostream>

using namespace std;
double my_pow(double a, unsigned int b, double u) {
	if (b == 0)
	{
		return u;
	}
	else
	{
		u = my_pow(a,b-1,u);
		return u*a;
	}
}

int main()
{
    double u = 1;
    double chislo;
    unsigned int stepen;
    cin >> chislo >> stepen;
    cout << my_pow(chislo, stepen, u);
    return 0;
}

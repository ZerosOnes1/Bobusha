#include <iostream>

using namespace std;

double my_pow(double a, int b) {
    double u = 1;
    for (unsigned int i = 0; i < b; i++) {
        u = u * a;
    }
    return u;
}

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
    int stepen;
    cin >> chislo >> stepen;

    if (stepen < 0) {
        chislo = 1 / chislo;
        stepen = stepen * -1;
    }
    cout << my_pow(chislo, stepen);

    cout << my_pow(chislo, stepen, u);

    return 0;
}

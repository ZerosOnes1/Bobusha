#include <iostream>

using namespace std;
double my_pow(double a, unsigned int b) {
    double u = 1;
    for (unsigned int i = 0; i < b; i++) {
        u = u * a;
    }
    return u;
}

int main()
{
    double chislo;
    unsigned int stepen;
    cin >> chislo >> stepen;
    cout<< my_pow(chislo, stepen);
    return 0;
}

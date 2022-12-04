#include <iostream>

using namespace std;
double my_pow(double a, int b) {
    double u = 1;
    for (unsigned int i = 0; i < b; i++) {
        u = u * a;
    }
    return u;
}

int main()
{
    double chislo;
    int stepen;
    cin >> chislo >> stepen;
    if (stepen < 0) {
        chislo = 1 / chislo;
        stepen = stepen * -1;
    }
    cout << my_pow(chislo, stepen);
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precision = 0.0000001;
    double pi {0};
    double numerador {1};
    double denominador {1};
    double cambiosig {1};
    double aprox {0};

    do
    {
        aprox = pi;
        pi += cambiosig * (numerador / denominador);
        denominador += 2;
        cambiosig *= -1;
    } while ((abs(pi - aprox) ) > precision);

    cout << fixed << setprecision(6);
    cout << pi * 4 << endl;
    return 0;
}
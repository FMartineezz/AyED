#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
long long int iteraciiones {1000000};
double pi {0};
double numerador {1};
double denominador {1};
double cambiosig {1};
int numiteracion {0};

while (numiteracion < iteraciiones)
{
   pi +=  cambiosig * (numerador / denominador); 
   denominador += 2; 
   cambiosig *= -1;
   ++numiteracion;
}
cout << fixed << setprecision(6);
cout << pi * 4 << endl;
return 0;
}
































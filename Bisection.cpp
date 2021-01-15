#include <iostream>
#include <iomanip>

using namespace std;

double f(double x)
{
    double c = 2.1;
    double d = 3.7;

    return (x+c)*(x-d)*(x-d)*(x-d);
}

int main()
{
    double a,b,x;
    double e = 0.00000001;
    int k = 0;
    cout << "a = "; cin >> a;
    cout << endl;
    cout << "b = "; cin >> b;
    cout << endl;

    do
    {
        x = (a+b)/2;
        if(f(x)*f(b) < 0)
            a = x;
        else
            b = x;
        k++;
    }while((b-a) >= e);

    cout << "k = " << k << endl;
    cout << "(a+b)/2 = " << setprecision(15) << (a+b)/2 << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float cont = 2;
    double s = 1;
    while (cont < 101){
        s = s + (1 / cont);
        cont = cont + 1;
    }
    cout.precision(2);
    cout << fixed << s <<endl;
    return 0;
}

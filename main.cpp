#include <iostream>

using namespace std;

int main()
{
    float f,c,k;
    cout << "Program to change fahrenheit to celcius" << endl;
    cout << "Temperature in fahrenheit: ";
    cin >>f;
    c = (f-32)*5/9;
    k = c+273.15;
    cout <<f<<" fahrenheit is "<<c<<" degree celcius." <<endl;
    cout <<"Also" <<endl;
    cout <<f<<" fahrenheit is "<<k<<" degree kelvin." <<endl;
    return 0;
}

#include <iostream>
using namespace std;
#include <cmath> 
int main() {
    double a,b,c;
    cout << "Enter the lengths of the side A: ";
    cin >> a;
    cout << "Enter the lengths of the side B: ";
    cin >> b;
    c=sqrt(pow(a,2)+pow(b,2));
    cout << "The length of the hypotenuse is: " << c << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    double temp;
    char unit;
    cout<<"************Temperature Convertor************"<<endl;
    cout<<"F/f = Fahrenheit"<<endl;
    cout<<"C/c = Celsius"<<endl;
    cout<<"What unit do you want to convert to? ";
    cin>>unit;
    if (unit=='f' || unit=='F') {
        cout<<"Enter the temperature in Celsius: ";
        cin>>temp;
        temp=(temp*9/5)+32; // formula to convert Celsius to Fahrenheit
        cout<<"Temperature in Fahrenheit: "<<temp<<" °F"<<endl;
    } 
    else if (unit=='c' || unit=='C') {
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>temp;
        temp=(temp-32)*5/9; // formula to convert Fahrenheit to Celsius
        cout<<"Temperature in Celsius: "<<temp<<" °C"<<endl;
    } 
    else {
        cout<<"Invalid unit entered. Please enter F/f for Fahrenheit or C/c for Celsius."<<endl;
    }
    cout<<"*************************************************"<<endl;
    return 0;
}   
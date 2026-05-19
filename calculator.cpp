#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2,result;
    cout<<"************CALCULATOR**********"<<endl;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter #1: ";
    cin>>num1;
    cout<<"Enter #2: ";
    cin>>num2;
    switch(op){
        case '+':
            result=num1+num2;
            break;
        case  '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;   
            break;
        case '/':
            if(num2!=0){
                result=num1/num2;
            }else{
                cout<<"Error: Division by zero is not allowed."<<endl;
                return 1; // Exit with an error code
            }
            break;
    }
    cout<<"Result: "<<result<<endl;
    cout<<"********************************"<<endl;
    return 0;
}
    
#include <iostream>
using namespace std;
int sumdigits(const int number);
int sumodddigits(const string cardnumber);
int sumevenigits(const string cardnumber);
int main() {
    string cardnumber;
    int result;
    cout << "Enter the credit card number: ";
    cin >> cardnumber;
    result = sumodddigits(cardnumber) + sumevenigits(cardnumber);
    if (result % 10 == 0) {
        cout << "The credit card number is valid." << endl;
    } else {
        cout << "The credit card number is invalid." << endl;
    }
    return 0;
}
int sumdigits(const int number){
    return number/10%10 + number%10;
}
int sumodddigits(const string cardnumber){
    int sum = 0;
    for (int i = cardnumber.size()-1; i >= 0; i -= 2) {
        sum+= (cardnumber[i]-'0'); // Convert char to int, then sum the digits of the result
    }
    return sum;
}
int sumevenigits(const string cardnumber){
    int sum = 0;
    for (int i = cardnumber.size()-2; i >= 0; i -= 2) {
        sum+= sumdigits((cardnumber[i]-'0')*2); // Convert char to int and double it, then sum the digits of the result
    }
    return sum;
}

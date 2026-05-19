#include <iostream>
using namespace std;
int main() {
    srand(time(0)); // seed the pseudo random number generator with the current time
    int num=(rand()%4)+1;// generate a random number between 1 and 6 include
    num=6; 
    //int num2=(rand()%6)+1; // generate a random number between 1 and 6 include
    cout<<"Random number: "<<num<<endl;
    //cout<<"Random number2: "<<num2<<endl;
    switch(num){
        case 1:cout<<"You Win Car!"<<endl;
        break;
        case 2:cout<<"You Win Bike!"<<endl;
        break;  
        case 3:cout<<"You Win TV!"<<endl;
        break;
        case 4:cout<<"You Win Mobile!"<<endl;
        break;
        default:cout<<"You Win Nothing!"<<endl;
    }
    return 0;
}
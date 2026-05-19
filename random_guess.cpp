#include <iostream>
using namespace std;
int main() {
    int num;
    int guess;
    int tries=0;

    srand(time(0)); // seed the pseudo random number generator with the current time
    num=(rand()%100)+1;// generate a random number between 1 and 100 include
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    do{
        cout<<"Enter your guess (between 1 and 100): "; 
        cin>>guess;
        tries++;
        if (guess>num){
            cout<<"Too high! Try again."<<endl;
        }
        else if (guess<num){
            cout<<"Too low! Try again."<<endl;
        }
        else{
            if (tries<=5){
                cout<<"Amazing! You are genious!"<<endl;
            }
            else{
                cout<<"Good job! You are average!"<<endl;
            }
            cout<<"Congratulations! You guessed the number in "<<tries<<" tries!"<<endl;
        }
    }while(guess!=num);
    cout<<"The number was: "<<num<<endl;
    cout<<"Thanks for playing!"<<endl;
    return 0;

}
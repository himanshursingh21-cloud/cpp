#include <iostream>
using namespace std;
#include <ctime>
char getUserChoice() ;
char getComputerChoice() ;
void showChoice(char choice) ;
void chooseWinner(char user, char computer) ;
int main(){
    char user;
    char computer;

    user=getUserChoice();
    cout<<"You chose: ";
    showChoice(user);

    computer=getComputerChoice();
    cout<<"Computer chose: ";
    showChoice(computer);

    chooseWinner(user, computer);
    cout<<"Thank you for playing!"<<endl;
    cout<<"***********************************"<<endl;
    return 0;
}
char getUserChoice(){
    char user;
    cout<<"Rock, Paper, Scissors Game!"<<endl;
    cout<<"***********************************"<<endl;
    do
    {
        cout<<"Enter your choice (R for Rock, P for Paper, S for Scissors): ";
        cin>>user;
    } while (user != 'R' && user != 'P' && user != 'S');
    return user;
}
char getComputerChoice(){
    srand(time(0)); // seed the pseudo random number generator with the current time
    int random = rand() % 3 + 1; // generate a random number between 1 and 3
    switch(random)
    {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
}
void showChoice(char choice) {
    switch(choice)
    {
        case 'R':cout<<"Rock"<<endl;
        break;
        case 'P':cout<<"Paper"<<endl;
        break;  
        case 'S':cout<<"Scissors"<<endl;
        break;
    }
}
void chooseWinner(char user, char computer){
    switch(user)
    {
        case 'R':
            if(computer == 'R')
                cout<<"It's a tie!"<<endl;
            else if(computer == 'P')
                cout<<"Computer wins! Paper covers Rock."<<endl;
            else
                cout<<"You win! Rock crushes Scissors."<<endl;
            break;
        case 'P':
            if(computer == 'P')
                cout<<"It's a tie!"<<endl;
            else if(computer == 'S')
                cout<<"Computer wins! Scissors cut Paper."<<endl;
            else
                cout<<"You win! Paper covers Rock."<<endl;
            break;  
        case 'S':
            if(computer == 'S')
                cout<<"It's a tie!"<<endl;
            else if(computer == 'R')
                cout<<"Computer wins! Rock crushes Scissors."<<endl;
            else
                cout<<"You win! Scissors cut Paper."<<endl;
            break;
    }
}

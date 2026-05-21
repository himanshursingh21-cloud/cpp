#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    srand(time(0));
    drawBoard(spaces);
    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            cout<<"It's a tie!"<<endl;
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            cout<<"It's a tie!"<<endl;
            running = false;
            break;
        }
    }    
    cout<<"Game over!"<<endl;
    return 0;
}

void drawBoard(char *spaces){
    cout<<'\n';
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<'\n';
}
void playerMove(char *spaces, char player){
    int number;
    do{
        cout<<"Enter a number between 1 and 9 to place your "<<player<<": ";
        cin>>number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
            
    }while(!number>0 || !number<9);
    return;
}
void computerMove(char *spaces, char computer){
    int number;
    while(true){
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWin(char *spaces, char player, char computer){
    if (spaces[0]!= ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {
        spaces[0] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[3]!= ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
        spaces[3] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[6]!= ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
        spaces[6] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[0]!= ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
        spaces[0] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[1]!= ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
        spaces[1] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[2]!= ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
        spaces[2] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[0]!= ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        spaces[0] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    else if (spaces[2]!= ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        spaces[2] == player ? cout<<"Congratulations! You win!"<<endl : cout<<"Computer wins! Better luck next time!"<<endl;
        return 1;
    }
    return 0;
}
bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    cout<<"It's a tie!"<<endl;
    return true;
}
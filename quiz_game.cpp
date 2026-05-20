#include <iostream>
using namespace std;
int main() {
    string question[]={
        "What is the capital of France?",
        "What is the largest planet in our solar system?",
        "Who wrote the play 'Romeo and Juliet'?",
        "What is the chemical symbol for water?",
        "What is the tallest mountain in the world?"    
        };
    string options[][4]={
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
        {"A. Earth", "B. Jupiter", "C. Mars", "D. Saturn"},
        {"A. William Shakespeare", "B. Charles Dickens", "C. Mark Twain", "D. Jane Austen"},
        {"A. H2O", "B. CO2", "C. O2", "D. NaCl"},
        {"A. Mount Everest", "B. K2", "C. Kangchenjunga", "D. Lhotse"}    
    };
    char answerskey[]={'A', 'B', 'A', 'A', 'A'};
    int size=sizeof(question)/sizeof(question[0]);
    char guess;
    int score=0;
    for(int i=0; i<size; i++){
        cout<<"***********************"<<endl;
        cout<<question[i]<<endl;
        cout<<"***********************"<<endl;
        for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]); j++){
            cout<<options[i][j]<<endl;  
        }
        cout<<"Enter your answer (A, B, C, or D): ";
        cin>>guess;
        guess=toupper(guess);
        if(guess==answerskey[i]){
            cout<<"Correct!"<<endl;
            score++;
        }
        else{
            cout<<"Wrong!\n The correct answer is: "<<answerskey[i]<<endl;
        }
    }
    cout<<"***********************"<<endl;
    cout<<"Your final score is: "<<score<<"/"<<size<<endl;
    cout<<"percentage: "<<(score*100)/(double)asize<<"%"<<endl;
    cout<<"************************"<<endl;
    cout<<"Thank you for playing!"<<endl;
    return 0;
}
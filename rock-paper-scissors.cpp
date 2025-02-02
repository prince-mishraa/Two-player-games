#include<bits/stdc++.h>
#include<iostream>
#include<ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your Choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do{
        cout << "Choose one of the following\n"; 
        cout << "*************************\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    }while(player !='r' && player !='p' && player !='s');
    
    return player;

}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    
    switch(choice){
        case 'r': cout << "Rock\n";
            break;
        case 'p': cout << "Paper\n";
            break;
        case 's': cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char computer){

    if(player == computer){
        cout << "It's a tie!\n";

    } 
    else if ((player == 'r' && computer == 's')|| (player == 'p' && computer == 'r')||(player == 's' && computer == 'p')){
        cout << "You Win!\n";
    }
    else {
        cout << "Computer wins!\n";
    }

}
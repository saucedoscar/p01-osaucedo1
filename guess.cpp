//Author: Oscar Saucedo
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    srand(time(NULL));
    int r1;

    int guess;
    int i = 0;
    
    bool game = true;
    string gameOn;
    string start;
    string gameMode;
    bool gameEasy = false, gameMedium = false, gameHard = false;

    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Hi there! Would you like to play a guessing game? type 'Y' for yes or 'N' for no."<<endl;
    cin>>start;
    if(start == "Y"|| start =="y"){
    game = true;
    cout<<endl;
    cout<<"Okay! Choose a game mode! Type 'easy', 'medium' or 'hard'"<<endl;
    cin>>gameMode;
        if(gameMode == "easy"){
        gameEasy = true;
        r1 = rand() % 3 + 1;
                              }
        else if(gameMode == "medium"){
        gameMedium = true;
        r1 = rand() % 10 + 1;
                                     }
        else if(gameMode == "hard"){
        gameHard = true;
        r1 = rand() % 100 + 1;
                                   }
        else{
        cout<<"Sorry, that response is invalid. Please type using the instructions!"<<endl;
        game = false;
        }
                                } 
   else if(start =="N"||start =="n"){
    game = false;
    }
    else{
    cout<<"sorry, that input is invalid! Please type using the instructions!"<<endl;
    game = false;
                          }
    while(game == true) {
            if(i == 0){ //this if is run if this is the user's first time playing the game.
            cout<<"---------------GAME---------------"<<endl;
            cout<<"Welcome to the guessing game!"<<endl;
                if(gameEasy == true){
               cout<<"I have a number behind my back that is 1-2"<<endl;
                                    }
                if(gameMedium == true){
                cout<<"I have a number behind my back that is from 1- 10"<<endl;
                                     }
                if(gameHard == true){
                cout<<"I have a number behind my back that is from 1 - 100"<<endl;
                                    }
            cout<<"If you guess the number, you win!"<<endl;
            cout<<"Let's play"<<endl;
            cout<<"What number do you think I have behind my back?"<<endl;
                      }
            else{// this else runs when they choose to play again and it's not their first time.
            cout<<"Welcome back to the guessing game!"<<endl;
            cout<<"this is the same game mode!"<<endl;
            cout<<"What number do you think I have behind my back?"<<endl;
                }
        cin>>guess;

            if(guess == r1){
            cout<<"You guessed correctly! You win!"<<endl;
            
                           }       
            else if(guess != r1 && guess > 0 && guess < 100){
            cout<<"Sorry! you were off by "<< abs(r1-guess) << " .Sorry, you lose."<<endl;
                if(r1 > guess){
                cout<<"The number behind my back is higher."<<endl;
                              }
                        
                if(r1 < guess){
                cout<<"The number behind my back is lower."<<endl;
                              }
                                                            }
            else{
            cout<<"Sorry that number is invalid!"<<endl;
                }
           i++; //keeps track if they played more than once since i is equal to 0. 0 meaning they haven't played at all and i>0 meanning they have played at least once.
          cout<<"Would you like to play again? type Y or N"<<endl;
          cin>>gameOn;
            if(gameOn == "N" || gameOn == "n"){
            game = false;
                                              }

            else{
            cout<<"Okay let's play again!"<<endl;
            cout<<""<<endl;
            cout<<"--------NEW GAME---------"<<endl;
            cout<<""<<endl;
                if(gameMode == "easy"){ //if they play again these if and esle if statements will regernerate another random number instead of having the same one again.
                gameEasy = true;    
                r1 = rand() % 3 + 1;
                                  }
                else if(gameMode == "medium"){
                gameMedium = true;
                r1 = rand() % 10 + 1;
                                         }
                else if(gameMode == "hard"){
                gameHard = true;
                r1 = rand() % 100 + 1;
                                       }
            gameOn.clear();
                } //end of while loop
                                }
    if(i > 0){
    cout<<"Thanks for playing"<<endl;       //the ending message if they played at least once 
             }
    if(i == 0){
    cout<<"See you later!"<< endl;        //incase the user had said they did not want to play at all
              }
    cout<<"---------------------------------------------------------"<<endl;

return 0;
            }

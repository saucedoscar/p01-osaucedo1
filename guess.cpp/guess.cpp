#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    srand(time(NULL));
    int r1;
    r1 = rand() % 10 + 1;

    int guess;
    int i = 0;
    bool game = true;
    string gameOn;
    cout<<"-------------------------------------------------------"<<endl;
    while(game == true){
            if(i == 0){ 
            cout<<"Welcome to the guessing game!"<<endl;
            cout<<"I have a number behind my back that is from 1- 10"<<endl;
            cout<<"If you guess the number, you win!"<<endl;
            cout<<"Let's play"<<endl;
            cout<<"What number do you think I have behind my back?"<<endl;
                      }
            else{
            cout<<"Welcome back to the guessing game!"<<endl;
            cout<<"I have a number behind my back that is from 1 - 10"<<endl;
            cout<<"What number do you think I have behind my back?"<<endl;
                }
        cin>>guess;

            if(guess == r1){
            cout<<"You guessed correctly! You win!"<<endl;
            
                           }       
            else if(guess != r1 && guess > 0 && guess < 11){
            cout<<"Sorry! you were off by "<< abs(r1-guess) <<endl;
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
            i++;
                }
                         }
    cout<<"Thanks for playing"<<endl;
    cout<<"---------------------------------------------------------"<<endl;

return 0;
            }

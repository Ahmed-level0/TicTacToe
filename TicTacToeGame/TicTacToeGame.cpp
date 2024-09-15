#include<bits/stdc++.h>
using namespace std; 
int checkWin(char TicTacToe[3][3] , bool gameOver=0){
  
        if(TicTacToe[0][0]=='X'&& TicTacToe[0][1]=='X'&&TicTacToe[0][2]=='X'){
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        }

        else if(TicTacToe[1][0]=='X'&& TicTacToe[1][1]=='X'&&TicTacToe[1][2]=='X'){
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        }

        else if(TicTacToe[2][0]=='X'&& TicTacToe[2][1]=='X'&&TicTacToe[2][2]=='X'){         
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        }
          
        else if(TicTacToe[0][0]=='X'&& TicTacToe[1][0]=='X'&&TicTacToe[2][0]=='X'){          
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        }

        else if(TicTacToe[0][1]=='X'&& TicTacToe[1][1]=='X'&&TicTacToe[2][1]=='X'){          
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        } 

        else if(TicTacToe[0][0]=='X'&& TicTacToe[0][1]=='X'&&TicTacToe[0][2]=='X'){          
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        } 

        else if(TicTacToe[0][2]=='X'&& TicTacToe[1][2]=='X'&&TicTacToe[2][2]=='X'){          
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0; 
        }          


        else if(TicTacToe[0][0]=='O'&& TicTacToe[0][1]=='O'&&TicTacToe[0][2]=='O'){          
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1; 
        }

        else if(TicTacToe[1][0]=='O'&& TicTacToe[1][1]=='O'&&TicTacToe[1][2]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;    
        }

        else if(TicTacToe[2][0]=='O'&& TicTacToe[2][1]=='X'&&TicTacToe[2][2]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        }
          
        else if(TicTacToe[0][0]=='O'&& TicTacToe[1][0]=='O'&&TicTacToe[2][0]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        }

        else if(TicTacToe[0][1]=='O'&& TicTacToe[1][1]=='O'&&TicTacToe[2][1]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        } 

        else if(TicTacToe[0][0]=='O'&& TicTacToe[0][1]=='O'&&TicTacToe[0][2]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        } 

        else if(TicTacToe[0][2]=='O'&& TicTacToe[1][2]=='O'&&TicTacToe[2][2]=='O'){          
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        }

        else if(TicTacToe[0][0]=='X'&& TicTacToe[1][1]=='X'&&TicTacToe[2][2]=='X'){
        gameOver=1;
        cout<<"Player X Wins"<<endl;
        return 0;
        }

        else if(TicTacToe[0][2]=='X'&& TicTacToe[1][1]=='X'&&TicTacToe[2][0]=='X'){
          gameOver=1;
          cout<<"Player X Wins"<<endl;
          return 0;
        }

        else if(TicTacToe[0][0]=='O'&& TicTacToe[1][1]=='O'&&TicTacToe[2][2]=='O'){
        gameOver=1;
        cout<<"Player O Wins"<<endl;
        return 1;
        }
        
        else if(TicTacToe[0][2]=='O'&& TicTacToe[1][1]=='O'&&TicTacToe[2][0]=='O'){
          gameOver=1;
          cout<<"Player O Wins"<<endl;
          return 1;
        }
        
        else{
          return 2;
        } 
};

 int main(){
    int X,Y;

    bool gameOver = 0;

    char TicTacToe[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};

    int turn = 0; 
    
    string confirm;
    
    cout<<"Hello to TicTacToe :D,\nwould you like to continue ?"<<endl;
    cout<<"Type OK if so"<<endl;
    
    cin>>confirm;

    if(confirm=="OK" || confirm=="ok"){
    cout<<"please note that if you want to place X or O\nyou will type the following in the terminal to place it where you like :D"<<endl;
    cout<<"  0 0    |  0 1 |	0 2   "<<endl;
    cout<<"   ------|------|------ "<<endl;
    cout<<"  1 0    |  1 1 |	1 2    "<<endl;
    cout<<"   ------|------|------ "<<endl;
    cout<<"  2 0    |  2 1 |	2 2    "<<endl;
    cout<<"Type OK to continue"<<endl;
    }

    cin>>confirm;


    if(confirm=="OK" || confirm=="ok"){

        while (gameOver==0){
          //X's Turn          
if(turn%2==0){
        cout<<"Player X Turn"<<endl;  
        cout<<"please, Enter the row : "<<endl; cin>>X;
        cout<<"please, Enter the column : "<<endl; cin>>Y;

    if (X>2 || X<0 || Y>2 || Y<0){
          cout<<"invalid try again"<<endl;
    }
        
    else if(TicTacToe[X][Y]!='*'){
          cout<<"invalid try again"<<endl;
    }

    else{

        TicTacToe[X][Y]='X';

        for (int i = 0; i < 3; i++){
          for (int j = 0; j < 3; j++){
            cout<<TicTacToe[i][j]<<"  "; 
            if(j==2)
            cout<<"\n";              
        }
      }

        if(turn==8 && checkWin(TicTacToe,gameOver)==2){
          cout<<"Tie"<<endl;
        }

        else if (checkWin(TicTacToe,gameOver)==0){
        break;
        }
      
        else{
        turn++;
        }  
    }  
  }
  //O's Turn
if(turn%2!=0){
        cout<<"Player O Turn"<<endl;
        cout<<"please, Enter the row : "<<endl; cin>>X;
        cout<<"please, Enter the column : "<<endl; cin>>Y;

        if (X>2 || X<0 || Y>2 || Y<0){
          cout<<"invalid try again"<<endl;
        }

        else if(TicTacToe[X][Y]!='*'){
          cout<<"invalid try again"<<endl;
        }
        
        else{
        TicTacToe[X][Y]='O';
        for (int i = 0; i < 3; i++){
          for (int j = 0; j < 3; j++){
            cout<<TicTacToe[i][j]<<"  ";
            if(j==2)
            cout<<"\n";         
        }
      }

      if(turn==8 && checkWin(TicTacToe,gameOver)==2){
          cout<<"Tie"<<endl;
      }

      else if (checkWin(TicTacToe,gameOver)==1){
        break;
      }
      
      else{
      turn++;
      }
     }   
   }
  }
}
   
return 0;
}
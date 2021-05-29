#include <iostream>
#include "condicoes.h"
#include "apresentacao.h"
using namespace std;
int main(){
    int x;
    int y;
    string matriz[3][3] = { {" ", " ", " "},
     {" ", " ", " "},
     {" "," "," "} };
     int i=1;
     apresentacao(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);
     while(i==1 || i==2){
        x=0;
        y=0;

        if(i==1){
            condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);
            if( condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2])=="O"){
                cout<<"\n\n\nPlayer B winned!"<< endl;
                break;
            }
            if( condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2])=="X"){
                cout<<"\n\n\nPlayer A winned!"<< endl;
                break;
            }
            cout << "\nPlayer A (represents X)"<<endl;
            while(true){
                cout << "Input x: ";
                cin >> x;
                cout << "\nInput y: ";
                cin >> y;
                if(matriz[x][y]=="O" || matriz[x][y]=="X"){
                    cout << "Position already taken. Try again." << endl;
                }
                else{
                    matriz[x][y]="X";
                    break;
                }
            }
            i=2;
            apresentacao(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);
        }
        if(i==2){
            condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);
            if( condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2])=="O"){
                cout<<"\n\n\nPlayer B winned!"<< endl;
                break;
            }
            if( condicoes(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2])=="X"){
                cout<<"\n\n\nPlayer A winned!"<< endl;
                break;
            }
            cout << "\nPlayer B (represents O)"<<endl;
            while(true){
                cout << "Input x: ";
                cin >> x;
                cout << "\nInput y: ";
                cin >> y;
                if(matriz[x][y]=="O" || matriz[x][y]=="X"){
                    cout << "Position already taken. Try again." << endl;
                }
                else{
                    matriz[x][y]="O";
                    break;
                }
            }
            i=2;
            i=1;
            apresentacao(matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);

        }
     }
}

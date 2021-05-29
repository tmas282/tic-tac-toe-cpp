#include <iostream>
using namespace std;
string condicoes(string m1, string m2, string m3, string m4,string m5, string m6, string m7, string m8, string m9){
    //horizontais
    if ((m1=="O" && m2=="O" && m3=="O") || (m4=="O" && m5=="O" && m6=="O") || (m7=="O" && m8=="O" && m9=="O")){
        return "O";
    }
    else if ((m1=="X" && m2=="X" && m3=="X") || (m4=="X" && m5=="X" && m6=="X") || (m7=="X" && m8=="X" && m9=="X")){
        return "X";
    }
    //verticais
    else if ((m1=="O" && m4=="O" && m7=="O") || (m2=="O" && m5=="O" && m8=="O") || (m3=="O" && m6=="O" && m9=="O")){
        return "O";
    }
    else if ((m1=="X" && m4=="X" && m7=="X") || (m2=="X" && m5=="X" && m8=="X") || (m3=="X" && m6=="X" && m9=="X")){
        return "X";
    }
    //diagonais
    else if ((m1=="O" && m5=="O" && m9=="O") || (m3=="O" && m5=="O" && m7=="O")){
        return "O";
    }
    else if ((m1=="X" && m5=="X" && m9=="X") || (m3=="X" && m5=="X" && m7=="X")){
        return "X";
    }
    else{
        return "Nada";
    }
}

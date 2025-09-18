#include <iostream>
using namespace std;

//Oppgave 1
int square(int *x){
    if (x != nullptr){
        return *x = (*x) * (*x);
    }
}

//Oppgave 2
bool isEven(int *x){
    if(x != nullptr){
        return *x % 2 == 0;
    }
}

int main(){
    int a_variabel = 5;
    int b_variabel = 10;

    square(&a_variabel);
    cout << a_variabel << endl;   
}
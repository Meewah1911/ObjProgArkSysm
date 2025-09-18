#include <iostream>
using namespace std;

//Oppgave 1
int square(int *x){
    if (x != nullptr){
        return *x = (*x) * (*x);
    }
    return;
}

//Oppgave 2
bool isEven(int *x){
    if(x != nullptr){
        return *x % 2 == 0;
    }
    return;
}

int main(){
    int a_variabel = 5;
    int b_variabel = 10;

    square(&a_variabel);
    cout << a_variabel << "\n";   

    if (isEven(&b_variabel) == 1){
        cout << b_variabel << " is an even number." << "\n";
    }else{
        cout << b_variabel << "is not an even number." << "\n";
    }

}
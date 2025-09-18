#include <iostream>
using namespace std;

//Oppgave 1
void square(int *x){
    if (x != nullptr){
        *x = (*x) * (*x);
    }
}

int main(){
    int a_variabel = 5;

    square(&a_variabel);
    cout << a_variabel;

}
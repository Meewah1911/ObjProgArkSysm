#include <iostream>
using namespace std;

//Oppgave 1
int square(int *x){
    if (x != nullptr){
        return *x = (*x) * (*x);
    }
    return 0;
}

// Oppgave 2
bool isEven(int *x){
    if(x != nullptr){
        return *x % 2 == 0;
    }
    return 0;
}

//Oppgave 3
void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//Oppgave 4
bool isPrime(int* x){
    int n = 0;
    for(int i = 0; i < *x; i++){
        if (*x % 2 == 0){
            return;
        }
    }
}

int main(){
    int a_variabel = 5;
    int b_variabel = 10;

    // square(&a_variabel);
    // cout << a_variabel << "\n";   

    // if (isEven(&b_variabel) == 1){
    //     cout << b_variabel << " is an even number." << "\n";
    // }else{
    //     cout << b_variabel << "is not an even number." << "\n";
    // }

    cout << "\n" << a_variabel << "\n" << b_variabel << "\n";
    swap(a_variabel, b_variabel);
    cout << a_variabel << "\n" << b_variabel;

    

}
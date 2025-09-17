#include <iostream>
using namespace std;

void oppgave1(){
    cout << "Oppgave 1" << endl << endl;
    int arr[5] = {10, 20, 30, 40, 50};

    int* p_arr = arr;

    for (size_t i = 0; i < size(arr); i++){
        cout << p_arr[i] << endl;
    } 
}

void oppgave2(){
    cout << endl << "Oppgave 2" << endl << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    int *p_left = nullptr;
    int *p_right = nullptr;
    int temp;

    p_left = arr;
    temp = *p_left;
    p_right = &arr[size(arr) - 1];

    
    while(p_left < p_right){
        p_left = arr;
        temp = *p_left;
        p_right = &arr[size(arr) - 1];
        
        cout << *p_left << "  " << *p_right << endl;

        *p_left = *p_right;
        *p_right = temp;

        cout << *p_left << "  " << *p_right;

        ++p_left;
        --p_right;
    }
}

void oppgave3(){
    cout << endl << "Oppgave 3" << endl << endl;

    string a_input;
    cout << "Skriv inn ett ord: " << endl << "> ";
    cin >> a_input;
    char bokstaver;
    int teller = 0;

    char vokaler[12]{'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    for (size_t i = 0; i < size(a_input); i++)
    {
        bokstaver = a_input[i];
        for (size_t ite = 0; ite < sizeof(vokaler)/sizeof(vokaler[0]); ite++){
            if (bokstaver == vokaler[ite]){
                teller++;
            }
        }
    }
    cout << teller;
}

void oppgave4(){
    cout << endl << "Oppgave 4" << endl << endl;
    
    int temp = 0;
    int arr[7]{1,5,58,9,2,5,24};
    for (size_t i = 0; i < size(arr); i++)
    {
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    cout << "Den største verdien i arrayet er: " << temp << ".";
}

void oppgave5(int* arr, int isize){
    //Skrive et program som sorterer et integer array
    for (int i = 0; i < isize; i++){
        for (int j = i+1;j < isize; j++){
            int* left = arr + i;
            int* right = arr + j;

            if(arr[i] > arr[j]){
                int temp = arr[i];
                *left = *right;
                *right = temp;
            }
        }
    }
    
}

int main(){
    int arr[6]{1,58,9,2,5,24};
    //oppgave1();
    //oppgave2();
    //oppgave3();
    //oppgave4();
    oppgave5(arr, sizeof(arr)/sizeof(arr[0]));

    for (size_t i = 0; i < 6; i++)
    {
        cout << arr[i] << "\n";
    }
    
}
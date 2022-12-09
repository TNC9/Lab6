#include<iostream>
using namespace std;

int main(){
    int integer = 1 ,Evennumbers = 0 ,Oddnumbers = 0;
    
    if (integer != 0){
        while (integer != 0){
            cout << "Enter an integer: ";
            cin >> integer;

            if(integer%2 == 0){
                Evennumbers++;
            }else{
                Oddnumbers++;
            }
        }
    }
    
    cout << "#Even numbers = " << Evennumbers-1 << "\n";
    cout << "#Odd numbers = " << Oddnumbers;
    return 0;
}

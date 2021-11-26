#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int x = 0;
    int number;
        cout << "Enter an integer: ";
        cin >> number;
    while(number != 0){
        if (number%2 == 0){
            i = i + 1;
        }
        else { 
            x = x + 1;

        }
        cout << "Enter an integer: ";
        cin >> number;       
    }
         cout << "#Even numbers = " << i << endl;
      
        cout << "#Odd numbers = " << x;
    return 0;
}

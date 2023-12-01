#include<iostream>
using namespace std;

int main(){
    int num, odd = 0, even = -1;
    while ( num != 0) { 
    cout << "Enter an integer: ";
    cin >> num;
    if (num%2 == 0){
        even = even + 1;
    } else {
        odd = odd + 1;
    }
    }
    cout << "#Even numbers = " << even;
    cout << "\n#Odd numbers = " << odd;
    return 0;
}

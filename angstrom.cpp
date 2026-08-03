#include<iostream>
using namespace std;
int main(){
    cout << "enter your number to check if armstrong: ";
    int num, digit[10];
    cin >> num;
    for(int i = 0; i < 10; i++){
        digit[i] = num%10;
        num /= 10;
    }
    
}
// array use switch case to perform insert, update, delete. use do while loop to perform the operations until i = 5 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element at position " << i+1 << ": ";
        cin >> a[i];
    }
}
// declare an arrey then put an input as a size of an arrey then use a for loop to fill the arrey and the find the sum and avg of the numbers  
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
        
    }

    double avg = static_cast<double>(sum) / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
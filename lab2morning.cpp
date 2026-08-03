include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    double a[n];
    double sum=0.0;

    for(int i=0 ; i<n ; i++ )
    {
        cout << "Enter the element at position" << i+1 << ": " ;
        cin >> a[i];
        sum += a[i];
    }

    cout << "Avg of elements of the array: " << sum/n ;
}

int main()
{
    
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int position, value;

    for(int i=0 ; i<n ; i++ )
    {
        cout << "Enter the element at position" << i+1 << ": " ;
    }

    cout << "Menu" << endl << "1. Insert Element" << endl << "2. Update Element" << endl << "3. Delete Element" << endl << "4. Display Array";
    
    
    update delete display exit


    cout << "Enter position (1 to " << n << "): ";
    cin >> position;

    n++;
    if (position < 1 || position > n)
    {
        cout << "Position out of range";
    }
    else
    {
        cout << "Value to insert: ";
        cin >> value;

        for (int i=n-1 ; i>=position ; i--)
        {
            a[i] = a[i - 1];
        }
    }

    a[position - 1] = value;
    
    cout << "Element inserted" << endl;
    for( int ele : a)
    {
        cout << ele << " ";
    }
}

int main()
{
    int n;
    int position, value;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    

    for(int i=0 ; i<n ; i++ )
    {
        cout << "Enter the element at position" << i+1 << ": " ;
    }
    
    cout << "enter position to be updated";
    cin >> position;
    cout << "enter value";
    cin >> value;

    if (position < 1 || position > n)
    {
        cout << "Position out of range";
    }
    else
    {
        a[position] = value;
    }
    
    cout << "Element Updated" << endl;
    for( int ele : a)
    {
        cout << ele << " ";
    }
}

int main()
{
    int n=5;
    int a[]={10,20, 30, 40, 50};
    int position;

    cout << "Enter position (1 to " << n << "): ";
    cin >> position;

    n++;
    if (position < 1 || position > n)
    {
        cout << "Position out of range";
    }
    else
    {
        for (int i = position-1 ; i <= n-1 ; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }
    
}

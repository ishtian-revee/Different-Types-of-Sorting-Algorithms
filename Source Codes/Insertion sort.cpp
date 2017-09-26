#include<iostream>

using namespace std;

int main()
{
    int arr[10000] , n , key;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    cout << endl << "Enter the elements of the array : " << endl;
    for( int i=0; i<n; i++ ){

        cin >> arr[i];
    }

    for( int i=2; i<n; i++ ){

        key = arr[i];
        int j = i-1;

        while( j>0 && arr[j] > key ){

            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    cout << endl << "After insertion sort : " << endl << endl;
    for( int i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }
}

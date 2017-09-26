#include<iostream>

using namespace std;

int main()
{
    int arr[10000] , n , key , temp;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    cout << endl << "enter the elements of the array : " << endl;
    for( int i=0; i<n; i++ ){

        cin >> arr[i];
    }

    for( int i=0; i<n; i++ ){

        key = i;

        for( int j=i+1; j<n; j++ ){

            if( arr[j] < arr[key] ){

                key = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }

    cout << endl << "After selection sort : " << endl;
    for( int i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }
}

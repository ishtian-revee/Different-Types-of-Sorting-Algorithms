#include<iostream>

using namespace std;

int main()
{
    int arr[] = { 22 , 11 , 44 , 33 , 40 , 30 };
    int n , i , j , temp;

    n = sizeof(arr)/sizeof(int);

    cout << endl << "The elements of the array : ";

    for( i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }

    for( i=0; i<n; i++ ){

        for( j=0; j<n-i-1; j++ ){

            if( arr[j] > arr[j+1] ){

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << endl << endl << "After bubble sort : ";

    for( i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }

    cout << endl;
}

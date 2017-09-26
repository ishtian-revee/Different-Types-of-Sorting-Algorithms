#include<iostream>

using namespace std;

void quickSort( int *a , int start , int end );
int partition( int *a , int start , int end );

int main()
{
    int arr[10000] , n;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    cout << endl << "Enter the elements of the array : " << endl << endl;
    for( int i=0; i<n; i++ ){

        cin >> arr[i];
    }

    quickSort(arr , 0 , n);

    cout << endl << "After quick sort : " << endl << endl;
    for( int i=1; i<=n; i++ ){

        cout << arr[i] << " ";
    }

    cout << endl;
}

void quickSort( int *a , int start , int end ){

    if( start < end ){

        int p = partition(a , start , end);
        quickSort(a , start , p-1);
        quickSort(a , p+1 , end);
    }
}

int partition( int *a , int start , int end ){

    int pivot = a[end];
    int pIndex = start;

    for( int i=start; i<end; i++ ){

        if( a[i] <= pivot ){

            swap(a[i] , a[pIndex]);
            pIndex++;
        }
    }

    swap(a[pIndex] , a[end]);
    return pIndex;
}

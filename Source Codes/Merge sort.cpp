#include<iostream>
#include<stdlib.h>

using namespace std;

void mergeSort( int *a , int n );
void merge( int *l , int *r , int *a , int nL , int nR );

int main()
{
    int arr[10000] , n;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    cout << endl << "Enter the elements of the array : ";
    for( int i=0; i<n; i++ ){

        cin >> arr[i];
    }

    mergeSort(arr , n);

    cout << endl << "After merge sort : " << endl << endl;
    for( int i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }

    cout << endl;
}

void mergeSort( int *a , int n ){

    if( n<2 ){

        return;
    }else{

        int mid = n/2;
        int left[mid] , right[n-mid];

        for( int i=0; i<mid; i++ ){

            left[i] = a[i];
        }

        for( int i=mid; i<n; i++ ){

            right[i-mid] = a[i];
        }

        mergeSort(left , mid);
        mergeSort(right , n-mid);
        merge(left , right , a , mid , n-mid);
        free(left);
        free(right);
    }
}

void merge( int *l , int *r , int *a , int nL , int nR ){

    int i = 0 , j = 0 , k = 0;

    while( i<nL && j<nR ){

        if( l[i] <= r[j] ){

            a[k] = l[i];
            k++;
            i++;
        }else{

            a[k] = r[j];
            k++;
            j++;
        }
    }

    while( i<nL ){

        a[k] = l[i];
        k++;
        i++;
    }

    while( j<nR ){

        a[k] = r[j];
        k++;
        j++;
    }
}

#include<iostream>

using namespace std;

int main()
{
    int a[10000] , c[10000] , b[10000];
    int n , k;

    cout << endl << "Enter the size of the array : ";
    cin >> n;

    cout << endl << "Enter the elements : " << endl << endl;
    for( int i=0; i<n; i++ ){

        cin >> a[i];
    }

    k = a[0];

    for( int i=1; i<n; i++ ){

        if( a[i] > k ){

            k = a[i];
        }
    }

    for( int i=0; i<=k; i++ ){

        c[i] = 0;
    }

    for( int i=0; i<n; i++ ){

        c[a[i]]++;
    }

    for( int i=1; i<=k; i++ ){

        c[i] = c[i] + c[i-1];
    }

    for( int i=n-1; i>=0; i-- ){

        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }

    cout << endl << "After counting sort : " << endl << endl;
    for( int i=0; i<n; i++ ){

        cout << b[i] << " ";
    }

    cout << endl;
}

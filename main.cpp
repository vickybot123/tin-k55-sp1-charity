#include <iostream>
#include "arrays.h"

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n] = {0};

    for( int i=0; i<m; i++)
    {
        int index, given;
        cin >> index >> given;
        arr[index - 1] += given;
    }

    cout << "array: ";
    arrays::printIntArray(arr, n);
    cout << endl;

    int maxIndex = arrays::maxIndexIntArray(arr, n);
    cout << "found greatest charity cow: " << maxIndex + 1 << " given " << arr[maxIndex] << "l" << endl;
}

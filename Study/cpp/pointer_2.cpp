//
// Created by prome on 24. 5. 7.
//

#include <iostream>
using namespace std;

int product(int size, const int * arr)
{
    int result = 1;
    for(int i = 0; i < size; i++)
    {
        result = result * arr[i];
    }
    return result;
}

int main()
{
    int size;
    int *arr = new int[size];
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int result = product(size, arr);
    cout << result;

    delete[] arr;
    return 0;
}
//
// Created by 장준영 on 4/28/24.
//

#include

using namespace std;

int main()
{
    double wagePerHour = 0.0;
    int size = 0;
    cin >> size >> wagePerHour;

    double *doublePointer = &wagePerHour;
    arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = i * *doublePointer;
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
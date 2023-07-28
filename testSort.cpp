#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char **argv)
{
    // selection
    int arr[10] = {8, 2, 9, 4, 1, 8, 3, 6, 5, 1};
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int a, b;
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i += 1)
    {
        a = arr[i];
        for (int j = i; j < sizeof arr / sizeof arr[0]; j += 1)
        {
            if (arr[j] <= a)
            {
                a = arr[j];
                b = j;
            }
        }
        swap(arr[i], arr[b]);
    }
    // swap(arr[4], arr[5]);
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i += 1)
    {
        cout << arr[i] << " ";
    }
}

#include <iostream>

using namespace std;

const int ArraySize = 8;

int sum_arr(int *begin, int *end);

int main(int argc, char const *argv[])
{
    int arr[ArraySize] = {1, 2, 3, 4, 5};
    cout << "arr sum is:" << sum_arr(arr, (arr + ArraySize));
    return 0;
}

int sum_arr(int *begin, int *end)
{
    const int *p;
    int total = 0;
    for (p = begin; p != end; p++)
    {
        total += *p;
    }
    return total;
}

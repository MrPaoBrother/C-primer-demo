#include <iostream>
#include <string>

using namespace std;

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);

template <typename T>
void Show(const T *a);

const int Limit = 3;

int main(void)
{
    int a = 1;
    int b = 2;
    Swap(a, b);
    cout << "a:" << a << " b:" << b << endl;

    string a_str = "hello world";
    string b_str = "hehe";
    Swap(a_str, b_str);
    cout << "a_str:" << a_str << endl
         << "b_str:" << b_str << endl;

    int arr_int[Limit] = {1, 2, 3};
    int arr_int2[Limit] = {4, 5, 6};
    Swap(arr_int, arr_int2, Limit);

    Show(arr_int);
    Show(arr_int2);
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template <typename T>
void Show(const T *a)
{
    for (int i = 0; i < Limit; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
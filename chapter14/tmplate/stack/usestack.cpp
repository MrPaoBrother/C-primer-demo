#include <string>
#include "stack.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
// template <typename T>
// void ShowAll(Stack<T> &);

int main(int argc, char const *argv[])
{
    // Stack<string> s;
    // s.push("hello world");
    Stack<int> s_int;
    int a;
    cin >> a;
    s_int.push(a);
    // ShowAll(s);

    // string c = "";
    // for (int i = 0; i < 15; i++)
    // {
    //     c += "=";
    //     s.push(c);
    // }
    // ShowAll(s);
    return 0;
}

// template <typename T>
// void ShowAll(Stack<T> &stack)
// {
//     while (!stack.isempty())
//     {
//         /* code */
//         T item;
//         item = stack.pop(item);
//         cout << item << endl;
//     }
//     cout << "END" << endl;
// }
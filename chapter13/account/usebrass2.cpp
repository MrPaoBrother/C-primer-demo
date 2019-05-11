#include "brass.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;

const int CLIENTS = 2;

int main(void)
{
    string username;
    double balance;
    unsigned long accnum;
    char kind;
    Brass *p[CLIENTS];
    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter your person" << i + 1 << "'s usernmae:";
        getline(cin, username);
        cout << "Enter your accnum:";
        cin >> accnum;
        cout << endl;
        cout << "Enter balance:";
        cin >> balance;
        cout << endl;

        cout << "Enter 1 brass or 2 brassplus:";
        while (cin >> kind && (kind != '1' && kind != '2'))
        {
            /* code */
            cout << "enter must be 1 or 2" << endl;
        }

        if (kind == '1')
        {
            p[i] = new Brass(username, accnum, balance);
        }
        else
        {
            p[i] = new BrassPlus(username, accnum, balance);
        }

        while (cin.get() != '\n')
        {
            /* code */
            continue;
        }
    }

    for (int j = 0; j < CLIENTS; j++)
    {
        p[j]->ShowAcc();
    }

    for (int k = 0; k < CLIENTS; k++)
    {
        delete p[k];
    }

    cout << "Done" << endl;
}
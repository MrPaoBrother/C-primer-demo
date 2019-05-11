#include "account.h"

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
    BaseAccount *p[CLIENTS];
    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter your person" << i + 1 << "'s usernmae:";
        getline(cin, username);
        cout << "Enter your accnum:";
        cin >> accnum;
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
            p[i] = new Account(username, accnum, balance);
        }
        else
        {
            p[i] = new AccountOwn(username, accnum, balance);
        }

        while (cin.get() != '\n')
        {
            /* code */
            continue;
        }
    }

    for (int j = 0; j < CLIENTS; j++)
    {
        p[j]->show_account_detail();
    }

    cout << endl
         << "================ Testing ================" << endl
         << endl;
    // 测试
    p[0]->deposit(500);
    p[0]->withdraw(1000);
    p[0]->show_account_detail();

    p[1]->deposit(1000);
    p[1]->withdraw(2000);
    p[1]->show_account_detail();

    for (int k = 0; k < CLIENTS; k++)
    {
        delete p[k];
    }

    cout << "====\tDone\t ====" << endl;
}
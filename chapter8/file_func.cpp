#include <iostream>
#include <fstream>

using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);

const int LIMIT = 5;

int main(void)
{
    ofstream fout;
    const char *fn = "./data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "open file failed" << endl;
        exit(EXIT_FAILURE);
    }
    double fo = 100.0;
    double eps[LIMIT] = {1, 2, 3, 4, 5};

    file_it(fout, fo, eps, LIMIT);
    file_it(cout, fo, eps, LIMIT);

    return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);

    os.precision(0);
    os.setf(ios::showpoint);
    os.precision(1);

    os.width(12);
    os << "f.1. eyepieces:";
    os.width(15);

    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo / fe[i] + 0.5) << endl;
    }

    os.setf(initial);
}
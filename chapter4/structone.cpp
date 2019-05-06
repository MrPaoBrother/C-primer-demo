#include <iostream>
#include <string>

using namespace std;

struct Student
{
    /* data */
    char name[20];
    int score;
    string desciption;
};

union Score {
    /* data */
    int int_score;
    double double_score;
};

int main(int argc, char const *argv[])
{
    Student s1 = {
        "power",
        100,
        "死读书的学生"};

    cout << "name:" << s1.name << "score:" << s1.score << "描述:" << s1.desciption << endl;

    Score sc1;
    sc1.int_score = 100;
    cout << "sc1:" << sc1.int_score << endl;
    sc1.double_score = 100.0;
    cout << "sc1:" << sc1.double_score << endl;
    cout << "sc1_int:" << sc1.int_score << endl;
    return 0;
}

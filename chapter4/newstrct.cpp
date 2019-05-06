#include <iostream>

using namespace std;

struct Student
{
    /* data */
    char name[20];
    int score;
};

int main(void)
{
    Student *s1 = new Student;
    cout << "input student1's name:____\b\b\b";
    cin >> s1->name;
    cout << "input stdent1's score:____\b\b\b\b";
    cin >> (*s1).score;

    cout << "==================result=================="<<endl;
    cout << "name:" << (*s1).name << endl << "score:" << s1->score <<endl;

    delete s1;
    return 0;
}

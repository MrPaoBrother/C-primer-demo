#include "student.h"
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

void set(Student &, int);
const int pupils = 3;
const int course_count = 5;

int main(void)
{
    // 初始化随机数
    srand(time(0));
    Student students[pupils] = {
        Student(course_count),
        Student(course_count),
        Student(course_count)};

    for (int i = 0; i < pupils; i++)
    {
        set(students[i], course_count);
    }

    for (int i = 0; i < pupils; i++)
    {
        cout << students[i] << endl;
        cout << "average:" << students[i].average() << endl;
    }
}

void set(Student &stu, int n)
{
    cout << "Enter student's name:";
    getline(cin, stu);
    for (int i = 0; i < n; i++)
    {
        stu[i] = rand() % 100 + 1;
    }
}
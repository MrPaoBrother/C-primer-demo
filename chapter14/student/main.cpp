#include "student.h"
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void set(Student &stu, int n);

const int pupils = 3;
const int course_num = 5;

int main(void)
{
    srand(time(0));
    Student students[pupils] = {
        Student(course_num),
        Student(course_num),
        Student(course_num)};
    for (int i = 0; i < pupils; i++)
    {
        set(students[i], course_num);
    }
    cout << "================== output =================" << endl;
    for (int i = 0; i < pupils; i++)
    {
        cout << students[i] << endl;
        cout << "Average is:" << students[i].Average() << endl;
    }
}

void set(Student &stu, int n)
{
    cout << "Enter student's name:";
    getline(cin, stu);
    // 随机给学生成绩
    for (int i = 0; i < n; i++)
    {
        stu[i] = rand() % 100;
    }
}
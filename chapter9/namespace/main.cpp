#include <iostream>
#include "namesp.h"

const int max_stu_nums = 10;

using namespace std;
using sch::School;
using sch::ShowAllStudents;
using sch::Student;

School *AddStudents(Student *stus);
Student *GetStudents();

int main(int argc, char const *argv[])
{
    Student *stu = GetStudents();
    // cout << stu[2].name << " " << stu[2].score << endl;
    School *school = AddStudents(stu);

    ShowAllStudents(school);

    delete[] stu;
    delete school;
    return 0;
}

School *AddStudents(Student *stus)
{
    int total = 0;
    School *sc = new School;
    sc->stu_nums = max_stu_nums;
    sc->s = stus;
    return sc;
}

Student *GetStudents()
{
    // 构造几个学生
    Student *stus = new Student[max_stu_nums];
    for (int i = 0; i < max_stu_nums; i++)
    {
        string name = "power" + to_string(i);
        stus[i] = Student{
            name,
            i + 0.5};
    }
    return stus;
}

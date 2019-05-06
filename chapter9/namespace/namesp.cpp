#include <iostream>
#include "namesp.h"

using namespace std;

namespace stu
{
void ShowStudent(Student *s)
{
    cout << "student's name: " << (*s).name << "\t student's score:" << (*s).score << endl;
}
} // namespace stu

namespace sch
{
void ShowAllStudents(School *s)
{
    for (int i = 0; i < (*s).stu_nums; i++)
    {
        Student stu_temp = (*s).s[i];
        ShowStudent(&stu_temp);
    }
    cout << "there are :" << s->stu_nums << " stdents in our school!";
}

void AddStudent(School *school, Student *student)
{
    school->s[school->stu_nums] = *student;
    school->stu_nums++;
}
} // namespace sch
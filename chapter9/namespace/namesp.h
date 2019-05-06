#include<string>

namespace stu{
    using std::string;

    struct Student{
        string name;
        double score;
    };
    void ShowStudent(Student *s);
}

namespace sch{
    using std::string;
    using namespace stu;
    struct School
    {
        /* data */
        Student *s;
        int stu_nums;
    };

    void ShowAllStudents(School *s);
    void AddStudent(Student *s, Student *student);
}
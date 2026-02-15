#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
public:
    Student(string nimi,int ika);
    void setAge(int ika);
    void setName(string nimi);
    string getName();
    int getAge();
    void printStudentInfo();
private:
    string Name;
    int Age;
};

#endif // STUDENT_H

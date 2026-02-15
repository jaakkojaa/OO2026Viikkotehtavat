#include "student.h"
#include <iostream>

Student::Student(string nimi, int ika)
{
    Name = nimi;
    Age = ika;
}

void Student::setAge(int ika)
{
    Age = ika;
}

void Student::setName(string nimi)
{
    Name = nimi;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Oppilas " <<Name << " ika: " <<Age <<endl;
}

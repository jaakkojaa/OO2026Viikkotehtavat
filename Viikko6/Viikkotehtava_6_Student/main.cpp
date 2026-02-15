#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string name;
            int age;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Student name ?" <<endl;
            cin >> name;
            cout << "Student age ?" <<endl;
            cin >> age;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(name,age));
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){return a.getName() > b.getName();}); //Käytin tässä Lambdaa mitä käytiin luennolla läpi.
            cout << "Students jarjestyksessa:" << endl;
            for (Student& s : studentList)
                s.printStudentInfo();
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){return a.getAge() < b.getAge();}); //Tässä myös lambda-funktio
            cout << "Students ikajarjestyksessa:" << endl;
            for (Student& s : studentList)
                s.printStudentInfo();
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string name;
            cout << "Etsittavan opiskelijan nimi? " << endl;
            cin >> name;
            auto it = find_if(studentList.begin(), studentList.end(), [&](Student& s) {return s.getName() == name;}); //Kolmas lambda
            if (it != studentList.end())
            {
                cout << "Opiskelija loytyi:" << endl;
                it->printStudentInfo();
            }
            else
            {
                cout << "Opiskelijaa ei loytynyt." << endl;
            }
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }
    while (selection < 5);
return 0;
}

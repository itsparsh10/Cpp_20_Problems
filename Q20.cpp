// program to manage grades of students in a classroom
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    char grades, grade[5];
    int sum = 0, avg = 0, n, marks[5];

public:
    Student()
    {
        cout << "Enter name of student: ";
        getline(cin, name);
    }
    void addGrade()
    {
        cout << "Enter number of subjects: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter " << i + 1 << " subject's grade(A,B,C,D,E,F): ";
            cin >> grade[i];
        }
    }
    void averageGrade()
    {
        for (int i = 0; i < n; i++)
        {
            if (tolower(grade[i]) == 'a')
            {
                marks[i] = 100;
            }
            else if (tolower(grade[i]) == 'b')
            {
                marks[i] = 90;
            }
            else if (tolower(grade[i]) == 'c')
            {
                marks[i] = 80;
            }
            else if (tolower(grade[i]) == 'd')
            {
                marks[i] = 70;
            }
            else if (tolower(grade[i]) == 'e')
            {
                marks[i] = 60;
            }
            else
            {
                marks[i] = 50;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += marks[i];
        }
        avg = sum / n;
        if (avg > 90)
        {
            grades = 'A';
        }
        else if (avg > 80 && avg <= 90)
        {
            grades = 'B';
        }
        else if (avg > 70 && avg <= 80)
        {
            grades = 'C';
        }
        else if (avg > 60 && avg <= 70)
        {
            grades = 'D';
        }
        else if (avg > 50 && avg <= 60)
        {
            grades = 'E';
        }
        else
        {
            grades = 'F';
        }
    }
    void showDetails()
    {
        cout << endl
             << "Name of Student: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < n; i++)
        {
            cout << (char)toupper(grade[i]) << " ";
        }
        cout << endl
             << "Average grade: " << grades << endl;
    }
    ~Student()
    {
        cout << "Destructor is called." << endl;
    }
};

int main()
{
    Student s1;
    s1.addGrade();
    s1.averageGrade();
    s1.showDetails();
    return 0;
}
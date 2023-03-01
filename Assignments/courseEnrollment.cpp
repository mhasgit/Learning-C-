#include <iostream>
using namespace std;
#define N 50 // Max student strength

class course
{
    string courseName;
    string studNames[N];
    int strength = 0;

public:
    void setCourseName(string cname) // mutator
    {
        courseName = cname;
    }

    string getCourseName() const // Accessor
    {
        return courseName;
    }

    void enrollStudent(string newStud)
    {
        if (strength == N)
        {
            cout << "Can't Add more Students" << endl;
        }
        else
        {
            studNames[strength] = newStud;
            strength++;
            cout << "1 student added" << endl;
            cout << "currenttly there is/are " << strength << " student(s)" << endl;
        }
    }

    void showStudentList()
    {
        cout << "Student List:" << endl;
        for (int i = 0; i < strength; i++)
        {
            cout << studNames[i] << endl;
        }
    }

    void deleteStudent(string name)
    {
        int found = -1;
        for (int i = 0; i < N; i++)

        {
            if (studNames[i].compare(name) == 0)
            {
                found = i;
            }
        }
        if (found == -1)
        {

            cout << "Student " << name << " does not exist" << endl;
        }
        else
        {
            for (int j = found; j < strength; j++)
            {
                studNames[j] = studNames[j + 1];
            }

            studNames[strength - 1] = "";
        }
    }
};

int main()
{

    course c1, c2;
    cout << "**********************************************" << endl;

    c1.setCourseName("cs103 object oriented programming");
    cout << c1.getCourseName() << endl;

    c1.enrollStudent("John");
    c1.enrollStudent("Samatha");
    c1.enrollStudent("Clara");
    c1.showStudentList();

    cout << "**********************************************" << endl;

    c2.setCourseName("cs102 object oriented programming");
    cout << c2.getCourseName() << endl;

    c2.enrollStudent("Hassan");
    c2.enrollStudent("Ashraf");
    c2.enrollStudent("Rasheed");
    c2.enrollStudent("Riaz");
    c2.enrollStudent("Mubashir");
    c2.enrollStudent("Sheraz");
    c2.enrollStudent("Hamza");
    c2.showStudentList();

    cout << "**********************************************" << endl;
    c2.deleteStudent("Shesdraz");
    c2.deleteStudent("Riaz");
    cout << "New ";
    c2.showStudentList();

    cout << "**********************************************" << endl;

    return 0;
}

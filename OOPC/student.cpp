// Class ma apiyo to eee program

// 1.Define a class named student having data members Name, age, gender and
// various overloaded constructors for accepting the detail of the student as well as
// member functions for displaying the information of the students. Your program
// should also have a member function for accepting the student detail.

#include <iostream>
#include <string.h>
using namespace std;
class student
{

    char name[10] = "", gender[10] = "";
    int age = 0;

public:
    student()
    {
    }
    student(char a[], int b, char c[])
    {
        strcpy(name, a);
        age = b;
        strcpy(gender, c);
    }
    student(char a[])
    {
        strcpy(name, a);
    }
    student(char a[], int b)
    {
        strcpy(name, a);
        age = b;
    }

    void display()
    {
        cout << "\nName = " << name << "\nAge = " << age << "\ngender = " << gender;
    }
    void getData()
    {
        cout << "Enter Name, Age, and Gender : ";
        cin >> name >> age >> gender;
    }
};
int main()
{
    student s1, s2("Jay"), s3("Jay", 19), s4("Jay", 19, "Male");
    system("cls");
    s1.getData();
    cout << "\n--- S1 --- ";
    s1.display();
    cout << "\n\n--- S2 --- ";
    s2.display();
    cout << "\n\n--- S3 --- ";
    s3.display();
    cout << "\n\n--- S4 --- ";
    s4.display();

    return 0;
}

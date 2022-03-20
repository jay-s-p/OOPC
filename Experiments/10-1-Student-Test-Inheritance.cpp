// 10.1 Create a Class “Student” containing std_rno and std_name as data
// members. Also create functions to fetch values inside this variable and
// print them. Inherit this class inside new class “Test”. Test class should
// contain sub1 and sub2 as data members. Also create suitable functions
// inside this class to fetch and display them. Create object of Test and
// access all the functions of student and test classes.
#include <iostream>
using namespace std;
class Student
{
    int std_rno;
    string std_name;

public:
    Student() {}
    void getStudentData()
    {
        cout << "\nEnter Name and Roll no. : ";
        cin >> std_name >> std_rno;
    }
    void putStudentData()
    {
        cout << "\nName     = " << std_name
             << "\nRoll no. = " << std_rno;
    }
};
class Test : public Student
{
    int sub1, sub2;

public:
    void getTestData()
    {
        cout << "\nEnter marks of sub1 & sub2 : ";
        cin >> sub1 >> sub2;
    }
    void putData()
    {
        cout << "\nSub1     = " << sub1
             << "\nSub2     = " << sub2;
    }
};
main()
{
    Test t1;
    t1.getStudentData();
    t1.getTestData();
    t1.putStudentData();
    t1.putData();
}
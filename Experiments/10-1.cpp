// 10.1 Create a Class “Student” containing std_rno and std_name as data
// members. Also create functions to fetch values inside this variable and
// print them. Inherit this class inside new class “Test”. Test class should
// contain sub1 and sub2 as data members. Also create suitable functions
// inside this class to fetch and display them. Create object of Test and
// access all the functions of student and test classes
#include <iostream>
#include <string>
using namespace std;
class Student
{
    string std_name;
    int std_rno;

public:
    Student(){}
    // Student(string s, int r):std_name(s),std_rno(r){}
    void getStudentData()
    {
        cout << "\nEnter name and roll no. :";
        cin >> std_name >> std_rno;
    }
    void putData()
    {
        cout << "\nName     = " << std_name 
             << "\nRoll no  = " << std_rno;
    }
};
class Test : public Student
{
    int sub1, sub2;

public:
    Test(){
        getStudentData();
        cout << "\nEnter marks of sub1 & sub2 : ";
        cin >> sub1 >> sub2;
    }
    // Test(string s,int r,int a, int b){
    //     Student(s,r);
    //     sub1 = a; sub2 = b;
    // }
    void putData()
    {
        Student::putData();
        cout << "\nSub1 = " << sub1
             << "\nSub2 = " << sub2;
    }
};
main()
{
    Test t1;
    t1.putData();
}
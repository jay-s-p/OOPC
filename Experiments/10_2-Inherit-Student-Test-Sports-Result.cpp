// 10.2 Write a program to implement inheritance structure shown below. Class
// “Student” and “Test” should be defined as in above practical. Class
// “Sports” should contain data member score and functions for accessing it.
// Class “Result” should contain function to calculate average score of sub1,
// sub2 and score and function to display the average value.
#include <iostream>
using namespace std;
class Student
{
    string name;

public:
    void getStudentData()
    {
        cout << "\nEnter name : ";
        cin >> name;
    }
    void printStudentData()
    {
        cout << "\nName     = " << name;
    }
};
class Test : virtual public Student
{
protected:
    int sub1, sub2;

public:
    void getTestData()
    {
        cout << "\nEnter marks of sub1 and sub2 : ";
        cin >> sub1 >> sub2;
    }
    void printTestData()
    {
        cout << "\nSub1     = " << sub1
             << "\nSub2     = " << sub2;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void getSportData()
    {
        cout << "\nEnter Score : ";
        cin >> score;
    }
    void printSportData()
    {
        cout << "\nScore    = " << score;
    }
};
class Result : public Test, public Sports
{
    int avg;

public:
    void getData()
    {
        getStudentData();
        getTestData();
        getSportData();
    }
    void printData()
    {
        printStudentData();
        printTestData();
        printSportData();
    }
    void getAverage()
    {
        avg = (sub1 + sub2 + score) / 3;
        cout << "\nAverage :- " << avg;
    }
};
main()
{
    Result r;
    r.getData();
    r.printData();
    r.getAverage();
}
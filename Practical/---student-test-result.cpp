// Student vado program
#include<iostream>
#include<string>
using namespace std;
class Student
{
    int rollNo;
    string name;
    public:
        void getData()
        {
            cout << "Enter name & roll no : ";
            cin >> name >> rollNo;
        }
};
class Test
{
    protected:
    float marks[5];
    public:
        void getMarksData()
        {
            cout << "Enter marks : ";
            for (int i = 0; i < 5; i++)
            {
                cin >> marks[i];
            }
        }
};
class Result : public Student, public Test
{
    public:
        int sum,per;
        void getResult()
        {
            getData();
            getMarksData();
            for(int i = 0; i < 5; i++)
            {
                sum = sum + marks[i];
            }
            per = sum / 5;
            cout << "Total marks    : " << sum << endl
                 << "Percentage     : " << per;
        }
};
main()
{
    Result r;
    r.getResult();
}

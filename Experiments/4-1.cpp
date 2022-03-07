// 4.1 Define a Class “Student” having data members as roll_no, std_name and
// std_marks of 3 subjects and member functions as get_data(), put_data()
// and find_spi(). Write a program to get information of 3 student and find
// and display the spi of that student
#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll_no;
    float std_marks[3];
    string std_name;

public:
    void get_data()
    {
        cout << "\nEnter name : ";
        cin >> std_name;
        cout << "\nEnter roll no. : ";
        cin >> roll_no;
        cout << "\nEnter marks of 3 subjects : ";
        cin >> std_marks[0] >> std_marks[1] >> std_marks[2];
    }
    void put_data()
    {
        cout << "\nName     = "<<std_name;
        cout << "\nRoll no. = "<<roll_no;
        find_spi();
    }
    void find_spi()
    {
        // May be formula wrong... I didn't reseach on that much...
        float spi = (std_marks[0] + std_marks[1] + std_marks[2])/30;
        cout << "\nSPI      = " << spi;
    }
};
main()
{
    Student s1, s2, s3;
    s1.get_data();
    s2.get_data();
    s3.get_data();
    s1.put_data();
    s2.put_data();
    s3.put_data();
}
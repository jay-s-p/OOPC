#include<iostream>
using namespace std;

class Human{
    char name[20];
    int age;
    public:
    void getData(){
        cout<<"Enter Name and Age = ";
        cin>>name;
        cin>>age;
    }
    void putData(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age  = "<<age;
    }
};

main(){
    Human human;
    human.getData();
    human.putData();
}
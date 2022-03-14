#include<iostream>
#include<iomanip>
using namespace std;
class demo{
	int a , b;
	public:
		void getdata(int a , int b)
        {
			this->a=a;
			this->b=b;
			
		}
		void print(){
			cout<< a << ends << b ;
		}
};
main(){
	demo a ;
	a.getdata(2, 3);
	a.print();
}
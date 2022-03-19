#include <iostream>
using namespace std;
class Demo
{
	int a, b;

public:
	void getdata(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void print()
	{
		cout << "a : " << a << "\nb : " << b;
	}
};
main()
{
	Demo d;
	d.getdata(2, 3);
	d.print();
}
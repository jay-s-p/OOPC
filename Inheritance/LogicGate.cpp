#include <iostream>
using namespace std;
class LogicGate
{
protected:
    int inp1, inp2, inp3;

public:
    void getData()
    {
        cout << "\n\nEnter inputs : ";
        cin >> inp1 >> inp2 >> inp3;
    }
    virtual void get_gate_output() = 0;
};
class AND : public LogicGate
{
public:
    void get_gate_output()
    {
        cout << endl;
        if (inp1 == 1 && inp2 == 1 && inp3 == 1)
            cout << 1;
        else
            cout << 0;
    }
};
class OR : public LogicGate
{
public:
    void get_gate_output()
    {
        cout << endl;
        if ((inp1 + inp2 + inp3) > 0)
            cout << 1;
        else
            cout << 0;
    }
};
main()
{
    AND andGate;
    OR orGate;
    system("cls");
    andGate.getData();
    andGate.get_gate_output();
    orGate.getData();
    orGate.get_gate_output();
}
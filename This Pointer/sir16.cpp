<<<<<<< HEAD
// This Pointer

#include<iostream>
using namespace std;
class bank
{
    int bal;
    string name;

    public:
    void setData(int bal, string name);

    void getData()
    {
        cout << "Balance is : " << bal << endl;
        cout << "Name is    : " << name << endl;
    }
};

void bank :: setData(int bal, string name)
{
    this -> bal = bal;
    this -> name = name;
}

int main()
{
    bank b;
    b.setData(1000,"Hello");
    b.getData();
}

/*

Balance is : 1000 
Name is    : Hello

=======
// This Pointer

#include<iostream>
using namespace std;
class bank
{
    int bal;
    string name;

    public:
    void setData(int bal, string name);

    void getData()
    {
        cout << "Balance is : " << bal << endl;
        cout << "Name is    : " << name << endl;
    }
};

void bank :: setData(int bal, string name)
{
    this -> bal = bal;
    this -> name = name;
}

int main()
{
    bank b;
    b.setData(1000,"Hello");
    b.getData();
}

/*

Balance is : 1000 
Name is    : Hello

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
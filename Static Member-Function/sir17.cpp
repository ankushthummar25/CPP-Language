<<<<<<< HEAD
// Static Member / Function

#include<iostream>
using namespace std;
class bank
{
    public:
    static int a;  // declare
    bank()
    {
        cout << "Constructor is Called..." << endl;
        a++;
    }

    static int fun()
    {
        return a;
    }
};

int bank :: a=505 ;   // init by defualt 0

int main()
{
    // cout << "init value of a is : " << bank::a << endl;
    cout << "init value of a is : " << bank::fun() << endl;
    cout << endl;

    bank b,a,s,d,f;

    cout << endl;
    cout << "After value of a is : " << bank::fun() << endl;
    //cout << "After value of a is : " << bank::a << endl;


}


/*

init value of a is : 505

Constructor is Called...
Constructor is Called...
Constructor is Called...
Constructor is Called...
Constructor is Called...

After value of a is : 510

=======
// Static Member / Function

#include<iostream>
using namespace std;
class bank
{
    public:
    static int a;  // declare
    bank()
    {
        cout << "Constructor is Called..." << endl;
        a++;
    }

    static int fun()
    {
        return a;
    }
};

int bank :: a=505 ;   // init by defualt 0

int main()
{
    // cout << "init value of a is : " << bank::a << endl;
    cout << "init value of a is : " << bank::fun() << endl;
    cout << endl;

    bank b,a,s,d,f;

    cout << endl;
    cout << "After value of a is : " << bank::fun() << endl;
    //cout << "After value of a is : " << bank::a << endl;


}


/*

init value of a is : 505

Constructor is Called...
Constructor is Called...
Constructor is Called...
Constructor is Called...
Constructor is Called...

After value of a is : 510

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
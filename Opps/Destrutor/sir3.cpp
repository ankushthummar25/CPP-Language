<<<<<<< HEAD
/*
Destructor : => Class Name and Function Name Both are Same.
             => Authomatically Called When Object's Work Comelted.
             => Always in public Section.
             => No Return Type and no Return Value.
             => Tild(~) sign
*/

#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<< "Defualt Constructor is Called"<< endl;
    }

    ~Test()
    {
        cout<< "Destuctor is called"<<endl;
    }

    Test(int a)
    {
        cout<< "Parameterized Constructor is called"<<endl;
        cout<<"Value of a is :"<< a << endl;
    }
};

int main()
{
    Test t(50),m;
}

/*

Parameterized Constructor is called       
Value of a is :50
Defualt Constructor is Called
Destuctor is called
Destuctor is called

=======
/*
Destructor : => Class Name and Function Name Both are Same.
             => Authomatically Called When Object's Work Comelted.
             => Always in public Section.
             => No Return Type and no Return Value.
             => Tild(~) sign
*/

#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<< "Defualt Constructor is Called"<< endl;
    }

    ~Test()
    {
        cout<< "Destuctor is called"<<endl;
    }

    Test(int a)
    {
        cout<< "Parameterized Constructor is called"<<endl;
        cout<<"Value of a is :"<< a << endl;
    }
};

int main()
{
    Test t(50),m;
}

/*

Parameterized Constructor is called       
Value of a is :50
Defualt Constructor is Called
Destuctor is called
Destuctor is called

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
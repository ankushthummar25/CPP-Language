<<<<<<< HEAD
// Pure Virtual Function

#include<iostream>
using namespace std;
class base                    // Abstract Class
{
    public:
    virtual void hello() = 0;
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived class Hello" << endl;
    }
};

int main()
{
    base *p ;
    derived d;

    p = &d;
    p-> hello();

}

/*

Derived class Hello

=======
// Pure Virtual Function

#include<iostream>
using namespace std;
class base                    // Abstract Class
{
    public:
    virtual void hello() = 0;
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived class Hello" << endl;
    }
};

int main()
{
    base *p ;
    derived d;

    p = &d;
    p-> hello();

}

/*

Derived class Hello

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
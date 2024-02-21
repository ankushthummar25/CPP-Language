<<<<<<< HEAD
/*
    Polymorphism => 1. Compile Time
                    2. Run Time

    Compile Time => 1. Function Overloading
                    2. Operator Overloading
*/

// Function Overloading

#include<iostream>
using namespace std;

class Test
{
    public:
    void hello(int a)
    {
        cout << "value Of a is : " << a << endl;
    }

    
    void hello(int a , int b )
    {
        cout << "value Of a and b is : " << a*b << endl;
    }

    
    void hello(int a , int b , int c)
    {
        cout << "value Of a,b and c is : " << a+b+c << endl;
    }
};

int main()
{
    Test t;
    t.hello(11);
    t.hello(11,22);
    t.hello(11,22,33);
}

/*

value Of a is : 11        
value Of a and b is : 242 
value Of a,b and c is : 66

=======
/*
    Polymorphism => 1. Compile Time
                    2. Run Time

    Compile Time => 1. Function Overloading
                    2. Operator Overloading
*/

// Function Overloading

#include<iostream>
using namespace std;

class Test
{
    public:
    void hello(int a)
    {
        cout << "value Of a is : " << a << endl;
    }

    
    void hello(int a , int b )
    {
        cout << "value Of a and b is : " << a*b << endl;
    }

    
    void hello(int a , int b , int c)
    {
        cout << "value Of a,b and c is : " << a+b+c << endl;
    }
};

int main()
{
    Test t;
    t.hello(11);
    t.hello(11,22);
    t.hello(11,22,33);
}

/*

value Of a is : 11        
value Of a and b is : 242 
value Of a,b and c is : 66

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
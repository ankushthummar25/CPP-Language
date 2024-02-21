<<<<<<< HEAD
// Hybrid ( Virtual ) Inheritance

#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;

    public:
    void setA()
    {
        cout << "Enter A : ";
        cin  >> a;
    }
};

class Plus : public Base               // Hierachical Inheritance
{
    protected:
    int b;

    public:
    void setB()
    {
        cout << "Enter B : ";
        cin  >> b;

    }

    void Add()
    {
        cout << "Addition of a and b is : " << a+b << endl;
        cout << endl; 
    }
};

class set                                  // Multiple  Inheritance
{
    protected:
    int c;

    public:
    void setC()
    {
        cout << "Enter C : ";
        cin  >> c;
    }

};

class derived : public Base , public set   
{         
    public:
    void world()
    {
        setA();
        setC();
        cout << "Product of a and c is : " << a*c << endl;
    }
};

int main()
{
    Plus a;
    a.setA();
    a.setB();
    a.Add();

    derived d;
    d.world();

}

/*

Enter A : 10
Enter B : 60
Addition of a and b is : 70

Enter A : 21
Enter C : 12
Product of a and c is : 252

=======
// Hybrid ( Virtual ) Inheritance

#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;

    public:
    void setA()
    {
        cout << "Enter A : ";
        cin  >> a;
    }
};

class Plus : public Base               // Hierachical Inheritance
{
    protected:
    int b;

    public:
    void setB()
    {
        cout << "Enter B : ";
        cin  >> b;

    }

    void Add()
    {
        cout << "Addition of a and b is : " << a+b << endl;
        cout << endl; 
    }
};

class set                                  // Multiple  Inheritance
{
    protected:
    int c;

    public:
    void setC()
    {
        cout << "Enter C : ";
        cin  >> c;
    }

};

class derived : public Base , public set   
{         
    public:
    void world()
    {
        setA();
        setC();
        cout << "Product of a and c is : " << a*c << endl;
    }
};

int main()
{
    Plus a;
    a.setA();
    a.setB();
    a.Add();

    derived d;
    d.world();

}

/*

Enter A : 10
Enter B : 60
Addition of a and b is : 70

Enter A : 21
Enter C : 12
Product of a and c is : 252

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
<<<<<<< HEAD
// Hierarchical Inheritance

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

class ABC : public Base
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

class PQR : public Base
{
    protected:
    int c;

    public:
    void setC()
    {
        cout << "Enter C : ";
        cin  >> c;
    }

    void Product()
    {
        cout << "Product of a and c is : " << a*c << endl;
    }
};

int main()
{
    ABC a;
    a.setA();
    a.setB();
    a.Add();

    PQR p;
    p.setA();
    p.setC();
    p.Product();

}

/*

Enter A : 15
Enter B : 15
Addition of a and b is : 30

Enter A : 30
Enter C : 20
Product of a and c is : 600

=======
// Hierarchical Inheritance

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

class ABC : public Base
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

class PQR : public Base
{
    protected:
    int c;

    public:
    void setC()
    {
        cout << "Enter C : ";
        cin  >> c;
    }

    void Product()
    {
        cout << "Product of a and c is : " << a*c << endl;
    }
};

int main()
{
    ABC a;
    a.setA();
    a.setB();
    a.Add();

    PQR p;
    p.setA();
    p.setC();
    p.Product();

}

/*

Enter A : 15
Enter B : 15
Addition of a and b is : 30

Enter A : 30
Enter C : 20
Product of a and c is : 600

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
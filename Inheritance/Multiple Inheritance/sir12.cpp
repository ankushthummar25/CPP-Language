<<<<<<< HEAD
// Multiple Inheritance

#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;

    public:
    void setA()
    {
        cout << "Enter The A : ";
        cin  >> a;
    }
};

class base2
{
    protected:
    int b;

    public:
    void setB()
    {
        cout << "Enter The B : ";
        cin  >> b;
    }
};

class Derived : public base1 , public base2 
{
    public:
    void getProduct()
    {
        cout << "Product of a and b is : " << a*b << endl;
    }

};

int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.getProduct();

    return 0;
}

/*

Enter The A : 10
Enter The B : 15
Product of a and b is : 150

=======
// Multiple Inheritance

#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;

    public:
    void setA()
    {
        cout << "Enter The A : ";
        cin  >> a;
    }
};

class base2
{
    protected:
    int b;

    public:
    void setB()
    {
        cout << "Enter The B : ";
        cin  >> b;
    }
};

class Derived : public base1 , public base2 
{
    public:
    void getProduct()
    {
        cout << "Product of a and b is : " << a*b << endl;
    }

};

int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.getProduct();

    return 0;
}

/*

Enter The A : 10
Enter The B : 15
Product of a and b is : 150

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
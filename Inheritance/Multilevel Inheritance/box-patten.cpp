<<<<<<< HEAD
#include<iostream>
using namespace std;
class base1
{
    protected:
    int n;

    public:
    void setA()
    {
        cout << "Enter The N : " ;
        cin  >> n ;
        cout << endl;
    }
};

class base2 : public base1
{
    public:
    void setB()
    {
        cout << " Hollow Square " << endl;
    }
};

class Derived : public base2
{
    public:
    int i,j;

    void getProduct()
    {
       for(i=1 ; i<=n ; i++)
        {
            for(j=1 ; j<=n ; j++)
            {
                if(i==1 || i==n || j==1 || j==n)
                {
                    cout << " * ";
                }else
                    {
                         cout << "   ";
                    }
            }
            cout << endl;
        }
    }
}; 

int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.getProduct();
}

/*

Enter The N : 5

 Hollow Square
 *  *  *  *  *
 *           *
 *           *
 *           *
 *  *  *  *  *

=======
#include<iostream>
using namespace std;
class base1
{
    protected:
    int n;

    public:
    void setA()
    {
        cout << "Enter The N : " ;
        cin  >> n ;
        cout << endl;
    }
};

class base2 : public base1
{
    public:
    void setB()
    {
        cout << " Hollow Square " << endl;
    }
};

class Derived : public base2
{
    public:
    int i,j;

    void getProduct()
    {
       for(i=1 ; i<=n ; i++)
        {
            for(j=1 ; j<=n ; j++)
            {
                if(i==1 || i==n || j==1 || j==n)
                {
                    cout << " * ";
                }else
                    {
                         cout << "   ";
                    }
            }
            cout << endl;
        }
    }
}; 

int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.getProduct();
}

/*

Enter The N : 5

 Hollow Square
 *  *  *  *  *
 *           *
 *           *
 *           *
 *  *  *  *  *

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
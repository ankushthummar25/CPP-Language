<<<<<<< HEAD
#include<iostream>
using namespace std;
class base1
{
    protected:
    int Row;

    public:
    void setA()
    {
        cout << "Enter The Row : " ;
        cin  >> Row ;
    }
};

class base2
{
    protected:
    int Column;

    public:
    void setB()
    {
        cout << "Enter The Collumn : " ;
        cin  >> Column ;
    }
};

class Derived : public base1 , public base2
{
    public:
    int i,j;

    void getProduct()
    {
       for(i=1 ; i<=Row ; i++)
        {
            for(j=1 ; j<=Column ; j++)
            {
                if(i==1 || i==Row || j==1 || j==Column)
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

Enter The Row : 5
Enter The Collumn : 10

 *  *  *  *  *  *  *  *  *  * 
 *                          * 
 *                          * 
 *                          * 
 *  *  *  *  *  *  *  *  *  * 

=======
#include<iostream>
using namespace std;
class base1
{
    protected:
    int Row;

    public:
    void setA()
    {
        cout << "Enter The Row : " ;
        cin  >> Row ;
    }
};

class base2
{
    protected:
    int Column;

    public:
    void setB()
    {
        cout << "Enter The Collumn : " ;
        cin  >> Column ;
    }
};

class Derived : public base1 , public base2
{
    public:
    int i,j;

    void getProduct()
    {
       for(i=1 ; i<=Row ; i++)
        {
            for(j=1 ; j<=Column ; j++)
            {
                if(i==1 || i==Row || j==1 || j==Column)
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

Enter The Row : 5
Enter The Collumn : 10

 *  *  *  *  *  *  *  *  *  * 
 *                          * 
 *                          * 
 *                          * 
 *  *  *  *  *  *  *  *  *  * 

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
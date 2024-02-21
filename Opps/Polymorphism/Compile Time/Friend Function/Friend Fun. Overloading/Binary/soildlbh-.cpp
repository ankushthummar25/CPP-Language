<<<<<<< HEAD
// Friend Function Using Operator Overloading


#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setData(int x , int y , int z)
    {
        l = x ,  b = y ,  h = z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    friend Box operator- (Box n,Box m)
    {
        Box t;
        t.l = m.l - n.l;
        t.b = m.b - n.b;
        t.h = m.h - n.h;

        return t;

    }
};

int main()
{
    Box n , m , a;

    n.setData(2,2,2);
    cout << "Volume of Box N is : "<< n.getVolume() << endl;

    m.setData(5,5,5);
    cout << "Volume of Box M is : "<< m.getVolume() << endl;

    a = n - m ;  // 3 3 3
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box N is : 8
Volume of Box M is : 125
Volume of Box A is : 27

=======
// Friend Function Using Operator Overloading


#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setData(int x , int y , int z)
    {
        l = x ,  b = y ,  h = z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    friend Box operator- (Box n,Box m)
    {
        Box t;
        t.l = m.l - n.l;
        t.b = m.b - n.b;
        t.h = m.h - n.h;

        return t;

    }
};

int main()
{
    Box n , m , a;

    n.setData(2,2,2);
    cout << "Volume of Box N is : "<< n.getVolume() << endl;

    m.setData(5,5,5);
    cout << "Volume of Box M is : "<< m.getVolume() << endl;

    a = n - m ;  // 3 3 3
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box N is : 8
Volume of Box M is : 125
Volume of Box A is : 27

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
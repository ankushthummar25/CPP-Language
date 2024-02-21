<<<<<<< HEAD
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

    friend Box operator-- (Box &n,int)
    {
        Box t;
        t.l = --n.l;
        t.b = --n.b;
        t.h = --n.h;

        return t;

    }
};

int main()
{
    Box m , n , a;

    m.setData(3,3,3);
    cout << "Volume of Box M is : "<< m.getVolume() << endl;

    n.setData(5,5,5);
    cout << "Volume of Box N is : "<< n.getVolume() << endl;

    // a = --z;
    a = n-- ;  // 4 4 4 
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box M is : 27
Volume of Box N is : 125
Volume of Box A is : 64

=======
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

    friend Box operator-- (Box &n,int)
    {
        Box t;
        t.l = --n.l;
        t.b = --n.b;
        t.h = --n.h;

        return t;

    }
};

int main()
{
    Box m , n , a;

    m.setData(3,3,3);
    cout << "Volume of Box M is : "<< m.getVolume() << endl;

    n.setData(5,5,5);
    cout << "Volume of Box N is : "<< n.getVolume() << endl;

    // a = --z;
    a = n-- ;  // 4 4 4 
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box M is : 27
Volume of Box N is : 125
Volume of Box A is : 64

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
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

    Box operator- (Box &n)
    {
        Box m;
        m.l = l - n.l;
        m.b = b - n.b;
        m.h = h - n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(3,4,5);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,5,6);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  // -1 1 1
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

    cout<<"\n\n"<<endl;

    t.setData(6,7,8);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,5,6);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  // -1 1 1
    cout << "Volume of Box A is : "<< a.getVolume() << endl;


}

/*

Volume of Box T is : 60 
Volume of Box Z is : 120
Volume of Box A is : -1 



Volume of Box T is : 336
Volume of Box Z is : 120
Volume of Box A is : 8

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

    Box operator- (Box &n)
    {
        Box m;
        m.l = l - n.l;
        m.b = b - n.b;
        m.h = h - n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(3,4,5);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,5,6);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  // -1 1 1
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

    cout<<"\n\n"<<endl;

    t.setData(6,7,8);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,5,6);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  // -1 1 1
    cout << "Volume of Box A is : "<< a.getVolume() << endl;


}

/*

Volume of Box T is : 60 
Volume of Box Z is : 120
Volume of Box A is : -1 



Volume of Box T is : 336
Volume of Box Z is : 120
Volume of Box A is : 8

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
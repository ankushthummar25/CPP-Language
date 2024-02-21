<<<<<<< HEAD
#include<iostream>
using namespace std;
class Box
{
    int l;
    public:
    void setData(int b )
    {
        l = b ;
    }

    int getVolume()
    {
        return l*l*l;
    }

    Box operator- (Box &n)
    {
        Box m;
        m.l = l - n.l;
        m.l = l - n.l;
        m.l = l - n.l;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(5);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(8);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  
    cout << "Volume of Box A is : "<< a.getVolume() << endl;


    cout<<"\n\n"<<endl;


    t.setData(8);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(5);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  
    cout << "Volume of Box A is : "<< a.getVolume() << endl;
}

/*

Volume of Box T is : 125
Volume of Box Z is : 512
Volume of Box A is : -27



Volume of Box T is : 512
Volume of Box Z is : 125
Volume of Box A is : 27

*/
=======
#include<iostream>
using namespace std;
class Box
{
    int l;
    public:
    void setData(int b )
    {
        l = b ;
    }

    int getVolume()
    {
        return l*l*l;
    }

    Box operator- (Box &n)
    {
        Box m;
        m.l = l - n.l;
        m.l = l - n.l;
        m.l = l - n.l;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(5);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(8);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  
    cout << "Volume of Box A is : "<< a.getVolume() << endl;


    cout<<"\n\n"<<endl;


    t.setData(8);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(5);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t - z ;  
    cout << "Volume of Box A is : "<< a.getVolume() << endl;
}

/*

Volume of Box T is : 125
Volume of Box Z is : 512
Volume of Box A is : -27



Volume of Box T is : 512
Volume of Box Z is : 125
Volume of Box A is : 27

*/
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717

<<<<<<< HEAD
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{10,11,12},{13,14,15},{16,17,18}};

    cout<< "Array 1:\tArray 2:\tTotat Array:\n";

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<a[i][j] ;
        }
    

    cout<<"\t\t";

    for(j=0 ; j<3 ; j++)
    {
        cout << " " << b[i][j] ;
    }

    cout<<"\t";

    for(j=0 ; j<3 ; j++)
    {
        cout<< " "<<a[i][j]+b[i][j] ;
    }
    cout<<"\n";
    }
    return 0;
}


/*

Array 1:        Array 2:        Totat Array:
 1 2 3           10 11 12        11 13 15
 4 5 6           13 14 15        17 19 21
 7 8 9           16 17 18        23 25 27

=======
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{10,11,12},{13,14,15},{16,17,18}};

    cout<< "Array 1:\tArray 2:\tTotat Array:\n";

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<a[i][j] ;
        }
    

    cout<<"\t\t";

    for(j=0 ; j<3 ; j++)
    {
        cout << " " << b[i][j] ;
    }

    cout<<"\t";

    for(j=0 ; j<3 ; j++)
    {
        cout<< " "<<a[i][j]+b[i][j] ;
    }
    cout<<"\n";
    }
    return 0;
}


/*

Array 1:        Array 2:        Totat Array:
 1 2 3           10 11 12        11 13 15
 4 5 6           13 14 15        17 19 21
 7 8 9           16 17 18        23 25 27

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
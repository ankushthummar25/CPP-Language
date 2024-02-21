#include <iostream>
#include<string>
using namespace std;

class store
{
public:
    int p[100], j, d = 0, o[10], z = 0, n, tot = 0,x[10],f=0,t=0;
    int choice,qun;
    double gst,nbill;
    string i[100], c,m;


    store()
    {
        cout << endl << "================= Mission Book Store =================" << endl << endl;

        cout << "    ==>> List Of Items <<==" << endl << endl;
        i[0] = "Book";
        i[1] = "Pen";
        i[2] = "Colure";
        i[3] = "Bag";
        i[4] = "Pencil";
        i[5] = "Rubber";
        i[6] = "Pad";
        i[7] = "Watch";

        p[0] = 35;
        p[1] = 5;
        p[2] = 50;
        p[3] = 650;
        p[4] = 3;
        p[5] = 2;
        p[6] = 80;
        p[7] = 1150;

        cout<<"-------------------------------"<< endl;

        cout<< "No.\t"<<"Item\t\t"<<"Price"<< endl;
        cout<<"-------------------------------"<< endl;

        for (j = 0; j <=7; j++)
        {
            cout << j + 1 << "\t";
            cout << i[j] << "\t\t";
            cout << p[j] << endl;
        }
        cout<<"-------------------------------"<< endl<<endl;
    }

    void data()
    {
        cout << "\n\n================ Customer Details ================" << endl << endl;
        cout << "Enter Customer Name          :" ;
        cin >> c;

        again :

        cout << "Enter Customer Mobile Number :" ;
        cin>>m;

        d=0;
        d=m.size();
        
        if (d == 10)
        {
            cout<<endl;
        }else
            {
                cout << "Invalid Number" << endl;
                goto again;
            }

    }

    void order()
    {
        
    start:
    

        cout << "Enter 0 for bill (OR) ";

        cout << "Enter your choice : " ;
        cin >> choice;
        if (choice == 0)
        {
            goto end;
        }else
            {
                 o[z] = choice;
                 cout<<"Enter quantity :";
                 cin>>qun;

                 x[z]=qun;
                 z++;

                cout<<endl;
                goto start;
             }
    end:
        cout << " ";
    }

    void bill()
    {
        z--;

        cout<<"\n\n";
        cout<<"\t==================================================="<<endl << endl;

        cout << "\t" << "\t   BILL ( Mission Book Store )"<<endl << endl;
        cout<<"\t==================================================="<<endl;

        cout <<endl<< "\tCustomer Name          : " << c ;
        cout <<endl<< "\tCustomer Mobile Number : " << m << endl << endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        cout<<"\t"<<"No.\t"<<"Items"<<"\t"<<"price"<<"\t"<<"Quantity"<<endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        for (j = 0; j <= z; j++)
        {
            n = o[j];

            f = x[j];
            n--;

            cout<<"\t"<<j+1<<"\t";

            cout << i[n] << "\t" << p[n] << "\t" << f <<endl;

            t = f*p[n];

            tot = tot + t;
        }
        cout<<"\t---------------------------------------------------"<<endl;
        

        gst= tot * 0.18;

        nbill=tot+gst;

        cout << endl<<endl;
        cout<<"\t" << "Total bill  : \t\t\t" << tot << endl;
        cout<<"\t" << "GST         : \t\t\t" << gst << endl;
        cout<<"\t---------------------------------------------------"<<endl;
        cout<<"\t" << "Net bill    : \t\t\t" << nbill << endl;
    }

    ~store()
    {
        cout<<endl<<endl;
        cout<<"\t"<<"\t\t--------- Have A Nice Day ----------" <<"\n\n";
        cout<<"\t==================================================="<<endl;

    }
};

int main()
{
    store s1;

    s1.data();
    s1.order();
    s1.bill();

    return 0;
}

/*

================= Mission Book Store =================

    ==>> List Of Items <<==

-------------------------------
No.     Item            Price
-------------------------------
1       Book            35
2       Pen             5
3       Colure          50
4       Bag             650
5       Pencil          3
6       Rubber          2
7       Pad             80
8       Watch           1150
-------------------------------



================ Customer Details ================

Enter Customer Name          :Ankush
Enter Customer Mobile Number :1234567890

Enter 0 for bill (OR) Enter your choice : 1
Enter quantity :12

Enter 0 for bill (OR) Enter your choice : 2
Enter quantity :10

Enter 0 for bill (OR) Enter your choice : 3
Enter quantity :1

Enter 0 for bill (OR) Enter your choice : 4
Enter quantity :1

Enter 0 for bill (OR) Enter your choice : 5
Enter quantity :3

Enter 0 for bill (OR) Enter your choice : 6
Enter quantity :2

Enter 0 for bill (OR) Enter your choice : 7
Enter quantity :1

Enter 0 for bill (OR) Enter your choice : 8
Enter quantity :1

Enter 0 for bill (OR) Enter your choice : 0
 

        ===================================================

                   BILL ( Mission Book Store )

        ===================================================

        Customer Name          : Ankush
        Customer Mobile Number : 1234567890

        ---------------------------------------------------
        No.     Items   price   Quantity
        ---------------------------------------------------
        1       Book    35      12
        2       Pen     5       10
        3       Colure  50      1
        4       Bag     650     1
        5       Pencil  3       3
        6       Rubber  2       2
        7       Pad     80      1
        8       Watch   1150    1
        ---------------------------------------------------


        Total bill  : 2413
        GST         : 434.34
        Net bill    : 2847.34


        --------- Have A Nice Day ----------

        ===================================================

*/
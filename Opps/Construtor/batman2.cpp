<<<<<<< HEAD
#include<iostream>
using namespace std;

class batsman
{
    public:
    int bcode,innings,notout,runs,batavg;
    char bname[20];
    float total;

    int calcavg()
    {
        batavg = runs / (innings-notout);
        return batavg;
    }

    
    batsman()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Batsman Details            " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter the 4 Digits Code : " ;
        cin  >> bcode ;

        cout << "Enter the Batsman Name  : " ;
        cin.get();
        cin.getline(bname,20);

        cout << "Enter the innings       : " ;
        cin  >> innings ;

        cout << "Enter the Not Out       : " ;
        cin  >> notout;

        cout << "Enter the total run     : " ;
        cin  >> runs;

        cout << "--------------------------------------" << endl;
        

        batavg = calcavg();
        
    }

    void displaydata()
    {
        cout << "4 Digits Code : "<< bcode<<endl;
        cout << "Batsman Name  : "<<bname<<endl;
        cout << "innings       : "<<innings<<endl;
        cout << "Not Out       : "<<notout<<endl;
        cout << "total run     : "<<runs<<endl;
        cout << "Bat Avarage   : "<<batavg<<endl;


    }
};

int main()
{
    batsman s;
    
    cout << endl;
    s.displaydata();
}

/*

--------------------------------------
           Batsman Details
--------------------------------------
Enter the 4 Digits Code : 1234
Enter the Batsman Name  : virat
Enter the innings       : 100
Enter the Not Out       : 5
Enter the total run     : 570
--------------------------------------

4 Digits Code : 1234
Batsman Name  : virat
innings       : 100
Not Out       : 5
total run     : 570
Bat Avarage   : 6

=======
#include<iostream>
using namespace std;

class batsman
{
    public:
    int bcode,innings,notout,runs,batavg;
    char bname[20];
    float total;

    int calcavg()
    {
        batavg = runs / (innings-notout);
        return batavg;
    }

    
    batsman()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Batsman Details            " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter the 4 Digits Code : " ;
        cin  >> bcode ;

        cout << "Enter the Batsman Name  : " ;
        cin.get();
        cin.getline(bname,20);

        cout << "Enter the innings       : " ;
        cin  >> innings ;

        cout << "Enter the Not Out       : " ;
        cin  >> notout;

        cout << "Enter the total run     : " ;
        cin  >> runs;

        cout << "--------------------------------------" << endl;
        

        batavg = calcavg();
        
    }

    void displaydata()
    {
        cout << "4 Digits Code : "<< bcode<<endl;
        cout << "Batsman Name  : "<<bname<<endl;
        cout << "innings       : "<<innings<<endl;
        cout << "Not Out       : "<<notout<<endl;
        cout << "total run     : "<<runs<<endl;
        cout << "Bat Avarage   : "<<batavg<<endl;


    }
};

int main()
{
    batsman s;
    
    cout << endl;
    s.displaydata();
}

/*

--------------------------------------
           Batsman Details
--------------------------------------
Enter the 4 Digits Code : 1234
Enter the Batsman Name  : virat
Enter the innings       : 100
Enter the Not Out       : 5
Enter the total run     : 570
--------------------------------------

4 Digits Code : 1234
Batsman Name  : virat
innings       : 100
Not Out       : 5
total run     : 570
Bat Avarage   : 6

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
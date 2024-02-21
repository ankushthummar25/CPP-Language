<<<<<<< HEAD
#include <iostream>
using namespace std;

class Test
{
private:
    int Flightnumber; 
    float Fuel, Distance;
    char Description[50];

    float CALFUEL()
    {
        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance <= 2000)
        {
            Fuel = 1100;
        }
        else{
            Fuel = 2200;
        }
        return Fuel;
    }

public:
    void FEEDINFO()
    {
        cout << "--------------------------------------" << endl;

        cout << "   Flight Distance And Fuel Details   " << endl;

        cout << "--------------------------------------" << endl;

        cout <<"Enter the Flight Number : ";
        cin >> Flightnumber;

        cout <<"Enter the Description   : ";
        cin.get();
        cin.getline(Description,50);

        cout <<"Enter the Distance      : ";
        cin >> Distance;

        cout << "--------------------------------------" << endl;


        CALFUEL();
    }


    void SHOWINFO()
    {
        cout <<"Flight Number  : " <<Flightnumber <<endl;
        cout <<"Description    : " <<Description <<endl;
        cout <<"Distance       : " <<Distance <<endl;
        
        cout <<"FUEL           : " <<CALFUEL() <<endl;

    }
};

int main()
{
    Test T;
    
    T.FEEDINFO();
    cout <<endl;
    T.SHOWINFO();

    return 0;
}




/*

--------------------------------------
   Flight Distance And Fuel Details   
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 300
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 300
FUEL           : 500

#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#




--------------------------------------
   Flight Distance And Fuel Details
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 1500
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 1500
FUEL           : 1100




#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#




--------------------------------------
   Flight Distance And Fuel Details
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 2100
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 2100
FUEL           : 2200




#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#



=======
#include <iostream>
using namespace std;

class Test
{
private:
    int Flightnumber; 
    float Fuel, Distance;
    char Description[50];

    float CALFUEL()
    {
        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance <= 2000)
        {
            Fuel = 1100;
        }
        else{
            Fuel = 2200;
        }
        return Fuel;
    }

public:
    void FEEDINFO()
    {
        cout << "--------------------------------------" << endl;

        cout << "   Flight Distance And Fuel Details   " << endl;

        cout << "--------------------------------------" << endl;

        cout <<"Enter the Flight Number : ";
        cin >> Flightnumber;

        cout <<"Enter the Description   : ";
        cin.get();
        cin.getline(Description,50);

        cout <<"Enter the Distance      : ";
        cin >> Distance;

        cout << "--------------------------------------" << endl;


        CALFUEL();
    }


    void SHOWINFO()
    {
        cout <<"Flight Number  : " <<Flightnumber <<endl;
        cout <<"Description    : " <<Description <<endl;
        cout <<"Distance       : " <<Distance <<endl;
        
        cout <<"FUEL           : " <<CALFUEL() <<endl;

    }
};

int main()
{
    Test T;
    
    T.FEEDINFO();
    cout <<endl;
    T.SHOWINFO();

    return 0;
}




/*

--------------------------------------
   Flight Distance And Fuel Details   
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 300
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 300
FUEL           : 500

#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#




--------------------------------------
   Flight Distance And Fuel Details
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 1500
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 1500
FUEL           : 1100




#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#




--------------------------------------
   Flight Distance And Fuel Details
--------------------------------------
Enter the Flight Number : 123
Enter the Description   : Happy Journey
Enter the Distance      : 2100
--------------------------------------

Flight Number  : 123
Description    : Happy Journey
Distance       : 2100
FUEL           : 2200




#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#



>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
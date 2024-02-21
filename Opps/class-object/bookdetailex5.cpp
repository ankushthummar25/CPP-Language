<<<<<<< HEAD
#include <iostream>
using namespace std;

class Book
{
private:
    int bookno, n, cost;
    char booktitle[20];
    float price;

    float TOTAL_COST(int n)
    {
        cost = n * price;
        return cost;
    }
public:
    void INPUT()
    {
        cout << "--------------------------------------" << endl;

        cout << "            Books Details             " << endl;

        cout << "--------------------------------------" << endl;

        cout <<"Enter The Book Number          : ";
        cin >> bookno;

        cout <<"Enter The Book Title           : ";
        cin.get();
        cin.getline(booktitle,20);

        cout <<"Enter The Numbers of books Copy: ";
        cin >> n;

        cout <<"Enter The Price of One Book    : ";
        cin >> price;

        cout << "--------------------------------------" << endl;


        cost = TOTAL_COST(n);
    }
    void PURCHASE()
    {
        cout <<"Book Number          : " << bookno <<endl;
        cout <<"Book Number          : " << booktitle <<endl;
        cout <<"Numbers of books Copy: " << n <<endl;
        cout <<"Price of One Book    : " << price <<endl;
        cout <<"Cost of Total Book   : " << cost;
    }
};


int main()
{
    Book b;

    b.INPUT();
    cout <<endl;
    b.PURCHASE();

    return 0;
}




/*

--------------------------------------
            Books Details
--------------------------------------
Enter The Book Number          : 10   
Enter The Book Title           : Science
Enter The Numbers of books Copy: 50
Enter The Price of One Book    : 100
--------------------------------------

Book Number          : 10
Book Number          : Science        
Numbers of books Copy: 50
Price of One Book    : 100
Cost of Total Book   : 5000

=======
#include <iostream>
using namespace std;

class Book
{
private:
    int bookno, n, cost;
    char booktitle[20];
    float price;

    float TOTAL_COST(int n)
    {
        cost = n * price;
        return cost;
    }
public:
    void INPUT()
    {
        cout << "--------------------------------------" << endl;

        cout << "            Books Details             " << endl;

        cout << "--------------------------------------" << endl;

        cout <<"Enter The Book Number          : ";
        cin >> bookno;

        cout <<"Enter The Book Title           : ";
        cin.get();
        cin.getline(booktitle,20);

        cout <<"Enter The Numbers of books Copy: ";
        cin >> n;

        cout <<"Enter The Price of One Book    : ";
        cin >> price;

        cout << "--------------------------------------" << endl;


        cost = TOTAL_COST(n);
    }
    void PURCHASE()
    {
        cout <<"Book Number          : " << bookno <<endl;
        cout <<"Book Number          : " << booktitle <<endl;
        cout <<"Numbers of books Copy: " << n <<endl;
        cout <<"Price of One Book    : " << price <<endl;
        cout <<"Cost of Total Book   : " << cost;
    }
};


int main()
{
    Book b;

    b.INPUT();
    cout <<endl;
    b.PURCHASE();

    return 0;
}




/*

--------------------------------------
            Books Details
--------------------------------------
Enter The Book Number          : 10   
Enter The Book Title           : Science
Enter The Numbers of books Copy: 50
Enter The Price of One Book    : 100
--------------------------------------

Book Number          : 10
Book Number          : Science        
Numbers of books Copy: 50
Price of One Book    : 100
Cost of Total Book   : 5000

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
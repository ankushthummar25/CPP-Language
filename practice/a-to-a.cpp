#include<iostream>
using namespace std;

    int main()
    {
        char i;
        cout << "Enter The Variable : ";
        cin  >> i;
    

	    if(i>=65 && i<=90)
        {
            cout << "Ans : " << i+32 <<endl;
        }else if(i>=97 && i<=122)
            {
                cout << "Ans : " << i-32 << endl;
            }
        return 0;
    }

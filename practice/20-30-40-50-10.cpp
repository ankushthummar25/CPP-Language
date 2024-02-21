#include<iostream>
using namespace std;

int main()
{
    int num[] = {10,20,30,40,50};

    for (int i=1; i<5 ; i++)
    {
        std::cout << num[i] << ",";
    }
    cout << num[0] << std :: endl;

    return 0;
}

/*

20,30,40,50,10

*/
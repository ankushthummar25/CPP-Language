<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=1,r,c;

    cout<<"\nEnter the value of Row:";
    cin >>r;

    cout<<"\nEnter the value of Collume:";
    cin >>c;

    for(i=1; i<=r; i++){
        
        for(j=1; j<=c; j++){

            cout<<a<<"\t";
            a++;
        }
        cout<<"\n";
    }

} 

/*

Enter the value of Row:3

Enter the value of Collume:4
1       2       3       4
5       6       7       8
9       10      11      12

=======
#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=1,r,c;

    cout<<"\nEnter the value of Row:";
    cin >>r;

    cout<<"\nEnter the value of Collume:";
    cin >>c;

    for(i=1; i<=r; i++){
        
        for(j=1; j<=c; j++){

            cout<<a<<"\t";
            a++;
        }
        cout<<"\n";
    }

} 

/*

Enter the value of Row:3

Enter the value of Collume:4
1       2       3       4
5       6       7       8
9       10      11      12

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
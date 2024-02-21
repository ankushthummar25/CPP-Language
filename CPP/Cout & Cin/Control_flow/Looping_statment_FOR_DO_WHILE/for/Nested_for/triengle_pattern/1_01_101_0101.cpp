<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int i,j, a=0,b=1;


    for(i=5; i>=1; i--){
        
        for(j=i; j<=5; j++){

            if(j%2==0){
            cout<<a<<"\t";
            }else{
            cout<<b<<"\t";
            }

        }
        cout<<"\n";
    }

} 

/*
1
0       1
1       0       1
0       1       0       1
1       0       1       0       1
=======
#include<iostream>
using namespace std;

int main (){
    
    int i,j, a=0,b=1;


    for(i=5; i>=1; i--){
        
        for(j=i; j<=5; j++){

            if(j%2==0){
            cout<<a<<"\t";
            }else{
            cout<<b<<"\t";
            }

        }
        cout<<"\n";
    }

} 

/*
1
0       1
1       0       1
0       1       0       1
1       0       1       0       1
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
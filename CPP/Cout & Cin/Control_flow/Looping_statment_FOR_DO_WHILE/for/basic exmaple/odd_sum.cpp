<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int a,i,sum=0;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i=1; i<=a; i++ ){
        if(i%2!=0){
        
        cout<<i<<"\n";

        sum+=i;

        }

    }
    
    cout<<"\nSum is :"<<sum<<"\n";

} 

/*

Enter the value :10
1
3
5
7
9

Sum is :25


=======
#include<iostream>
using namespace std;

int main (){
    
    int a,i,sum=0;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i=1; i<=a; i++ ){
        if(i%2!=0){
        
        cout<<i<<"\n";

        sum+=i;

        }

    }
    
    cout<<"\nSum is :"<<sum<<"\n";

} 

/*

Enter the value :10
1
3
5
7
9

Sum is :25


>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
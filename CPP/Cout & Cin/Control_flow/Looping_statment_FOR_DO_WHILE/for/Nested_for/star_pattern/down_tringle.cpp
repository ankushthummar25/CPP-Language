<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

     for(i=1; i<=n; i++){
        
        for(j=1; j<=i; j++){

            cout<<" ";
        }
        for(k=n; k>=i; k--){

            cout<<"* ";

        }

        cout<<"\n";
    }

} 

/*

Enter the value :10
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *


=======
#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

     for(i=1; i<=n; i++){
        
        for(j=1; j<=i; j++){

            cout<<" ";
        }
        for(k=n; k>=i; k--){

            cout<<"* ";

        }

        cout<<"\n";
    }

} 

/*

Enter the value :10
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *


>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/
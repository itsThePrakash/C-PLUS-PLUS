#include<iostream>
 

 using namespace std;

int main(){
    while(true){
       int first, second , sub ;
        cout << "Enter First Number :  ";
        cin >> first;

        cout << "Enter Second Number:  ";
        cin >> second;
         
         sub = first - second ;

         cout << first << "-" << second << "=" << sub ;

         char choice ;
         cout << "\nwant to continue ? (y/n) ";
         cin  >> choice ;

         if (choice != 'y' && choice != 'y'){
           break;
           }
    } 
    return 0;   
}
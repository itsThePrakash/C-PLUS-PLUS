#include<iostream>
using namespace std;

int main() {
while (true) {

    int first,second,sum;
    cout <<"Enter First Number :";
    cin >> first;

    cout <<"Enter Second Number:"; 
    cin >> second ;

    sum = first + second ;
    

    cout << "Sum is " <<first <<"+" <<second<< "="<< sum ;

    char choice ;
    
    cout << "\nWant To Continue ? (Y/N):";

    cin >> choice ;
    if (choice != 'Y'  && choice != 'y' ) {
         break;
         }
    }
     return 0;
 }
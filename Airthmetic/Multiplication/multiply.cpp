#include<iostream>
using namespace std;


int main (){
    while(true){
         
         double first, second, product;

         cout << "Enter First Number :";
         cin >> first ;
         
         cout << "Enter Second number:";
         cin >> second ;

         product = first*second;

         cout<< first<< "*"<<second<<"="<<product;

         char choice;

         cout << "\nWant to continue? (y/n):";
         cin >> choice;

         if (choice != 'y'&& choice != 'Y'){
            break;
         }

    }
}
//Write a C program to print all odd numbers between 1 to 100. - usingWhile loop

#include<iostream>

using namespace std;

int main(){

   int n;

    cout << "Enter the no."<< endl;
    cin >> n;



 cout << "The no.s are :"<< endl;
 int i=0;

    while(i <=n){

        
        if(i % 2 !=0){

            printf("%d \n",i);


        } 

        i++;

    }
    return 0;
}
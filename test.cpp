//Write a Cpp program to print all natural numbers from 1 to n. - using while Loop

#include<iostream>

using namespace std;

int main(){


    int n;

    cout << "Enter the no."<< endl;
    cin >> n;

int i=1;

 cout << "The no,s are :"<< endl;

  while(i<=n){

    cout << i <<endl;

    i++;
  }


    return 0;
}
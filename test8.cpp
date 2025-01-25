//Write a C program to print multiplication table of any number.


#include<iostream>

using namespace std;

int main(){


    int n;

    cout << "Enter the no."<< endl;
    cin >> n;

    cout <<"\n";

for(int i = 1; i <= 10; i++){

  cout << n*i <<endl;


}


    return 0;
}
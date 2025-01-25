//Write a C program to count number of digits in a number.



#include<iostream>

using namespace std;

int main(){


    int n;

    cout << "Enter the no."<< endl;
    cin >> n;

    cout <<"\n";

      int sum = 0;

       while(n > 0){

        int rem = n % 10;
        sum = sum + rem ;
        
        n = n / 10;

    }

    cout << "The sum of the number is:  " << sum <<endl;

    return 0;
}
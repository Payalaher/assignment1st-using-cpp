// Write a C program to find sum of all natural numbers between 1 to n.


#include<iostream>

using namespace std;

int main(){

   int n;

    cout << "Enter the no."<< endl;
    cin >> n;



int sum = 0;

for(int i = 1; i <= n; i++){

cout << i <<endl;

  sum = sum+i;

}
cout <<" The Sum is " <<sum <<endl;
    
    return 0;
}
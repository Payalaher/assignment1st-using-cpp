// Write a C program to find sum of all even numbers between 1 to n.

#include<iostream>

using namespace std;

int main(){

   int n;

    cout << "Enter the no."<< endl;
    cin >> n;
    cout << "\n";


int sum = 0;

for(int i = 1; i <= n; i++){



 if(i % 2 ==0){
    cout << i <<endl;
     sum = sum+i;
 }

}
cout <<" The Sum is " <<sum <<endl;
    
    return 0;
}
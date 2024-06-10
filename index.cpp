// Code Challenge:
// Write a recursive C++ function to calculate the sum of all integers from 1 to n. The sum of integers from 1 to n can be computed as 1 + 2 + 3 + ... + n.

// Understanding the base case and recursive case is crucial when designing recursive algorithms. The base case provides the termination condition, 
// while the recursive case defines the problem in terms of a smaller or simpler subproblem.
// Feel free to ask questions or proceed to the next lesson when you're ready.


#include <iostream>
using namespace std ; 

int Sig(int i){
    if(i <=  0){
        return i; 
    }

    return i + Sig(i-1); 
}



int main(){

    int index, value; 

    cout << "Please enter the number for the calculation: ";
    cin >> index;

    value = Sig(index); 

    cout << "The total sum of your index is: " << value << " "<< endl;  



    return 0; 
}
// For each integer n  in the inclusive interval :

// If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    //get two elements
    cin >> a;
    cin >> b;
    string  nums[9]= {"one","two","three","four","five","six","seven","eight","nine"};
    for (int i=a;i<=b;i++){
        // if the numbers greater than 9 check even or odd
       if (i>9){
           if (i%2==0){
               cout << "even"<< endl;  
               
           }
           else{
               cout << "odd" << endl ;
           }
       }
       else{
       cout << nums[i-1] << endl;  //if the numbers less than 9 check print that in words
        
    }
    }
    
    
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter number you want in search : ";
    cin>>n ;
    int sumofall=0;
    for(int i=1;i<=n;i++)
    {
        sumofall=sumofall+i ;
    }

    cout<<"the sum of total number are : "<<sumofall<<endl;
    int Sumofgiven=0 ;
      for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        Sumofgiven += num;  // Sum of the given numbers
    }

    cout<<"sum of given numbers are "<<Sumofgiven<<endl;
     int r;
     r= sumofall-Sumofgiven;
     cout<<"the missing number is "<<r;

    
     

}
/* You are given all numbers between 1,2,...........,n except one. Your task is to find the missing number.

Input:
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output:
Print the missing number.


firstly you give how many numbers you want to search
lets suppose you give 6
then you will give 5 numbers (n-1)  where n = 6 
the numbers let be 1 , 2,4,5
so 3 is missing in the sequence so your output should be 3 */
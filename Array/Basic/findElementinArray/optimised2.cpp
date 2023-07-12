// XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
// XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2

// Now, let’s XOR all the numbers between 1 to N.
// xor1 = 1^2^…….^N

// Let’s XOR all the numbers in the given array.
// xor2 = 1^2^……^N (contains all the numbers except the missing one).

// Now, if we again perform XOR between xor1 and xor2, we will get:
// xor1 ^ xor2 = (1^1)^(2^2)^……..^(missing Number)^…..^(N^N)

// Here all the numbers except the missing number will form a pair and each pair will result in 0 according to the XOR property. 
// The result will be = 0 ^ (missing number) = missing number (according to property 2).

#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> &arr, int n){
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ n; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}
int main()
{
    vector<int> arr{1,2,5,3};
    int n = 5;

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Missing element is : "<<findElement(arr, n);
    return 0;
}
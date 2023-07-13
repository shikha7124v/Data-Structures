// Related to max consecutive 1's :- The problem states that, we have given an array of 0s
//  and 1s. The 1s represent the vehicles and 0s represents that there is no vehicle.
//  M is the no. while will indicates the no. of 0s flipped so as to get the max consecutive
//  1s which will represent the longest traffic jam.

#include <bits/stdc++.h>
using namespace std;

int traffic(int n, int m, vector<int> vehicle)
{
    int c = 0, ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && c <= m)
        {
            if (vehicle[j] == 0)
            {
                c++;
                if (c > m)
                {
                    c--;
                    break;
                }
            }
            j++;
        }
        ans = max(ans, j - i);
        if (vehicle[i] == 0)
        {
            c--;
        }
    }
    return ans;
}
int main()
{
    vector<int> vehicle{1, 0, 1, 1, 1};
    int n = vehicle.size();
    int m = 1;
    cout << traffic(n, m, vehicle);
    return 0;
}

// The solution to the problem lies in finding the maximum number of consecutive 1’s produced by flipping at most M 0s. To do that we can create 2 pointers which will create a window that consists of at most M 0’s and then using these pointers we can check for all the valid windows, The count for the number of 0’s in side the current window can be maintained by a variable by increasing it if we find a 0 inside the window, and decreasing it if the 0 is getting out of the window and finally return the largest valid window length as our answer. 
// To implement the approach : 
// The steps are as follows :
// Function int traffic( int N, int M, [int] VEHICLE )
// Create the variables ‘right’, ‘count’, and ‘answer’ and assign them with 0 initially.
// For loop ‘left’ in range 0 to N-1.
// While ‘right’ is less than N and ‘count’ is less than equal to M.
// If VEHICLE at ‘right’ is 0.
// Increase ‘count’ by 1.
// If count is greater than M
// Decrease count by 1 and break.
// Increase ‘right’ by 1.
// Update ‘answer’ with the maximum of ‘right’-’left’ and the answer itself.
// If VEHICLE at ‘left’ is 0.
// Decrease count by 1.
// Return ‘answer’.
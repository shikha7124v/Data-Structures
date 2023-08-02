#include<bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>> &mat)
{
 
  // Define ans array to store the result.
  vector<int> ans;
 
  int n = mat.size(); // no. of nows
  int m = mat[0].size(); // no. of columns
  
  // Initialize the pointers reqd for traversal.
  int top = 0, left = 0, bottom = n - 1, right = m - 1;

  // Loop until all elements are not traversed.
  while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
      ans.push_back(mat[top][i]);

    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
      ans.push_back(mat[i][right]);

    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(mat[bottom][i]);

      bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(mat[i][left]);

      left++;
    }
  }
  return ans;
}
int main()
{
    vector<vector<int>> mat{{1,2,3,4},
                               {12,13,14,5},
                               {11,16,15,6},
                               {10,9,8,7}};
    for(auto it: mat){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    vector<int> ans = spiralTraversal(mat);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}
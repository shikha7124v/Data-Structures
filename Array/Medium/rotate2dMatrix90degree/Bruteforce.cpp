// Problem says that you are given an square matrix, you have to rotate it 90 degree clockwise and return 
// Brute Force Approach - consider a different matrix and place the elements in the first row in the last row and than further 2nd row in the 2nd last coloumn so on
#include<bits/stdc++.h>
using namespace std;
void rotatedMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            rotated[j][n-i-1] = matrix[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matrix[i][j] = rotated[i][j];
        }
    }
}
int main()
{
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Without rotation: "<<endl;
    for(auto it: matrix){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    rotatedMatrix(matrix);
    cout<<"After Rotation: "<<endl;
    for(auto it: matrix){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
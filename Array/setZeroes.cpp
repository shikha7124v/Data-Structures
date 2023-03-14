// Whenever you will get 0 in the matrix, make that particular ith and jth row col as zero 
#include<bits/stdc++.h>
using namespace std;
// Approach 1
// Time Complexity: O(N*M) + O(N+M)
// Space Complexity: O(1)
void setZeroes(vector<vector<int>>& matrix){
    int rows = matrix.size(), cols = matrix.size();
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == 0){
                int ind = i-1;
                while(ind >= 0){
                    if(matrix[ind][j] != 0){
                        matrix[ind][j] = -1;
                    }
                    ind--;
                }
                ind = i+1;
                while(ind < rows){
                    if(matrix[ind][j] != 0){
                        matrix[ind][j] = -1;
                    }
                    ind++;
                }
                ind = j-1;
                while(ind >= 0){
                    if(matrix[i][ind] != 0){
                        matrix[i][ind] = -1;
                    }
                    ind--;
                }
                ind = j+1;
                while(ind < cols){
                    if(matrix[i][ind] != 0){
                        matrix[i][ind] = -1;
                    }
                    ind++;
                }
            }
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] <= 0){
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{3,2,0,1},{0,2,3,4},{1,2,3,4},{2,6,5,1}};
    setZeroes(matrix);
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Approach 2
// void setZeroes(vector<vector<int>>& matrix) {
//         int rows = matrix.size(), cols = matrix.size();
//         vector<int> dummy1(rows, -1) , dummy2(cols, -1);
//         for(int i=0; i<rows;i++){
//             for(int j=0; j<cols; j++){
//                 if(matrix[i][j] == 0){
//                     dummy1[i] = 0;
//                     dummy2[j] = 0;
//                 }
//             }
//         }
//         for(int i=0; i<rows;i++){
//             for(int j=0; j<cols; j++){
//                 if(dummy1[i] == 0 || dummy2[j] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// Time Complexity: O(N*M + N*M)
// Space Complexity: O(N)
// ---------------------------------------------------------------------------
// Approach3
// void setZeroes(vector<vector<int>>& matrix) {
//         int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
//         for (int i = 0; i < rows; i++) {
//             if (matrix[i][0] == 0) col0 = 0;
//             for (int j = 1; j < cols; j++) {
//                 if (matrix[i][j] == 0) {
//                     matrix[i][0] = 0;
//                     matrix[0][j] = 0;
//                 }
//             }
//         }
//         for (int i = rows - 1; i >= 0; i--) {
//             for (int j = cols - 1; j >= 1; j--) {
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//             if (col0 == 0) {
//                 matrix[i][0] = 0;
//             }
//         }

//     }
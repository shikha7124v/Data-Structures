// Whenever you will get 0 in the matrix, make that particular ith and jth row col as zero 
#include<bits/stdc++.h>
using namespace std;
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
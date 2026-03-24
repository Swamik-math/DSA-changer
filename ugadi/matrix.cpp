#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int> zerocol(col, 0);
        vector<int> zerorow(row, 0);

    // track the zeros in the column and the rows
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    zerorow[i] = 1;
                    zerocol[j] = 1;
                }
            }
        }

        // set all the elements 0 , which are marked as 1 in the row arr
        // for(int i=0; i<row; i++){
        //     if(zerorow[i] == 1){
        //         for(int j=0; j<col; j++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // // set all the elements 0 , which are marked as 1 in the col arr
        // for(int j=0; j<col; j++){
        //     if(zerocol[j] == 1){
        //         for(int i=0; i<row; i++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        

    }
};
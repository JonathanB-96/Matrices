//
//  main.cpp
//  matrix_project
//
//  Created by Jonathan Buttigieg on 04/11/2020.
//

#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector< vector<float> > matrix_size1(7, vector<float>(5, 0.4));
    vector< vector<float> > matrix_size2(7, vector<float>(5, -0.15));
    
    Matrix Matrix_A(matrix_size1);
    
    Matrix_A.matrix_print();

    cout << "Matrix A no. of Rows = "<< Matrix_A.getRows() << endl;
    cout << "Matrix A no. of Rows = "<< Matrix_A.getCols() << endl;
    
    Matrix Transpose_A(Matrix_A.matrix_transpose());
    
    Transpose_A.matrix_print();
    
    Matrix Matrix_B(matrix_size2);
    //Matrix_B.setGrid(matrix_size2);
    Matrix_B.matrix_print();
    
    Matrix Matrix_Sum(Matrix_A.matrix_add(Matrix_B));
    Matrix_Sum.matrix_print();
    
    //Matrix Matrix_error(Matrix_A.matrix_add(Transpose_A));
    
    return 0;
}

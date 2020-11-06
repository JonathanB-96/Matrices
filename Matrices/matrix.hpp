//
//  matrix.hpp
//  matrix_project
//
//  Created by Jonathan Buttigieg on 04/11/2020.
//

#ifndef matrix_hpp
#define matrix_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

class Matrix
{
    
private:
    
    //variable type declarations
    std::vector<std::vector<float> > grid; //2D varaible declaration of type vector vector
    std::vector<float>::size_type rows;
    std::vector<float>::size_type cols;
    
public:
    
    //constructor function declarations
    Matrix();
    Matrix(std::vector<std::vector< float> >);
    
    //set functions
    void setGrid(std::vector<std::vector< float> >);
    
    //get functions
    std::vector<std::vector< float> > getGrid();
    std::vector<float>::size_type getRows();
    std::vector<float>::size_type getCols();
    
    //matrix functions
    Matrix matrix_transpose();
    Matrix matrix_add(Matrix);
    
    //print function
    void matrix_print();
};

#endif /* matrix_hpp */

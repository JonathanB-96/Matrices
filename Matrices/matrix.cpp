//
//  matrix.cpp
//  matrix_project
//
//  Created by Jonathan Buttigieg on 04/11/2020.
//

#include "matrix.hpp"

//function implementations

Matrix::Matrix(){
    
    //Deafult 2D 7x5 matrix with 0.0 elements
    std::vector<std::vector<float> > initial_grid(7, std::vector<float>(5, 0.0));
    
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

Matrix::Matrix(std::vector<std::vector<float> > initial_grid){
    
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
    
}

void Matrix::setGrid(std::vector<std::vector<float> > new_grid){
    
    grid = new_grid;
    rows = new_grid.size();
    cols = new_grid[0].size();
}

std::vector<std::vector<float> > Matrix::getGrid(){
    
    return grid;
}

std::vector<float>::size_type Matrix::getRows(){
    
    return rows;
}

std::vector<float>::size_type Matrix::getCols(){
    
    return cols;
}

Matrix Matrix::matrix_transpose(){
    std::vector<std::vector <float> > new_grid;
    std::vector<float> row;
    
    for(int i=0; i<cols; i++){
        row.clear();
        
        for(int j=0; j<rows; j++){
            row.push_back(grid[j][i]);
        }
        new_grid.push_back(row);
    }
    return Matrix(new_grid);
}

Matrix Matrix::matrix_add(Matrix other){
    
    if((rows != other.getRows()) || (cols != other.getCols())){
        throw std::invalid_argument("Size of matrices do not match");
    }
    
    std::vector<std::vector<float> > new_grid;
    std::vector<float> new_row;
    
    for(int i=0; i<rows; i++){
        new_row.clear();
        for(int j=0; j<cols; j++){
            new_row.push_back(grid[i][j] + other.getGrid()[i][j]);
        }
        new_grid.push_back(new_row);
    }
    return Matrix(new_grid);
}

void Matrix::matrix_print(){
    
    std::cout << std::endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

#include "matrix.h"

/* TODO: Define the default constructor. Remember the syntax is
**      Classname::ClassName() {
**    
**          initialize variables
**    
**       }
**
**
**      You need to initialize the grid variable to a default value such as
**      a 4x4 matrix with all zeros.
**
**      Then initialize the rows variable, and the cols variable using the
**      vector size method. For example myvector.size() will give the size of
**      a vector. For a 2-dimensional vector, myvector.size() would be the
**      number of rows in a matrix.
**
*/

    // Remember, we defined two constructor functions in matrix.h, that's why we need to define what is inside 
    // the construction function twice for not
    Matrix::Matrix(){
        // Initialize initial_grid
        std::vector< std::vector<float> > initial_gird(4, std::vector<float> (4,0));
        // Save the value of initial_grid to grid. We already declared grid in matrix.h
        grid = initial_gird;
        // Save the size of grid to rows and columns. We alread defined them in matrix.h
        rows = grid.size();
        cols = grid[0].size();

    }

/* TODO: Define a constructor that receives a 2-Dimensional vector
**       and assigns the vector to the grid variable. 
**       
**      Remember the syntax is
**      Classname::ClassName(datatype inputvariablename) {
**    
**          classvariable = inputvariablename
**    
**       }
**
**      Then initialize the rows variable, and the cols variable exactly
**      as you did for the default constructor.
**
*/

    Matrix::Matrix(std::vector< std::vector<float> > initial_grid) {
        grid = initial_grid;
        rows = initial_grid.size();
        cols = initial_grid[0].size();

    }
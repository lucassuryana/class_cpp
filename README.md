# class_cpp
In this project, I implemented a concept of class in C++.

# 1. Lesson learned
- Why is it important to use private and public variable? 
- Important of Set and Get. Both are only a function to set value and to get value.
- Why do we need header (.h) file?
    - Some experts recommend to put the minimum number of #include into a header file, otherwise the library might be called several times that might cause error.
- Why do we need to separate file, like main.cpp and gaussia.cpp?
- We cannot compile C++ code if variables are declared more than once. Not only the same variable, function, class, etc works the same. Example
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string color; // We declare a variable called color
    int windows;
    
    color = "blue";
    windows = 5;
    
    string color; // Again, we declared another variable called color. This will produce an error
    windows= "red";
    
    cout << "This " << color << " house has " << windows << " windows";
    
    return 0;
    
}
```
- Matrix class has three functions that belongs to separate categories: constructor functions, set and get function, and functions for Matrix functionality.
- Set and get function syntax are conventions rather than specific to C++ syntax. Set function typically does not return anything because its function only to change the value of variable. Thus, we use void set().
- To avoid declaration of class more than once, we can use 'ifndef' and 'define' in .h file we have. For instance, for matrix.h file, we can add this:
```cpp
#ifndef MATRIX_H
#define MATRIX_H
..
..
#endif /* MATRIX_H */
```

## 2. Using a class in C++ (UsingAClassC++)
In this folder you will find two .cpp files: main.cpp and gaussian.cpp. If you open main.cpp it has three parts:
- a header
- a class declaration
- a main function

### Header
We use this a lot in our C++ files such as #include <iostream>

### Class declaration
We need to declare the Class to give main function access to the Gaussian class.

### Main funciion
We can instantiate the object of Gaussian class inside the main function.

## 3. Inclusion_Guards_II
The code will not work because '#include "engine.h' called twice. First in 'main.cpp' and in 'car.h'.

## 4. Inclusion_Guards_III
This code provide solusion to the problem in 'Inclusion_Guards_II'. We can use '# ifndef' to avoid such situations.

## 5. Class Variables (ClassVariables)
General syntax for declaring C++ class:
```cpp
class Classname
{
	private:
		declare private variables;
		declare private functions;

	public:
		declare public variables;
		declare public functions;
};
```

To declare variables we can use template as follows:
```cpp
std::vector<float>::size_type variablename;
```

The size_type is an unsigned integer that define the size of the vector.

## 6. Class Function Declarations (ClassFunctionDeclarations)
Three components of function declarations: constructor, set and get functions, and matrix functionality. Template as follows:

```cpp
class Matrix 
{

        private:

            std::vector< std::vector<float> > grid;
            std::vector<float>::size_type rows;
            std::vector<float>::size_type cols;

        public:

            // constructor function declarations
            Matrix ();
            Matrix (std::vector< std::vector<float> >);

            // set and get function declarations
            void setGrid(std::vector< std::vector<float> >);

            std::vector< std::vector<float> > getGrid();
            std::vector<float>::size_type getRows();
            std::vector<float>::size_type getCols();

            // matrix function declarations
            std::vector< std::vector<float> > matrix_transpose();
            std::vector< std::vector<float> > matrix_addition(Matrix);
            void matrix_print();  
};
```

### 6.1 Set and get function declaration
Set and get function allo use to access private variables. An object cannot access private variables directly, thus, we use set and get functions. Example of declaration set and get functions:

```cpp
class Gaussian
{
    private:
        ...

    public:
        ...

        void setMu(float);
        void setSigma2(float);

        float getMu();
        float getSigma2();

     ....
};
```

### 6.2 Functions for Matrix Functionality
To define this function, we need to specify the return datatype, the function name, and the datatype for the input. For example:
```cpp
class Gaussian
{
    ....

    public:

       ...

        // functions to evaluate 
        float evaluate (float);
        Gaussian multiply (Gaussian);
        Gaussian add (Gaussian);
};
```

## 7. Constructor Functions (ConstructorFunctions)
Difference between Python constructor and C++ constructor, in Python:
```python
def __init__(self, variable1, variable2, ..., variablen):
	self.variable1 = variable1
	self.variable2 = variable2
	self.variablen = variablen
```
and in C++:
```cpp
Classname (datatype variable1, datatype variable2, …, datatype variablen);
```

### 7.1 Defining constructor functions
Once you declared constructor function, you need to define them in .cpp file.
Template:
```cpp
// empty constructor function syntax
Classname::ClassName() {

	constructor function definition
}

// constructor function syntax
Classname::ClassName(datatype variable1, datatype variable2, …, datatype variablen) {

	constructor function definition

}
```
For instance, the declaration of constructor function for Gaussian.
```cpp
Gaussian::Gaussian() {
	mu = 0;
	sigma2 = 1;	
}

Gaussian::Gaussian (float average, float sigma) {
	mu = average;
	sigma2 = sigma;
}
```
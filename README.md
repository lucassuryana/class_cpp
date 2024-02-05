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
# class_cpp
In this project, I implemented a concept of class in C++.

# Lesson learned
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


## Using a class in C++ (UsingAClassC++)
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
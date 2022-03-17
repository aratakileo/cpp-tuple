# Tuple
Tuple for C++

### Why would I do that?
I wrote this to understand how the `std:tuple` standard library works.

### Example to use
Code in `main.cpp`
```cpp
#include "tuple.hpp"
#include <iostream>
#include <string>

int main() {
    tuple::tuple<int, float, std::string> _tuple;

    tuple::at<0>(_tuple) = 123;
    tuple::at<1>(_tuple) = 12.3;
    tuple::at<2>(_tuple) = "Hello World!";

    std::cout << tuple::at<0>(_tuple) << std::endl;
    std::cout << tuple::at<1>(_tuple) << std::endl;
    std::cout << tuple::at<2>(_tuple) << std::endl;

    return 0;
}
```

cpp-pointers-playground
=======================
### Swap
```cpp
#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
 
#include <type_traits>

struct D 
{
    D() { std::cout << "D::D\n"; }
    ~D() { std::cout << "D::~D\n"; }
};


void swapAsInTextbook(int *a, int *b)
{
    // set NULL to break this program
    a = NULL;
    int temp = *a;
    *a = *b;
    *b = temp;
}

// WIP
void swapUsingDoublePointer(int** adouble_ptr, int** bdouble_ptr) {
    int** temp = adouble_ptr;
    int** tt = temp;
    *adouble_ptr = *bdouble_ptr;


  
    
    // int* aptr = *adouble_ptr;  //0x3
    // int* bptr = *bdouble_ptr; //0x4

    // *adouble_ptr = *bdouble_ptr;




    //bptr = **temp;
    

    // int* temp = *a;
    // *a = *b;
    // *b = temp;
    // they're swapped!
}

// WIP
template<typename T>
void swapUsingMove(T&& x, T&& y)
{    
    T tmp(std::move(x)); 
    x = std::move(y); 
    y = std::move(tmp);
}

#include <iostream>
#include <memory>

int main() {
    int a = 3;
    int b = 4;

    int* aptr = &a;
    int* bptr = &b;
    std::cout << a << " " << b << std::endl;
    
    //swapAsInTextbook(&a, &b);

    //std::cout << "!!!" << a << " " << b << std::endl;


    std::unique_ptr<int> c = std::make_unique<int>(5);
    std::unique_ptr<int> d = std::make_unique<int>(6);

    std::cout << *c << " " << *d << std::endl;

    swapUsingMove(std::move(c), std::move(d));

    std::cout << *c << " " << *d << std::endl;

    int** adouble_ptr = &aptr;
    int** bdouble_ptr = &bptr;

    swapUsingDoublePointer(adouble_ptr, bdouble_ptr);

    std::cout << a << " " << b << std::endl;
    return 0;
}
```

### Notes
- Swapping can not work by solely using double pointers (pointer is a reactive thing + pointer as function parameter = copying address values)
 - There's why we need a temp in primitive integer type, or
 - in C++ there is rvalue for move semantics

### TODOs
- [**Passing By Reference To Const in C++ | QuantStart**](https://www.quantstart.com/articles/Passing-By-Reference-To-Const-in-C/)
- [数组指针、函数指针和尾置返回类型 - ddev - 博客园](https://www.cnblogs.com/the-capricornus/p/6066379.html)
- [SMART POINTERS in C++ (std::unique_ptr, std::shared_ptr, std::weak_ptr)](https://www.youtube.com/watch?v=UOB7-B2MfwA)
- [**Rvalue Reference Quick Look**](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2027.html#Move_Semantics)
- [c++ - What is std::move(), and when should it be used? - Stack Overflow](https://stackoverflow.com/questions/3413470/what-is-stdmove-and-when-should-it-be-used?rq=1)
- [C++ 值传递、指针传递、引用传递详解 - 代码先锋网](https://www.codeleading.com/article/39855142194/#google_vignette)
- [c++ - How does the standard library implement std::swap? - Stack Overflow](https://stackoverflow.com/questions/25286544/how-does-the-standard-library-implement-stdswap)

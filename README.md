cpp-pointers-playground
=======================
### Swap
```cpp
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

#include <iostream>

int main() {
    int a = 3;
    int b = 4;

    std::cout << a << " " << b << std::endl;
    
    swap(&a, &b);

    std::cout << a << " " << b << std::endl;
    return 0;
}
```
### TODOs
- [**Passing By Reference To Const in C++ | QuantStart**](https://www.quantstart.com/articles/Passing-By-Reference-To-Const-in-C/)
- [数组指针、函数指针和尾置返回类型 - ddev - 博客园](https://www.cnblogs.com/the-capricornus/p/6066379.html)
- [SMART POINTERS in C++ (std::unique_ptr, std::shared_ptr, std::weak_ptr)](https://www.youtube.com/watch?v=UOB7-B2MfwA)
- [**Rvalue Reference Quick Look**](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2027.html#Move_Semantics)
- [c++ - What is std::move(), and when should it be used? - Stack Overflow](https://stackoverflow.com/questions/3413470/what-is-stdmove-and-when-should-it-be-used?rq=1)
- [C++ 值传递、指针传递、引用传递详解 - 代码先锋网](https://www.codeleading.com/article/39855142194/#google_vignette)

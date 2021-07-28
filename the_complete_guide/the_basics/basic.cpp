#include "basic.h"

#include <iostream>

namespace basic_1_1
{
    template <typename T>
    T max(T a, T b)
    {
        return b < a ? a : b;
    }

    void basic_1_1()
    {
        // 1.1 Using the Template
        std::cout << max(10, 20) << std::endl;
        std::cout << max<double>(4, 20.65) << std::endl;
    }
}

namespace basic_1_2
{
    template <typename T>
    T max(T const &a, T const &b)
    {
        return b < a ? a : b;
    }

    template<typename T>
    void f(T l = "")
    {
        (void)l;
    }

    template<typename T = std::string>
    void f1(T l = "")
    {
        (void)l;
    }

    void basic_1_2()
    {
        int i = 42;
        const int c = 42;
        max(i, c); // T is deduced as int
        max(c, c); // T is deduced as int
        int &ir = i;
        max(i, ir); // T is deduced as int

        // max(4, 7.2); // Error T can be dediced as int or double
        // max("hello", std::string{"world"}); // Error T can be char or std::string

        //solution
        max(static_cast<double>(4), 7.2);
        // or
        max<double>(4, 7.2);

        // type deduction for detault argument
        f(1); // ok
        f<int>(1); // ok
        // f(); // Error, cannot deduce T
        f1();
    }
}

int main()
{
    basic_1_1::basic_1_1();
    basic_1_2::basic_1_2();
    return 0;
}
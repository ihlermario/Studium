#include <iostream>
#include <cstdint>

using MyCppStruct = struct
{
    int8_t a = 0;
    float b = 5.43F;

    void print() const
    {
        std::cout << "a = " << a << "; b = " << b << std::endl;
    }
};


auto main() -> int
{
    MyCppStruct my_struct;
    std::cout << "Hello World" << std::endl;
    std::cout << "Printing struct my_struct" << std::endl;
    my_struct.print();
}
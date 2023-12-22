#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

template <typename T>
T boost_factorial(int num)
{
    T fact = 1;

    for (int i = num; i > 1; --i)
    {
        fact *= i;
    }

    return fact;
}
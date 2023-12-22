#include <iostream>
#include "factorial.cpp"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/constants/constants.hpp>

using boost::multiprecision::cpp_dec_float_50;

int main()
{
    cpp_dec_float_50 sum = 0;

    for (int k = 0; k < 100; ++k)
    {
        cpp_dec_float_50 numerator = boost_factorial<cpp_dec_float_50>(4 * k) * (1103 + 26390 * k);
        cpp_dec_float_50 denominator = pow(boost_factorial<cpp_dec_float_50>(k), 4) * pow(396, 4 * k);

        sum += numerator / denominator;
    }

    cpp_dec_float_50 result = (2 * std::sqrt(2) / 9801) * sum;

    result = 1 / result;

    std::cout << "PI = " << result << "  Ramanujan\n";
    std::cout << "PI = " << boost::math::constants::pi<cpp_dec_float_50>() << "  Boost library\n";
    

    return 0;
}

// prog5 - 使用for语句重写从1加到10的程序
#include <iostream>

int main()
{
    int sum = 0;
    // 从1加到10
    for (int val = 1; val <= 10; val++)
    {
        sum += val; // 等价于sum = sum + val
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}

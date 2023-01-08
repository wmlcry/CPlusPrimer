// prog4.cpp - 求1到10这10个数之和
#include <iostream>

int main()
{
    int sum = 0;
    int val = 1;
    // 只要val的值小于10，while循环就会持续运行
    while (val <= 10)
    {
        sum += val; // 将sum+val赋给sum
        ++val;      // 将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;   
}


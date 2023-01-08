// #include <iostream>
// #include "Sales_item.h"

// int main()
// {
//     Sales_item book;
//     std::cout << "请输入销售记录: " << std::endl;
//     while(std::cin >> book)
//     {
//         std::cout << "ISBN、售出本数、销售额和平均售价为: " << book <<std::endl;
//     }
//     return 0;
// }

// 1.21 
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    
    std::cout << "请输入销售记录: " << std::endl;
    std::cin >> book1 >> book2;
    std::cout << "ISBN、售出本数、总销售额和平均售价为: " << book1 + book2 <<std::endl;
    return 0;
}
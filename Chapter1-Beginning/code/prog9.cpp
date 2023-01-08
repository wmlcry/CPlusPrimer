#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    int num = 1;
    std::cout << "请输入若干销售记录: " << std::endl;
    if (std::cin >> book1)
    {
        while (std::cin >> book2)
        {
            if (compareIsbn(book1, book2)) // ISBN相同
            {
                num++;
            }
            else // ISBN不同
            {
                std::cout << book1.isbn() << "共有" << num << "条销售记录" << std::endl;
            }
            
        }
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;
}
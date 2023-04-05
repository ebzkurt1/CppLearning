
#include <iostream>
#include "Sales_item.h"

void print_sales_item(Sales_item item) {
    std::cout << item << std::endl;
    std::cout << item.isbn() << std::endl;
}

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    print_sales_item(item1);
    print_sales_item(item2);
    std::cout << item1 + item2 << std::endl;
    return 0;
}

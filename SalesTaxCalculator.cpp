#include <iostream>
using namespace std;

int main() {
    const double rate= 0.075;
    double item_price;
    cout << "What is the price of the item?"<< endl;
    cin >> item_price;
    double sales_tax=rate*item_price;
    double total_cost=(rate+1)*item_price;;
    cout << "Original price: " << item_price << " sales tax: "<< sales_tax << " Total cost: " << total_cost << endl;
    return 0;
}

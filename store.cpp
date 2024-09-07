#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string name;
    int num_items;
    double total_price = 0;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter the number of items you bought: ";
    cin >> num_items;

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Arabic Store" << endl;
    cout << "------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "------------------------" << endl;

    // Ask for the names, quantities, and prices of the items
    vector<string> item_names;
    vector<int> item_quantities;
    vector<double> item_prices;
    int num_items_entered = 0;
    while (num_items_entered < num_items) {
        string item_name;
        int item_quantity;
        double item_price;
        cout << "Enter the name of item " << num_items_entered + 1 << ": ";
        cin >> item_name;
        cout << "Enter the quantity of item " << num_items_entered + 1 << ": ";
        cin >> item_quantity;
        cout << "Enter the price of item " << num_items_entered + 1 << ": ";
        cin >> item_price;
        item_names.push_back(item_name);
        item_quantities.push_back(item_quantity);
        item_prices.push_back(item_price);
        total_price += (item_quantity * item_price);
        num_items_entered++;
    }

    // Print out the list of items
    cout << "List of items:" << endl;
    for (int i = 0; i < num_items; i++) {
        cout << item_quantities[i] << " x " << item_names[i] 
             << " @ $" << item_prices[i] 
             << " each" 
             << endl;
    }

    cout << "------------------------" << endl;
    cout << "Total price: $" << total_price << endl;


    return 0;
}
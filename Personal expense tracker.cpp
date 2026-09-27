#include 
#include 
#include 
#include 

using namespace std;
int main() {
    vector items = {"Notebook", "Snack"};
    vector prices = {3.50, 2.00};
    double total = 0.0;

    cout << fixed << setprecision(2);
    cout << "--- My Expense Tracker ---\n";

    for(size_t i = 0; i < items.size(); i++) {
        cout << items[i] << ": $" << prices[i] << endl;
        total += prices[i];
    }

    cout << "--------------------------\n";
    cout << "Total Spent: $" << total << endl;

    return 0;
}

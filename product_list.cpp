#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> list;
    string choice;
    string replacement = "Milk";

    cout << "--- Product List Creator ---" << endl;
    cout << "Please add 3 products to the list:\n" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Product #" << i + 1 << ": ";
        getline(cin, choice);
        list.push_back(choice);
    }

    // Changing the last item to Milk
    cout << "\nChanging " << list.back() << " to " << replacement << "..." << endl;

    list.pop_back();
    list.push_back(replacement);

    cout << "\nUpdated Product List:" << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << i + 1 << ". " << list[i] << endl;
    }

    cout << "\nTotal items in list: " << list.size() << endl;

    return 0;
}
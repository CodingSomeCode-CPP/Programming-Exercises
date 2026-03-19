#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // A vector that holds other vectors. 
    // It's like a list where every item is another list.
    vector<vector<int>> dynamicMap = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} // Added a third row just because I can!
    };

    cout << "--- The Dynamic Vector Map ---" << endl;

    // Instead of using hardcoded numbers like '3', 
    // we use .size() so it works no matter how big the map gets.
    for (int i = 0; i < dynamicMap.size(); i++) {

        for (int j = 0; j < dynamicMap[i].size(); j++) {
            cout << dynamicMap[i][j] << " ";
        }

        cout << endl; // New line after each row
    }

    // Adding a new row to the bottom just to show off
    cout << "\nLet's add one more row..." << endl;

    vector<int> newRow = { 10, 11, 12 };
    dynamicMap.push_back(newRow);

    // Printing again to see the change
    for (int i = 0; i < dynamicMap.size(); i++) {
        for (int j = 0; j < dynamicMap[i].size(); j++) {
            cout << dynamicMap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

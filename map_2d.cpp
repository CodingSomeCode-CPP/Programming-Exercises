#include <iostream>
#include <string>

using namespace std;

int main()
{
	// This is a 2D array. The [2] is rows and [3] is columns.
	int map[2][3] = {
		{1, 2, 3}, // Row 0
		{4, 5, 6}  // Row 1
	};

	// We need two loops because it's a grid. 
	// The first one goes through the rows.
	for (int i = 0; i < 2; i++) {
		
		// This second one goes through the numbers inside the row.
		for (int j = 0; j < 3; j++) {
			cout << map[i][j] << " ";
		}
		
		// After one row is done, we jump to a new line so it looks like a square.
		cout << endl;
	}

	return 0;
}

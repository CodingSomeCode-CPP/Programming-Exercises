# C++ Product List Project

This is a simple program I made to practice using **vectors** and **loops** in C++.

### What it does:
1. Asks the user to input 3 different products.
2. Uses a `for` loop to save them into a vector.
3. Automatically replaces the last item in the list with "Milk".
4. Prints out the final list and the total count.

### What I learned:
* How to use `push_back()` to add items.
* Using `pop_back()` to remove the last item.
* Getting the size of a vector using `.size()`.



## Update: 2D Arrays (March 2026)

I just added `map_2d.cpp`. This one was a bit harder because it uses nested loops (a loop inside another loop).

### What I learned:
* 2D arrays are like grids with rows and columns.
* To print a grid, you have to use two `for` loops.
* `cout << endl;` is super important inside the first loop, otherwise the numbers just stay in one long line.



## Level Up: Vectors inside Vectors (Dynamic Maps)

I upgraded the map logic! Instead of a basic array, I'm now using a `vector<vector<int>>`. 

### Why this is better:
* **No Fixed Size:** With the old array, I could only have 2 rows. With vectors, I can use `.push_back()` to add new rows whenever I want.
* **Flexibility:** Each row could technically have a different number of items (though that's a bit confusing for now).
* **Safe Loops:** I used `.size()` in my loops so the program never crashes even if the map changes.

### What I learned:
* How to nest vectors: `vector<vector<type>>`.
* How to add a whole new row by creating a temporary vector and pushing it into the main one.

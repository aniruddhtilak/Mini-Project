# Mini-Project
Final Mini Project of CPPDS course (Sem-3)                                                                                                                 
**Problem Statement -** Food items, Stationery items and Sports items are arriving continuously in the supermarket randomly but in a queue. 
Sort and store the items in the three different stacks and update and display the individual count. Also, display the contents of individual stacks.


The code makes use of arrays to implement stacks and queues as well as classes and objects.
In this code, classes are used to define a custom data structure that represents a stack. This is a common use of object-oriented programming and classes.
The `MyStack` class provides a custom implementation of a stack data structure. It encapsulates the behaviour of a stack, which includes the ability to push items onto the stack, pop items from the stack, and check if the stack is empty. This abstraction is useful for managing and organizing items in each category (food, stationery, sports).



**Algorithm -** 
1. Define a class `MyStack` to represent a stack data structure with `push`, `pop`, and `isEmpty` methods.

2. Declare and initialize arrays for three different menus: `sports_menu`, `food_menu`, and `stationery_menu`, each containing 10 items.

3. Create three instances of the `MyStack` class to represent stacks for sports items, food items, and stationery items, respectively.

4. Initialize counters for each category: `foodcount`, `stationerycount`, and `sportscount` to keep track of the number of items in each category.

5. Display each menu to the user:
   - Print "Sports Items" and list the items in the `sports_menu`.
   - Print "Food Items" and list the items in the `food_menu`.
   - Print "Stationery Items" and list the items in the `stationery_menu`.

6. Enter a loop to allow the user to input items until they choose to exit:
   - Prompt the user to enter an item.
   - Read the item using `fgets`.
   - Remove the newline character if it exists at the end of the input.
   - Convert the input to lowercase for case-insensitive comparison.
   - Check which category the item belongs to using the `isInArray` function.
   - Push the item onto the corresponding stack and increment the category's count.
   - Display a message indicating that the item has been added or report an unrecognized category if necessary.
   - Ask the user if they want to enter another item, and continue the loop if the input is 'y' or 'Y'.

7. After the user chooses to exit the loop, display the items and counts for each category:
   - Print "Food Stack", display the total number of food items, and pop items from the `foodStack` while printing them.
   - Print "Stationery Stack", display the total number of stationery items, and pop items from the `stationeryStack` while printing them.
   - Print "Sports Stack", display the total number of sports items, and pop items from the `sportsStack` while printing them.

8. End the program.



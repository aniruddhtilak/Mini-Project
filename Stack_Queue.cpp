#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAX_ITEMS = 100; // Maximum number of items
const int MENU_SIZE = 10; // Size of each menu

class MyStack {
public:
    MyStack() : top(-1) {}

    void push(string item) {
        if (top < MAX_ITEMS - 1) {
            items[++top] = item;
        }
    }

    string pop() {
        if (top >= 0) {
            return items[top--];
        }
        return "";
    }

    bool isEmpty() {
        return top == -1;
    }

private:
    string items[MAX_ITEMS];
    int top;
};

bool isInArray(const string& item, const string* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (item == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string sports_menu[MENU_SIZE] = {"soccer ball", "basketball", "tennis racket", "baseball", "volleyball", "hockey stick", "badminton racket", "running shoes", "yoga mat", "swimsuit"};
    string food_menu[MENU_SIZE] = {"cereal", "canned soup", "pasta", "rice", "noodles", "spices", "pickle", "curry mix", "papad", "frozen paratha"};
    string stationery_menu[MENU_SIZE] = {"pencil", "pen", "notebook", "eraser", "stapler", "scissors", "ruler", "tape", "clips", "highlighter"};

    MyStack foodStack;
    MyStack stationeryStack;
    MyStack sportsStack;

    //declaring and initialising flags for each category.
    int foodcount = 0;  
    int stationerycount = 0;
    int sportscount = 0;

    cout << "Sports Items: " << endl;
    for (int i = 0; i < MENU_SIZE; i++) {
        cout << sports_menu[i] << endl;
    }
    cout << "--------------------" << endl;

    cout << "Food Items: " << endl;
    for (int j = 0; j < MENU_SIZE; j++) {
        cout << food_menu[j] << endl;
    }
    cout << "--------------------" << endl;

    cout << "Stationery Items: " << endl;
    for (int k = 0; k < MENU_SIZE; k++) {
        cout << stationery_menu[k] << endl;
    }
    cout << "--------------------" << endl;

    char continueInput;
    char item[MAX_ITEMS];

    do {
        cout << "Enter an item: ";
        fgets(item, sizeof(item), stdin);
    // ensuring that the space between item names with space are accepted.
        size_t length = strlen(item);
        if (length > 0 && item[length - 1] == '\n') {
            item[length - 1] = '\0';
        }
    //Changing the input to lowercase to avoid errors while checking in loop.
        for (int i = 0; i < length; i++) {
            item[i] = tolower(item[i]);
        }
    //checking and pushing the items in the queue entered by the user in their respective categories.
        if (isInArray(item, food_menu, MENU_SIZE)) {
            foodStack.push(item);
            cout << "Item added!" << endl;
            foodcount++;
        } else if (isInArray(item, stationery_menu, MENU_SIZE)) {
            stationeryStack.push(item);
            cout << "Item added!" << endl;
            stationerycount++;
        } else if (isInArray(item, sports_menu, MENU_SIZE)) {
            sportsStack.push(item);
            cout << "Item added!" << endl;
            sportscount++;
        } else {
            cout << "Item category not recognized: " << item << endl;
        }
    //Giving the user an option to either continue or exit with the final count of items.
        cout << "Do you want to enter another item? (y/n): ";
        cin >> continueInput;
        cin.ignore();

    } while (continueInput == 'y' || continueInput == 'Y');
   // Printing the final list of items which were enetered by the user with their count.
    cout << "\nFood Stack:" << endl;
    cout << "The total number of items are: " << foodcount << endl;
    while (!foodStack.isEmpty()) {
        cout << foodStack.pop() << endl;
    }

    cout << "\nStationery Stack:" << endl;
    cout << "The total number of items are: " << stationerycount << endl;
    while (!stationeryStack.isEmpty()) {
        cout << stationeryStack.pop() << endl;
    }

    cout << "\nSports Stack:" << endl;
    cout << "The total number of items are: " << sportscount << endl;
    while (!sportsStack.isEmpty()) {
        cout << sportsStack.pop() << endl;
    }

    return 0;
}

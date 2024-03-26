// 7-3 Project Three Submission
// 02/20/2024

#include <iostream>
#include <limits> // for std::numeric_limits
#include "ItemTracker.h"

int main() {
    ItemTracker tracker("CS210_Project_Three_Input_File.txt"); // initializes the tracker with the input file

    while (true) {
        std::cout << "\nMenu:\n"
            << "1. Search for item frequency\n"
            << "2. Print all item frequencies\n"
            << "3. Print histogram of item frequencies\n"
            << "4. Exit\n"
            << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        // clears the input buffer to handle cases where cin gets corrupted by wrong input
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::string item;
        switch (choice) {
        case 1:
            std::cout << "Enter item name: ";
            std::getline(std::cin, item); // used getline to allow for item names with spaces
            tracker.searchItemFrequency(item);
            break;
        case 2:
            tracker.printAllFrequencies();
            break;
        case 3:
            tracker.printHistogram();
            break;
        case 4:
            std::cout << "Exiting program.\n";
            return 0; // exits the loop
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}




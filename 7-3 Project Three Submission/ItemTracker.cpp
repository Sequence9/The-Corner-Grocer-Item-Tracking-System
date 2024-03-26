// ItemTracker.cpp
#include "ItemTracker.h"
#include <fstream>
#include <iostream>
#include <algorithm>

ItemTracker::ItemTracker(const std::string& inputFile) {
    loadItemsFromFile(inputFile);
}

void ItemTracker::loadItemsFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string item;
    while (getline(file, item)) {
        std::transform(item.begin(), item.end(), item.begin(), ::tolower); // converts item to lowercase for simplicity
        itemFrequencies[item] += 1; // increment the count for this item
    }
    file.close();
    backupDataToFile("frequency.dat");
}

// private method to backup data to a specified file
void ItemTracker::backupDataToFile(const std::string& filename) {
    std::ofstream outfile(filename);
    for (const auto& pair : itemFrequencies) { // iterates through all items and their frequencies
        outfile << pair.first << " " << pair.second << std::endl;
    }
    outfile.close();
}

void ItemTracker::searchItemFrequency(const std::string& item) {
    auto it = itemFrequencies.find(item);
    if (it != itemFrequencies.end()) {
        std::cout << it->first << " appears " << it->second << " times." << std::endl;
    }
    else {
        std::cout << item << " does not exist in the records." << std::endl;
    }
}

void ItemTracker::printAllFrequencies() {
    for (const auto& pair : itemFrequencies) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

void ItemTracker::printHistogram() {
    for (const auto& pair : itemFrequencies) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

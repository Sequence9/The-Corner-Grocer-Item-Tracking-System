// ItemTracker.h
#include <string>
#include <map>

class ItemTracker {
private:
    std::map<std::string, int> itemFrequencies; // using a map to associate items with their frequencies

    void loadItemsFromFile(const std::string& filename);
    void backupDataToFile(const std::string& filename);

public:
    ItemTracker(const std::string& inputFile);
    void searchItemFrequency(const std::string& item);
    void printAllFrequencies();
    void printHistogram();
};

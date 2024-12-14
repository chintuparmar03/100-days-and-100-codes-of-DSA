#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> monthDays = {
        {"JAN", 0}, {"FEB", 31}, {"MAR", 59}, {"APR", 90}, 
        {"MAY", 120}, {"JUN", 151}, {"JUL", 181}, {"AUG", 212}, 
        {"SEP", 243}, {"OCT", 273}, {"NOV", 304}, {"DEC", 334}
    };
    
    int T;
    cin >> T;
    
    while (T--) {
        string date;
        cin >> date;
        int day = stoi(date.substr(0, 2));
        string month = date.substr(2, 3);
        int dayOfYear = monthDays[month] + day;
        cout << dayOfYear << endl;
    }
    
    return 0;
}
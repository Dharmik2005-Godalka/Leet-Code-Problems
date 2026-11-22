#include <string>
#include <unordered_map>
#include <cctype>
using namespace std;

class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string, string> months = {
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},
            {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
            {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},
            {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };

        int i = 0;
        string day = "";

        // Read the day digits
        while (isdigit(date[i])) {
            day += date[i];
            i++;
        }

        // Skip the day suffix and space
        i += 3;

        string month = "";

        // Read the month
        while (date[i] != ' ') {
            month += date[i];
            i++;
        }

        // Skip the space before the year
        i++;

        string year = date.substr(i);

        if (day.size() == 1) {
            day = "0" + day;
        }

        return year + "-" + months[month] + "-" + day;
    }
};
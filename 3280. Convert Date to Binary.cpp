class Solution {
public:
    string convertIntToBin(string intString) {
        string binString = bitset<128>(stoi(intString)).to_string();
        return binString.substr(binString.find_first_not_of('0'));
    }
    string convertDateToBinary(string date) {
        string result;
        for (const auto &word : date | views::split('-')) {
            result += convertIntToBin(string{string_view(word)});
            result += '-';
        }
        result.pop_back();
        return result;
    }
};

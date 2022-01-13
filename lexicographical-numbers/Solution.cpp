class Solution {
public:
    vector<int> lexicalOrder(int n) {
        set<string> numbers;
        vector<int> result;
        for (int i=1; i <= n; i++) {
            numbers.insert(to_string(i));
        }
        
        for (set<string>::iterator num = numbers.begin(); num != numbers.end(); num++) {
            result.push_back(stoi(*num));
        }
        return result;
    }
};
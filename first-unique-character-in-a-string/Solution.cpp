class Solution {
public:
    int firstUniqChar(string s) {
        int answer = -1;
        map<char, int> charCount;
        for (int i = 0; i < s.length(); i++) {
            char chr = s[i];
            if (charCount.find(chr) != charCount.end()) {
                int count = charCount[chr];
                charCount[chr] = count+1;
            } else {
                charCount[chr] = 1;
            }
        }
        
        for (int i = 0; i < s.length(); i++) {
            char chr = s[i];
            if (charCount[chr] == 1) {
                answer = i;
                break;
            }
        }
        return (answer);
    }
};
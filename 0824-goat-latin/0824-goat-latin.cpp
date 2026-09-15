class Solution {
public:
    string toGoatLatin(string sentence) 
    {
        string ans = "";
        string word = "";
        int index = 1;
        for (int i = 0; i <= sentence.size(); i++) {
            if (i == sentence.size() || sentence[i] == ' ') 
            {
                if (word[0] == 'a' || word[0] == 'e' ||
                    word[0] == 'i' || word[0] == 'o' ||
                    word[0] == 'u' || word[0] == 'A' ||
                    word[0] == 'E' || word[0] == 'I' ||
                    word[0] == 'O' || word[0] == 'U') {
                    
                    word += "ma";
                }
                else {
                    word = word.substr(1) + word[0] + "ma";
                }

                word += string(index, 'a');

                if (index > 1)
                    ans += " ";

                ans += word;

                word = "";
                index++;
            }
            else {
                word += sentence[i];
            }
        }

        return ans;
    }
};


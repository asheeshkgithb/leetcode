class Solution {
public:
    int compress(vector<char>& chars) {
        int w = 0;

        for (int i = 0; i < chars.size(); i++) {
            int j = i;

            while (j < chars.size() && chars[j] == chars[i]) {
                j++;
            }

            chars[w++] = chars[i];

            int count = j - i;

            if (count > 1) {
                string num = to_string(count);

                for (char c : num) {
                    chars[w++] = c;
                }
            }

            i = j - 1;
        }

        return w;
    }
};
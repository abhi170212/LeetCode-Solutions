class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        // given two strings which have equivalent characters.
        // on the basis of the above two strings have to find the
        // lexicographically smallest
        // transformation of baseSTR.
        int n = s1.size();
        vector<char> ref(26);
        for (int i = 0; i < 26; i++)
            ref[i] = 'a' + i;
        // in our ref vector we will store the lexicographically smallest char
        // for each character throught transitivity property. for each index we
        // will find the lexicographically maximum char and replace it with the
        // lexicographically min char. this will take O(n*26) time.
        for (int i = 0; i < n; i++) {
            int a = s1[i] - 'a';
            int b = s2[i] - 'a';
            char lexicoBIG = max(ref[a], ref[b]);
            char lexicoSMALL = min(ref[a], ref[b]);
            for (auto& it : ref)
                if (it == lexicoBIG)
                    it = lexicoSMALL;
        }
        for (char& c : baseStr) {
            c = ref[c - 'a'];
        }
        return baseStr;
    }
};
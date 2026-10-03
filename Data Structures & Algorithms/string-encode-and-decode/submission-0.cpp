class Solution {
public:

    string encode(vector<string>& strs) {
        string final_str = "";
        
        for(string word: strs){
            final_str += to_string(word.length()) + "*" + word;
        }

        return final_str;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i=0;
        int n=s.size();

        while (i < n){
            int pos = s.find("*", i);

            int len = stoi(s.substr(i, pos - i));

            result.push_back(s.substr(pos+1, len));
            
            i = pos + len + 1;
        }
        
        return result;
    }
};
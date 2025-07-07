class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
        {
            return "1";
        }
        string p="1";
        while(n>1)
        {
            string s="";
            char t;
            int c=0;
            for(int j=0;j<p.size();j++)
            {
                if(j == 0)
                {
                    c++;
                    t=p[j];
                }
                else if(p[j] == p[j-1])
                {
                    c++;
                }
                else if(p[j] != p[j-1])
                {
                    s+=to_string(c)+t;
                    c=1;
                    t=p[j];
                }
            }
            s+=to_string(c)+t;
            p=s;
            n--;
        }
        return p;
    }
};
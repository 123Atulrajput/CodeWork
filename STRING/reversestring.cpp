//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int s= 0; int e=str.size()-1;
        for(int i=0;i<str.size()/2;i++){
            swap(str[s++],str[e--]);
        }
        return str;
    }
};

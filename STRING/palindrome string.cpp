//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s=0; int n=S.size()-1;
	    for(int i=0; i<S.size();i++){
	       if(S[s++]!=S[n--])
	       return 0;
	   }
	   return 1;
	}

};

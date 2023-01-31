class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string temp=A;
        int i=1;
        while(A.size()<B.size())
        {
            A+=temp;
            i++;
        }
        if(A.find(B)!=-1)return i;
        
        A+=temp;
        i++;
        if(A.find(B)!=-1)return i;
        
        return -1;
    }
};

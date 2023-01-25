class Solution{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        int ca[n] = {0};
        string lc = "", uc = "";
        for(int i=0; i<n; i++)
            if('A' <= str[i] && str[i] <= 'Z'){
                ca[i] = 1;
                uc += str[i];
            }else lc += str[i];
        sort(uc.begin(),uc.end());
        sort(lc.begin(),lc.end());
        int l=0, u=0;
        for(int i=0; i<n; i++)
            if(ca[i]) str[i]=uc[u++];
            else str[i]=lc[l++];
        return str;
    }
};

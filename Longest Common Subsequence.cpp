#include<bits/stdc++.h>

using namespace std;

int lcs(string a, string b, int m, int n)
{
    if(m==0 || n==0)return 0;
    else if (a[m-1]==b[n-1]){
        return 1+lcs(a, b, m-1, n-1);
    }
    else{
        return max(lcs(a, b, m-1, n), lcs(a, b, m, n-1));
    }
}

int main()
{
    string a ="AGGTAB";
    string b ="GXTXAYB";
    int m = a.size();
    int n = b.size();

    int k = lcs(a, b, m, n);
    cout<<"Longest Common Length: "<<k<<endl;

    return 0;
}

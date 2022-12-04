#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i,k=0;
 string s;
 cin >> s;
 for(i=0;i<s.size();i++)
 {
 if(s[i]=='a')
 {
 k=1;
 break;
 }
 }
 if(k) cout << "Yes" << "\n";
 else cout << "No" << "\n";
 return 0;
}

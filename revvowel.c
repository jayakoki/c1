// CPP Program for removing characters
// from reversed string where vowels are
// present in original string
#include <bits/stdc++.h>
using namespace std;
 
// Function for replacing the string
void replaceOriginal(string s, int n)
{
    // initialize a string of length n
    string r(n, ' ');
 
    // Traverse through all characters of string
    for (int i = 0; i < n; i++) {
 
        // assign the value to string r
        // from last index of string s
        r[i] = s[n - 1 - i];
 
        // if s[i] is a consonant then
        // print r[i]
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i'
            && s[i] != 'o' && s[i] != 'u') {
            cout << r[i];
        }
    }
    cout << endl;
}
 
// Driver function
int main()
{
    string s = "geeksforgeeks";
    int n = s.length();
    replaceOriginal(s, n);
 
    return 0;
}


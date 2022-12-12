#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word)
{
    int n = word.length();
    
    int max = h[word[0] - 'a'];
    
    for (size_t i = 1; i < word.length(); ++i)
    {
        if (max < h[word[i]-'a'])
        {
            max = h[word[i]-'a'];
        }
    }
    
    return n * max;
}

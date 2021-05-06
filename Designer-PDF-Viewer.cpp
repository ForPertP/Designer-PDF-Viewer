int designerPdfViewer(vector<int> h, string word)
{
    int n = word.length();
    int max = h[word[0]-'a'];
    
    for (size_t i = 1; i < word.length(); ++i)
    {
        if (max < h[word[i]-'a'])
        {
            max = h[word[i]-'a'];
        }
    }
    
    return n * max;
}

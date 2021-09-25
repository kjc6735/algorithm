#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> words;

bool compare(string a, string b)
{
    return a.size() < b.size();
}
bool sorting(string a, string b)
{
    return a < b;
}

int main()
{
    int count, start = 0, end = 0;
    string word;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compare);
    words.erase(unique(words.begin(), words.end()));

    for (int i = 0; i < words.size(); i++)
    {
        for (end = i + 1; words[i].length() == words[end].length(); end++)
        {
        }
        if (words[i].length() == words[end].length())
        {
            cout << words[i] << "  " << words[end] << endl;
            sort(&words[i], &words[end], sorting);
        }
        i = end;
    }

    cout << "-------------------------" << endl;
    for (int i = 0; i < words.size(); i++)
    {
        //cout << i << endl;
        cout << words[i] << endl;
    }
    return 0;
}

/*

sort(&words[start], &words[end]);
        start = end + 1;*/
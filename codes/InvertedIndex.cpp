#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class InvertedIndex
{
public:
    void addDocument(int docId, const string &text)
    {
        vector<string> words = splitText(text);

        for (const string &word : words)
        {
            index[word].push_back(docId);
        }
    }

    vector<int> searchDocuments(const string &query)
    {
        if (index.count(query) == 0)
        {
            return {};
        }
        return index[query];
    }

private:
    unordered_map<string, vector<int>> index;

    vector<string> splitText(const string &text)
    {
        vector<string> words;
        string word;
        for (char c : text)
        {
            if (c == ' ')
            {
                if (!word.empty())
                {
                    words.push_back(word);
                    word.clear();
                }
            }
            else
            {
                word += c;
            }
        }
        if (!word.empty())
        {
            words.push_back(word);
        }
        return words;
    }
};

int main()
{
    InvertedIndex index;

    index.addDocument(1, "The quick brown fox jumps over the lazy dog");
    index.addDocument(2, "A quick brown dog jumps over the lazy fox");
    index.addDocument(3, "The lazy dog sleeps all day");

    cout << "Documents containing 'quick': ";
    for (int docId : index.searchDocuments("quick"))
    {
        cout << docId << " ";
    }
    cout << endl;

    cout << "Documents containing 'dog': ";
    for (int docId : index.searchDocuments("dog"))
    {
        cout << docId << " ";
    }
    cout << endl;

    return 0;
}
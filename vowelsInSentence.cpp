#include <bits/stdc++.h>
using namespace std;

int main()
{
    // a set which contains the vowels in lowercase
    set<char> s = {'a', 'e', 'i', 'o', 'u'};

    string sentence;
    cout << "Enter a sentence :\n";
    getline(cin, sentence); // taking the sentence as input

    int counter = 0;

    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == ' ')
            continue;
        // converting the character to lowercase and checking whether it is a vowel
        if (s.find(tolower(sentence[i])) != s.end())
            counter++;
    }
    
    cout << "No of vowels in the sentence is " << counter << endl;
}

// C++ implementation to read
// file word by word
/*
Write a file (name it filename) with many words. Open this file, read the words , find the length of each word and print frequency of word-lengths from 1-10.  Call the program wordlengths.cpp. 
* Keep the "filename" file in the same folder as the code.
* Create array for storing frequency of word-lengths and name it frequency[]
*/
#include <bits/stdc++.h>
using namespace std;

// driver code
int main()
{
	// filestream variable file
	fstream file;
	string word, filename;
    int frequency[10] = {0,0,0,0,0,0,0,0,0,0};

	// filename of the file
	filename = "filename.txt";

	// opening file
	file.open(filename.c_str());

	// extracting words from the file
	while (file >> word)
	{
		// displaying content
		cout << "Word length: " << word.length() << "\n";
		frequency[word.length()-1]++;
	}
    cout << "Word length" << "\t" << "Frequency\n";
    for(int i=0;i<10;i++)
    {
        if(frequency[i] != 0)
        {
            cout << i+1 << "\t\t" << frequency[i] << endl;
        }
    }
	return 0;
}

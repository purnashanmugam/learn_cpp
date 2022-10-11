// C++ implementation to read
// file word by word
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

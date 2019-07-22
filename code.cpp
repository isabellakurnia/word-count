#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string source;
    ifstream in;                       //input stream class to operate on files.
    
    cout << "File name: ";
    getline(cin, source);
    
    in.open(source);
    
    if (in.is_open()){
        string copy;
        int count = 0;
        int character = 0;
        int space = 0;
        while (in >> copy){
            int c = in.peek();
            if (c == 32)
                space++;
            for (int i = 0; i < copy.size(); i++){
                character++;
            }
            count++;
        }
        in.close();
        copy.clear();
        cout << "Word count: " << count << endl;
        cout << "Character count: " << character << endl;
        cout << "Character count (with spaces): " << character + space << endl;
    }
    
    else {
        cout << "File does not exist" << endl;
    }
    
    return 0;
}

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
        while (in >> copy){
            count++;
        }
        in.close();
        copy.clear();
        cout << "Word count: " << count << endl;
    }
    
    else {
        cout << "File does not exist" << endl;
    }
    
    return 0;
}

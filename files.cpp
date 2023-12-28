#include <fstream>
#include <iostream>

using namespace std;

string const FILENAME = ".vscode/settings.json";

void showFileContent() {
  ifstream myFile(FILENAME.c_str());
  if (myFile) {
    string line;
    while (getline(myFile, line)) {
      cout << line << endl;
    }
  } else {
    cout << "Error : unable to open file" << endl;
  }
}

void writeFile() {
  ofstream myFile("test.tmp");
  if (myFile) {
    myFile << "first line" << endl;
    myFile << "second line" << endl;
    myFile.seekp(0, ios::beg);  // go to the beginning of the file
    myFile << "custom line" << endl;
  } else {
    cout << "Error : unable to open file" << endl;
  }
}

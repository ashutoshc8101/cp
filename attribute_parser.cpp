#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Tag {
    private:
        vector<Tag> subtags;
        map<string, string> attributes;
        int name;
    public:
        Tag(string hrml) {
          vector<string> lines;
          // cout << hrml << endl;
          stringstream ss(hrml);
          string temp;

          if (!hrml.empty()) {
            while(getline(ss, temp, '\n')) {
              lines.push_back(temp);
            }
          }

          for (int i = 0; i < lines.size(); i++) {
            cout << lines[i] << endl;
            // unsigned first = lines[i].find('<');
            // unsigned last = lines[i].find('>');
            // temp = lines[i].substr (first, last-first);
            // cout << temp << endl;
          }

        }
};

int main() {
    string input, hrml;
    int num_lines, num_queries, garb;

    cin >> num_lines >> num_queries;

    for (int i = 0; i < num_lines; i++) {
      getline(cin, input);
      cout << input << endl;
    }

    Tag root(hrml);

    return 0;
}

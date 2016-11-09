#include <iostream>
#include <map>
#include <vector>

using namespace std;

//Go to Settings/Preferences, Editor | Colors & Fonts | Font
//Enable Font with ligatures and select bundled Fira Code font.
void font_test() {
    map<string, string> it_map;

    it_map.insert({"Ada", "Ada Lovelace"});
    it_map.insert({"Turing Machine", "Alan Turing"});
    it_map.insert({"Lisp", "John McCarthy"});
    it_map.insert({"C++", "Bjarne Stroustrup"});
    it_map.insert({"GNU project", "Richard Stallman"});
    it_map.insert({"Linux", "Linus Torvalds"});

    auto search = it_map.find("C++");
    if (search != it_map.end()) {
        std::cout << "Found " << search->first <<
                  " created by " << search->second << '\n';
    }
    else {
        std::cout << "Not found\n";
    }
}
// Strings1.cpp
// No auto type conversion
#include <cstring>
#include <string>
class StringC {
    private:
        std::string s;
    public:
        StringC(const std::string& str = "") : s(str) {}
        int strcmp(const StringC S) const {
            return std::strcmp(s.c_str(), S.s.c_str());
        }
};

int main() {
    StringC s1("hello"), s2("there");
    s1.strcmp(s2);
}

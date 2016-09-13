// Strings1.cpp
// With user defined conversion
// Do not use implicit user defined conversion, if must, use explicit keyword
#include <cstring>
#include <string>
class StringC {
    private:
        std::string s;
    public:
        StringC(const std::string& str = "") : s(str) {}
        operator const char*() const {
            return s.c_str();
        }// Better user explicit keyword
};

int main() {
    StringC s1("hello"), s2("there");
    strcmp(s1, s2); // Standard C function
    strspn(s1, s2); // Any string function
}

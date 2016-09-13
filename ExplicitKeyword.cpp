// Using explicit keyword to avoid unwanted behavior 
class One {
    public:
        One() {}
};

class Two {
    public:
        explicit Two(const One&) {}
};

void f(Two) {}

int main() {
    One one;
    // f(one); // Error, no auto conversion allowed
    f(Two(one)); // OK
}

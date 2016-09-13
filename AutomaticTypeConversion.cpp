// Type conversion constructor
class One {
    public:
        One() {}
};

class Two {
    public:
        Two(const One&) {} // Better use explicit
};

void f(Two) {}

int main() {
    One one;
    f(one); // Wants a Two, has a One; not advised
}

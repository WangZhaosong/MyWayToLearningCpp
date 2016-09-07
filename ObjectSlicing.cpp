// ObjectSlicing.cpp
#include <iostream>
#include <string>

class Pet {
    private:
        std::string m_name;
    public:
        Pet(const std::string& name) : m_name(name) {}
        virtual std::string name() const {
            return m_name;
        }
        virtual std::string description() const {
            return "This is " + m_name;
        }
};

class Dog : public Pet {
    private:
        std::string favoriteActivity;
    public:
        Dog(const std::string& name, const std::string& activity)
            : Pet(name), favoriteActivity(activity) {}
        std::string description() const override{
            return Pet::name() + " likes to " + favoriteActivity;
        }
};

// Object slicing, always call p::description
void describe(Pet p) {
    std::cout << p.description() << std::endl;
}

void describe(Pet *p) {
    std::cout << p->description() << std::endl;
}

int main()
{
    Pet p("Mao");
    Dog d("Labrado","eat");
    describe(p);
    describe(d);// slicing
    describe(&p);
    describe(&d);// This is OK
}

// C15:Instrument.cpp
// Pure abstract base classed

#include <iostream>

enum class note {
    middleC,
    CSharp,
    Cflat
};

class Instrument {
    public:
        // pure virtual function
        virtual void play(note) const = 0;
        virtual const char* what() const = 0;
        virtual void adjust(int) = 0;
};

class Wind : public Instrument {
    public:
        void play(note) const override {
            std::cout << "Wind::play\n";
        }
        const char* what() const override {
            return "Wind";
        }
        void adjust(int) override {}
};

class Percussion : public Instrument {
    public:
        void play(note) const override {
            std::cout << "Percussion::play\n";
        }
        const char* what() const override {
            return "Percussion";
        }
        void adjust(int) override {}
};

class Stringed : public Instrument {
    public:
        void play(note) const override {
            std::cout << "Stringed::play\n";
        }
        const char* what() const override {
            return "Stringed";
        }
        void adjust(int) override {}
};

// Brass 铜管乐器
class Brass : public Wind {
    public:
        void play(note) const override {
            std::cout << "Brass::play\n";
        }
        const char* what() const {
            return "Brass\n";
        }
};

// Woodwind 打击乐器
class Woodwind : public Wind {
    public:
        void play(note) const override {
            std::cout << "Woodwind::play\n";
        }
        const char* what() const override {
            return "Woodwind";
        }
};

void tune(Instrument& i) {
    i.play(note::middleC);
}

void f(Instrument& i) { i.adjust(1);}

int main()
{
    Wind flute;
    Percussion drum;
    Stringed violin;
    Brass flugehorn;
    Woodwind recorder;
    tune(flugehorn);
    tune(drum);
    tune(violin);
    tune(flugehorn);
    tune(recorder);
    f(flugehorn);
}

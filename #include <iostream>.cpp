#include <iostream>

class Color {
private:
    int red, green, blue;

public:
    // Constructor
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    // Setter methods
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    // Getter methods
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Print method to display color values
    void print() const {
        std::cout << "Color (R: " << red << ", G: " << green << ", B: " << blue << ")\n";
    }
};

int main() {
    // Creating Color objects
    Color color1(255, 0, 0); // Red
    Color color2(0, 255, 0); // Green
    Color color3(0, 0, 255); // Blue

    // Using print method to display color values
    std::cout << "Color 1: ";
    color1.print();

    std::cout << "Color 2: ";
    color2.print();

    std::cout << "Color 3: ";
    color3.print();

    return 0;
}

#include <iostream>

// Abstraction: Shape
class Shape {
public:
    virtual void draw() = 0;
};

// Implementation: Drawing API
class DrawingAPI {
public:
    virtual void drawCircle(double x, double y, double radius) = 0;
    virtual void drawSquare(double x, double y, double side) = 0;
};

// Concrete Implementation: Drawing on Paper
class DrawingOnPaper : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "Drawing circle on paper at (" << x << ", " << y << ") with radius " << radius << std::endl;
    }
    
    void drawSquare(double x, double y, double side) override {
        std::cout << "Drawing square on paper at (" << x << ", " << y << ") with side length " << side << std::endl;
    }
};

// Concrete Implementation: Drawing on Screen
class DrawingOnScreen : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "Drawing circle on screen at (" << x << ", " << y << ") with radius " << radius << std::endl;
    }
    
    void drawSquare(double x, double y, double side) override {
        std::cout << "Drawing square on screen at (" << x << ", " << y << ") with side length " << side << std::endl;
    }
};

// Refined Abstraction: Circle
class Circle : public Shape {
private:
    double x, y, radius;
    DrawingAPI* drawingAPI;
public:
    Circle(double x, double y, double radius, DrawingAPI* drawingAPI)
        : x(x), y(y), radius(radius), drawingAPI(drawingAPI) {}
    
    void draw() override {
        drawingAPI->drawCircle(x, y, radius);
    }
};

// Refined Abstraction: Square
class Square : public Shape {
private:
    double x, y, side;
    DrawingAPI* drawingAPI;
public:
    Square(double x, double y, double side, DrawingAPI* drawingAPI)
        : x(x), y(y), side(side), drawingAPI(drawingAPI) {}
    
    void draw() override {
        drawingAPI->drawSquare(x, y, side);
    }
};

int main() {
    DrawingAPI* paper = new DrawingOnPaper();
    DrawingAPI* screen = new DrawingOnScreen();

    Shape* circleOnPaper = new Circle(1, 2, 3, paper);
    Shape* squareOnScreen = new Square(4, 5, 6, screen);

    circleOnPaper->draw();
    squareOnScreen->draw();

    delete circleOnPaper;
    delete squareOnScreen;
    delete paper;
    delete screen;

    return 0;
}

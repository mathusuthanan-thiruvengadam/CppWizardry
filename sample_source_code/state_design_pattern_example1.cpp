#include <iostream>
#include <string>

// Forward declaration of Context class
class Product;

// Abstract State class
class State {
public:
    virtual void handle(Product* context) = 0;
};

// Concrete state representing the product being in "None" state
class NoneState : public State {
public:
    void handle(Product* context) override {
        std::cout << "Product is not initialized." << std::endl;
    }
};

// Concrete state representing the product being in "Init" state
class InitState : public State {
public:
    void handle(Product* context) override {
        std::cout << "Initializing product." << std::endl;
        // Allocate memory and resources
        // Transition to the next state
        context->setState(new StartingState());
    }
};

// Concrete state representing the product being in "Starting" state
class StartingState : public State {
public:
    void handle(Product* context) override {
        std::cout << "Starting product." << std::endl;
        // Create threads and ensure all are running
        // Transition to the next state
        context->setState(new RunningState());
    }
};

// Concrete state representing the product being in "Running" state
class RunningState : public State {
public:
    void handle(Product* context) override {
        std::cout << "Product is running." << std::endl;
    }
};

// Context class representing the product
class Product {
private:
    State* state; // Reference to the current state
public:
    Product(); // Constructor
    void setState(State* state); // Setter for state
    void handleRequest(); // Method to handle requests
};

// Context methods
Product::Product() {
    // Initial state is NoneState
    state = new NoneState();
}

void Product::setState(State* newState) {
    delete state; // Delete current state
    state = newState; // Set new state
}

void Product::handleRequest() {
    state->handle(this); // Delegate to current state
}

// Main function
int main() {
    Product product;
    
    // Handling requests to transition between states
    product.handleRequest(); // Output: Product is not initialized.
    product.handleRequest(); // Output: Initializing product.
    product.handleRequest(); // Output: Starting product.
    product.handleRequest(); // Output: Product is running.
    
    return 0;
}

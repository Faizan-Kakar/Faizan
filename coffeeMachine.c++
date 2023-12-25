#include <iostream> 

#include <string> 

  

using namespace std; 

  

// Class representing a Coffee 

class Coffee { 

public: 

    string type; 

    string size; 

    string strength; 

  

    Coffee(const string& coffeeType, const string& coffeeSize, const string& coffeeStrength) 

        : type(coffeeType), size(coffeeSize), strength(coffeeStrength) {} 

  

    void dispense() { 

        cout << "Dispensing a " << size << " " << strength << " " << type << " coffee." << endl; 

    } 

}; 

  

// Class representing a Coffee Machine 

class CoffeeMachine { 

public: 

    Coffee brewCoffee(const string& coffeeType, const string& coffeeSize, const string& coffeeStrength) { 

        // Simulate brewing process 

        cout << "Brewing a " << coffeeSize << " " << coffeeStrength << " " << coffeeType << " coffee." << endl; 

  

        // Return a Coffee object representing the brewed coffee 

        return Coffee(coffeeType, coffeeSize, coffeeStrength); 

    } 

}; 

  

// Class representing a User 

class User { 

public: 

    string selectCoffeeType() { 

        cout << "Select coffee type (e.g., espresso, latte, cappuccino): "; 

        string type; 

        cin >> type; 

        return type; 

    } 

  

    string selectCoffeeSize() { 

        cout << "Select coffee size (e.g., small, medium, large): "; 

        string size; 

        cin >> size; 

        return size; 

    } 

  

    string selectCoffeeStrength() { 

        cout << "Select coffee strength (e.g., mild, medium, strong): "; 

        string strength; 

        cin >> strength; 

        return strength; 

    } 

}; 

  

int main() { 

    // Create instances of CoffeeMachine and User 

    CoffeeMachine coffeeMachine; 

    User user; 

  

    // User interaction 

    string coffeeType = user.selectCoffeeType(); 

    string coffeeSize = user.selectCoffeeSize(); 

    string coffeeStrength = user.selectCoffeeStrength(); 

  

    // Brew coffee 

    Coffee brewedCoffee = coffeeMachine.brewCoffee(coffeeType, coffeeSize, coffeeStrength); 

  

    // Dispense coffee 

    brewedCoffee.dispense(); 

  

    return 0; 

} 
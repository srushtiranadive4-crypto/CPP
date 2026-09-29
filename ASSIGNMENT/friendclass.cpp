#include <iostream>
using namespace namespace std;

class Engine {
private:
    int speed = 100;

    friend class Car;
};

class Car {
public:
    void checkSpeed(Engine e) {
        cout << "Engine speed is " << e.speed << endl;
    }
};

int main() {
    Engine eng;
    Car c;
    c.checkSpeed(eng);
    
    return 0;
}

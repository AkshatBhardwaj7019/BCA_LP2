#include <iostream>
using namespace std;

class BCA_OOPS {
private:
    int var1, var2;

public:
    BCA_OOPS() : var1(0), var2(0) {}

    BCA_OOPS(int v1, int v2) : var1(v1), var2(v2) {}

    void display() const {
        cout << "var1: " << var1 << endl;
        cout << "var2: " << var2 << endl;
    }

    void copy_data(const BCA_OOPS& other) {
        var1 = other.var1;
        var2 = other.var2;
    }

    void decrement_values() {
        var1 -= (var1 >= 0 && var1 <= 10) ? 2 : 5;
        var2 -= (var2 >= 0 && var2 <= 10) ? 2 : 5;
    }

    friend void display_values(const BCA_OOPS& obj);
};

void display_values(const BCA_OOPS& obj) {
    cout << "var1: " << obj.var1 << endl;
    cout << "var2: " << obj.var2 << endl;
}

int main() {
    BCA_OOPS obj1;
    cout << "Default constructor values:" << endl;
    display_values(obj1);
    cout << endl;

    BCA_OOPS obj2(15, 8);
    cout << "Parameterized constructor values:" << endl;
    display_values(obj2);
    cout << endl;

    BCA_OOPS obj3;
    obj3.copy_data(obj2);
    cout << "Copied data:" << endl;
    display_values(obj3);
    cout << endl;

    obj3.decrement_values();
    cout << "After decrementing values:" << endl;
    display_values(obj3);

    return 0;
}
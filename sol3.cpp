#include <iostream>
using namespace std;

class Test {
private:
    int var1, var2, var3;

public:
    void get_data(int v1) {
        var1 = v1;
    }

    void get_data(int v1, int v2) {
        var1 = v1;
        var2 = v2;
    }

    void get_data(int v1, int v2, int v3) {
        var1 = v1;
        var2 = v2;
        var3 = v3;
    }

    void show_data() {
        cout << "var1: " << var1 << endl;
        cout << "var2: " << var2 << endl;
        cout << "var3: " << var3 << endl;
    }
};

int main() {
    Test obj1, obj2, obj3;

    obj1.get_data(10);
    obj2.get_data(20, 30);
    obj3.get_data(40, 50, 60);

    cout << "Object 1 data:" << endl;
    obj1.show_data();
    cout << endl;

    cout << "Object 2 data:" << endl;
    obj2.show_data();
    cout << endl;

    cout << "Object 3 data:" << endl;
    obj3.show_data();
    cout << endl;

    return 0;
}
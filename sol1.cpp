#include <iostream>
using namespace std;

#define rows 3
#define cols 3

class demo {
private:
    int A[rows][cols];

public:
    void get_data() {
        cout << "Enter data for the matrix:" << endl;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> A[i][j];
    }

    void show_data() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend demo multiply_matrices(const demo& m1, const demo& m2);
};

demo multiply_matrices(const demo& m1, const demo& m2) {
    demo result;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result.A[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result.A[i][j] += m1.A[i][k] * m2.A[k][j];
            }
        }
    }
    return result;
}

int main() {
    demo d1, d2, d3;
    cout << "Enter data for first matrix:" << endl;
    d1.get_data();
    cout << "Enter data for second matrix:" << endl;
    d2.get_data();
    d3 = multiply_matrices(d1, d2);
    d3.show_data();
    return 0;
}
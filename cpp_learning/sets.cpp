#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * Written early in my undergraduate studies.
 * Educational exercise focused on practicing vectors, loops,
 * duplicate removal, sorting, and set intersection logic.
 * Not optimized — learning-oriented implementation.
 */

void intersection(vector<int> v1, vector<int> v2, vector<int> v3) {
    vector<int> intersec1, intersec2, intersec3;
    int aux;

    // First step: find intersections between v1 and v2, and v1 and v3
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (v1[i] == v2[j]) {
                intersec1.push_back(v2[j]);
            }
        }

        for (int k = 9; k >= 0; k--) {
            if (v1[i] == v3[k]) {
                intersec2.push_back(v3[k]);
            }
        }
    }

    // Second step: intersection between previous results
    for (int i = 0; i < intersec1.size(); i++) {
        for (int j = 0; j < intersec2.size(); j++) {
            if (intersec1[i] == intersec2[j]) {
                intersec3.push_back(intersec2[j]);
            }
        }
    }

    // Remove duplicate elements
    for (int i = intersec3.size() - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (intersec3[i] == intersec3[j]) {
                intersec3.erase(intersec3.begin() + i);
                break;
            }
        }
    }

    // Sort result in ascending order (bubble sort)
    for (int i = 0; i < intersec3.size(); i++) {
        for (int j = 0; j < intersec3.size() - 1; j++) {
            if (intersec3[j] > intersec3[j + 1]) {
                aux = intersec3[j + 1];
                intersec3[j + 1] = intersec3[j];
                intersec3[j] = aux;
            }
        }
    }

    cout << endl;
    cout << "Intersection: {";
    for (int i = 0; i < intersec3.size(); i++) {
        if (i != intersec3.size() - 1) {
            cout << intersec3[i] << ", ";
        } else {
            cout << intersec3[i] << "}";
        }
    }
}

int main() {
    vector<int> set1(10), set2(10), set3(10);
    int aux;

    cout << string(30, '-') << endl;
    cout << "First set:" << endl;
    cout << string(30, '-') << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter value for position " << i + 1 << ": ";
        cin >> set1[i];
    }

    cout << endl;
    cout << "1st array: [";
    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            cout << set1[i] << ", ";
        } else {
            cout << set1[i] << "]";
        }
    }

    // Remove duplicates
    for (int i = set1.size() - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (set1[i] == set1[j]) {
                set1.erase(set1.begin() + i);
                break;
            }
        }
    }

    // Sort array
    for (int i = 0; i < set1.size(); i++) {
        for (int j = 0; j < set1.size() - i - 1; j++) {
            if (set1[j] > set1[j + 1]) {
                aux = set1[j + 1];
                set1[j + 1] = set1[j];
                set1[j] = aux;
            }
        }
    }

    cout << endl;
    cout << string(30, '-') << endl;
    cout << "Second set:" << endl;
    cout << string(30, '-') << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter value for position " << i + 1 << ": ";
        cin >> set2[i];
    }

    cout << endl;
    cout << "2nd array: [";
    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            cout << set2[i] << ", ";
        } else {
            cout << set2[i] << "]";
        }
    }

    // Remove duplicates
    for (int i = set2.size() - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (set2[i] == set2[j]) {
                set2.erase(set2.begin() + i);
                break;
            }
        }
    }

    // Sort array
    for (int i = 0; i < set2.size(); i++) {
        for (int j = 0; j < set2.size() - i - 1; j++) {
            if (set2[j] > set2[j + 1]) {
                aux = set2[j + 1];
                set2[j + 1] = set2[j];
                set2[j] = aux;
            }
        }
    }

    cout << endl;
    cout << string(30, '-') << endl;
    cout << "Third set:" << endl;
    cout << string(30, '-') << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter value for position " << i + 1 << ": ";
        cin >> set3[i];
    }

    cout << endl;
    cout << "3rd array: [";
    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            cout << set3[i] << ", ";
        } else {
            cout << set3[i] << "]";
        }
    }

    // Remove duplicates
    for (int i = set3.size() - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (set3[i] == set3[j]) {
                set3.erase(set3.begin() + i);
                break;
            }
        }
    }

    // Sort array
    for (int i = 0; i < set3.size(); i++) {
        for (int j = 0; j < set3.size() - i - 1; j++) {
            if (set3[j] > set3[j + 1]) {
                aux = set3[j + 1];
                set3[j + 1] = set3[j];
                set3[j] = aux;
            }
        }
    }

    cout << endl;
    cout << string(70, '-') << endl;
    cout << "NOTE: Numerical sets do not allow duplicate elements." << endl;
    cout << "The sets will be arbitrarily sorted in ascending order." << endl;
    cout << string(70, '-') << endl;

    intersection(set1, set2, set3);

    return 0;
}
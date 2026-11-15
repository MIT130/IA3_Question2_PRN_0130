/*
 MIT Academy of Engineering, Alandi | Data Structures IA-3 | Question 2
 PRN: 202501100130 | Seed S: 130
 PRN mod 3 = 0: Cold-drink flavours
 PRN even: Division method; PRN mod 2 = 0: Linear probing
 Dataset: v[i] = (130 + 13*i) mod 100, i = 0..19
 Table size m=23 is an implementation choice because Q2 does not specify m.
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int TABLE_SIZE = 23;
const int N = 20;
int values[N] = {30,43,56,69,82,95,8,21,34,47,60,73,86,99,12,25,38,51,64,77};
int hashTable[TABLE_SIZE];

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) hashTable[i] = -1;
}

void insertKey(int key) {
    int index = hashFunction(key);
    int startIndex = index;
    int probes = 0;

    cout << "Inserting " << setw(2) << key << " | hash index = " << setw(2) << index;
    while (hashTable[index] != -1) {
        cout << " | collision at " << index;
        index = (index + 1) % TABLE_SIZE;
        probes++;
        if (index == startIndex) {
            cout << " | ERROR: Hash table is full\n";
            return;
        }
    }
    hashTable[index] = key;
    cout << " | placed at index = " << setw(2) << index
         << " | extra probes = " << probes << '\n';
}

void displayTable() {
    cout << "\nFINAL HASH TABLE (Linear Probing)\n";
    cout << "---------------------------------\n";
    cout << left << setw(10) << "Index" << "Value\n";
    cout << "---------------------------------\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << left << setw(10) << i;
        if (hashTable[i] == -1) cout << "Empty\n";
        else cout << hashTable[i] << '\n';
    }
}

int main() {
    initializeTable();
    cout << "COLD-DRINK FLAVOUR HASH TABLE\n";
    cout << "PRN: 202501100130 | Seed S: 130\n";
    cout << "Division Method + Linear Probing\n";
    cout << "Table size m = " << TABLE_SIZE << "\n\n";
    cout << "Personalized values:\n";
    for (int i = 0; i < N; i++) {
        cout << values[i] << (i == N-1 ? "\n" : ", ");
    }
    cout << "\nINSERTION TRACE\n---------------\n";
    for (int i = 0; i < N; i++) insertKey(values[i]);
    displayTable();
    return 0;
}

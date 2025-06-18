#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool verifica_numeros(const vector<int>& vec) {
    set<int> numeros(vec.begin(), vec.end());
    return numeros.size() == 9 && *numeros.begin() == 1 && *numeros.rbegin() == 9;
}

bool verifica_sudoku(const vector<vector<int>>& matriz) {
   
    for (int i = 0; i < 9; i++) {
        vector<int> linha = matriz[i];
        if (!verifica_numeros(linha)) return false;
    }

    for (int j = 0; j < 9; j++) {
        vector<int> coluna;
        for (int i = 0; i < 9; i++) {
            coluna.push_back(matriz[i][j]);
        }
        if (!verifica_numeros(coluna)) return false;
    }

    for (int bloco_i = 0; bloco_i < 3; bloco_i++) {
        for (int bloco_j = 0; bloco_j < 3; bloco_j++) {
            vector<int> bloco;
            for (int i = bloco_i * 3; i < bloco_i * 3 + 3; i++) {
                for (int j = bloco_j * 3; j < bloco_j * 3 + 3; j++) {
                    bloco.push_back(matriz[i][j]);
                }
            }
            if (!verifica_numeros(bloco)) return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    
    for (int k = 1; k <= n; k++) {
        vector<vector<int>> matriz(9, vector<int>(9));
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> matriz[i][j];
            }
        }

        cout << "Instancia " << k << endl;
        if (verifica_sudoku(matriz)) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
        cout << endl;
    }

    return 0;
}

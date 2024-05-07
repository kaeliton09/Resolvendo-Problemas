#include <iostream>
using namespace std;
//definindo tamanho maximo da matriz
#define max 50
char mat[max][max];

//algoritmo de floofill 
void floodfill(int i, int j, int m, int n){
    mat[i][j] = 'T';
    if(i > 0 && mat[i - 1][j] == 'A'){
        floodfill(i-1,j, m, n);
    }
    if(i < m - 1 && mat[i+1][j] == 'A'){
        floodfill(i+1,j, m, n);
    }
    if(j > 0 && mat[i][j-1] == 'A'){
        floodfill(i, j-1, m, n);
    }
    if(j < n - 1 && mat[i][j+1] == 'A'){
        floodfill(i, j+1, m, n);
    }
}

//lendo a matriz
void cin_mat(int m, int n){
    for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
}

//chamando a floodfill
void call_flood(int m, int n){
    for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 'T'){
                    floodfill(i,j, m, n);
                }
            }
        }
}

//imprimindo a matriz contaminada
void cout_mat(int m, int n){
    for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
}

int main()
{
    int m,n;
    while(cin >> m >> n && (m || n)){
        cin_mat(m,n);
        call_flood(m,n);
        cout_mat(m, n);
    }

    return 0;
}
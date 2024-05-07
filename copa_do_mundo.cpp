#include <iostream>
#include <queue>

using namespace std;

queue <char> times;

//preenchendo tabela
void pre_tab(){
    for(int i = 65; i <= 80; i++){
        times.push(i);
    }
}

//gerando resultado de time vencedor
void resultado(){
    int a, b;
    for(int i = 0; i < 15; i++){
        cin >> a >> b;
        if(a > b){
            times.push(times.front());
            times.pop();
            times.pop();
        }
        else{
            times.pop();
            times.push(times.front());
            times.pop();
        }
    }
}

//imprimindo vencedor 
void vencedor(){
    cout << times.front() << endl;
}

int main()
{
    pre_tab();
    resultado();
    vencedor();

    return 0;
}
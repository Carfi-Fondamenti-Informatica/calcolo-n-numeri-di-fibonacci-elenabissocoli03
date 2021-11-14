#include <iostream>
using namespace std;
int main(){
    int n =0, primo = 0, secondo = 1, terzo;
    cin >> n;

    if(n < 2){
        cout << "errore" << endl;
    } else {
        cout << "1" << endl;
            for (int i = 0; i<=(n-2); i++){
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << terzo << endl;
            }
    }
    return 0;
}

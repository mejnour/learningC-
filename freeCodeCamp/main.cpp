#include <iostream>
#include <cmath> // c math libs

using namespace std;

// Assinaturas de Funções

void greet(string user);

double cubo(double valor);

int main() 
{
    // Tipos

    char letra{ 'a' }; 
    string palavra = "abc...";
    int inteiros = 0;
    float fl = 0.0;
    double db = 0.0000;
    bool valor;
    valor = true;
    valor = false;

    // Funções básicas de String

    int tamanho = palavra.length();
    int pos = palavra.find("c", 0);

    cout << pos << endl;
    cout << palavra.find("c", 0) << endl;
    cout << tamanho << endl;
    cout << palavra[0] << endl;

    // Funções básicas com números

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(36.6) << endl;
    cout << ceil(36.1) << endl;
    cout << floor(36.9) << endl;
    cout << fmax(5, 36) << endl;

    // User input

    int age;
    cin >> age;
    cout << age << endl;

    string nameA;
    cout << "Enter: " << endl;
    cin.ignore(); // Essa linha é necessário pq cout deixa um \n no buffer.
    getline(cin, nameA);
    
    cout << "Meu nome eh " << nameA << endl;

    // Arrays

    int lista1[] = {1, 2, 3, 4, 5};
    int lista2[10];

    lista1[0] = 15;

    cout << lista1 << endl;
    cout << lista1[0] << endl;

    // Controle de Fluxo

    bool teste1 = false;
    bool teste2 = false;
    if (teste1 && teste2) {
    // if (teste1 || teste2) {
        cout << "Ieeeeeyh!" << endl;
    } 
    else if (teste1 || !teste2) {
        cout << "Varei" << endl;
    } 
    else {
        cout << "Ai dento!" << endl;
    }
    
    // switch (teste1)
    // {
    // case true:
    //     cout << "Varei" << endl;
    //     break;
    
    // case false:
    //     cout << "Ai dento!" << endl;
    //     break;
    
    // default:
    //     cout << "Este código nunca será executado." << endl;
    //     break;
    // }

    // Laços

    int accu = 0;
    while (!teste1)
    {
        cout << "Uhuul" << endl;
        accu++;
        if (accu >= 3) {
            break;
        }
    }

    accu = 0;
    do {
        cout << "Uhuul" << endl;
        accu++;
        if (accu >= 3) {
            break;
        }
    } while (!teste1);

    for (int i = 0; i < 3; i++) {
        cout << "Uhuul" << endl;
    }

    // Chamada de Funções

    greet("Pina");

    double resposta = cubo(5.0);
    cout << resposta << endl;

    // Ponteiros

    double gpa = 5.0;
    double *pGpa = &gpa;

    cout << pGpa << endl;
    cout << *pGpa << endl;

    return 0;
}

// FunçÕes

void greet(string user)
{
    cout << "Hello User " << user << "!" << endl;
}

double cubo(double valor)
{
    return pow(valor, 3);
}
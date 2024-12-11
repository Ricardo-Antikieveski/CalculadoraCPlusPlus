#include <iostream>
#include <limits>
#include <bitset>
#include <iomanip>  
#include <string>

using namespace std;

void exibirMenu() {
    cout << "Escolha uma operacao: \n";
    cout << "1. Adicao (+)\n";
    cout << "2. Subtracao (-)\n";
    cout << "3. Multiplicacao (*)\n";
    cout << "4. Divisao (/)\n";
    cout << "5. Binario para Decimal\n";
    cout << "6. Decimal para Binario\n";
    cout << "7. Hexadecimal para Decimal\n";
    cout << "8. Decimal para Hexadecimal\n";
    cout << "9. Sair\n";
}

void realizarOperacao(int opcao) {
    double num1, num2;
    string binario, hexadecimal;

    switch (opcao) {
    case 1:
        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;
        if (num2 != 0) {
            cout << "Resultado: " << num1 / num2 << endl;
        }
        else {
            cout << "Erro! Divisao por zero nao e permitida.\n";
        }
        break;
    case 5:
        cout << "Digite um numero binario: ";
        cin >> binario;
        cout << "Resultado em decimal: " << bitset<32>(binario).to_ulong() << endl;
        break;
    case 6:
        cout << "Digite um numero decimal: ";
        cin >> num1;
        cout << "Resultado em binario: " << bitset<32>(static_cast<int>(num1)) << endl;
        break;
    case 7:
        cout << "Digite um numero hexadecimal: ";
        cin >> hexadecimal;
        cout << "Resultado em decimal: " << stoi(hexadecimal, nullptr, 16) << endl;
        break;
    case 8:
        cout << "Digite um numero decimal: ";
        cin >> num1;
        cout << "Resultado em hexadecimal: " << hex << static_cast<int>(num1) << endl;
        break;
    case 9:
        cout << "Saindo da calculadora. Ate logo!" << endl;
        break;
    default:
        cout << "Opção invalida! Tente novamente.\n";
    }
}

int main() {
    int opcao;

    do {
        exibirMenu();
        cout << "Digite a operação desejada (1-9): ";
        cin >> opcao;
        system("cls");
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida! Por favor, insira um número válido.\n";
        }
        else {
            realizarOperacao(opcao);
        }

    } while (opcao != 9);

    return 0;
}

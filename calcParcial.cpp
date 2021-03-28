// projeto da disciplina hands on work: desenvolver uma calculadora de conversão de binário para decimal e decimal para binário

#include <iostream>
#include <iomanip>
#include <math.h> // Biblioteca necessária para utilizar o comando pow 
#include <string> // Biblioteca para utilizar 

using namespace std;

int main () {
 /* 1. declaramos as variáveis inteiras "num" e "dec", onde a 
 primeira será utilizada apenas para a parte do menu, e dec será 
 o valor de entrada dado pelo usuário*/

    int num = 0, dec;  
    string entrada;

       /*2. os comandos a seguir são a impressão do menu, onde o 
       usuário irá digitar um valor, que será armazenado na variável
       "num"*/

        cout << "=========== CONVERSOR DECIMAL <-> BINARIO =============\n\n";
        cout << "1: DECIMAL -> BINARIO\n";
        cout << "2: BINARIO -> DECIMAL\n\n";
        cout << " QUAL OPERACAO DESEJA REALIZAR?\n\n";
        cin >> num;
        cout << "\n"; 

        /* 3. utilizamos o comando "if", para a variável "num", onde o programa
        irá verificar o numero digitado pelo usuário e se a condição imposta for
        verdadeira (nesse caso o número == 1 então)
        serão executados os comandos do bloco if */

    if (num == 1) { 

            cout << "DIGITE UM NUMERO EM DECIMAL:\n\n" ; // mensagem que aparece após o usuário escolher a opção "1"
            cin >> dec; // o comando "cin" irá atribuir à váriavel "dec" o valor em decimal que será digitado pelo usuário.
            cout << "\n"; // \n é utilizado para pular uma linha.

            string result; /*introduzimos a variável "result", com o tipo de dado "string", assim poderemos alocar os valores "0" e "1" 
                            resultantes dos calculos abaixo. */

            /* 4. inserimos a estrutura de repetição "while", a fim de criar um laço para a variável "dec". Neste laço, 
            criamos duas condições para a variável, onde a primeira irá verificar se o resto da divisão por 2 é igual a 0. Se sim,
            irá alocar o valor "0" na string "result", e senão, será adicionado "1". */ 

            while (dec >= 1) {

                if (dec % 2 == 0) {  /* este if verifica se o resto da divisão é = 0.
                                    obs.: este if poderia ser resumido em um "if ternário": result += (n % 2 == 0 ? "0" : "1") IF TERNÁRIO. */

                    result = "0" + result; // caso o resultado seja 0, essa linha de comando é responsável por inserir o valor "0" na string "result".

                    //cout << result; // utilizamos esse comando durante a construção para identificar bugs e entender melhor o código. 

                } else { 

                    result = "1" + result; // caso o resto seja diferente de 0, será alocado na string o valor "1".

                    //cout << result;  /* inicialmente utilizamos o comando "result += "1", e debugando, verificamos 
                                        //que estava alocando os resultados ao lado direito, o mesmo ocorria na linha 52. */
                }

                dec = dec / 2; /* após as condições do if, a variável "dec", continua percorrendo o laço do comando while.
                                o comando desta linha irá dividir o valor de "dec" por 2, e o resultado retorna para o 
                                início do "while". */
            }
            cout << "RESULTADO EM BINARIO: \n";
            cout << setfill ('0') << setw (8) << result << "\n\n"; // esta linha de comando impõe que a "result" deve ter 8 caracteres, adicionando 0 a esquerda para completar
        }

    
        system ("pause");

        return 0;

}

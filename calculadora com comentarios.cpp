/*
UNIVALI

Hands on Work I

Professor: Alex Luciano Roesler Rese

Integrantes do Grupo:
    Amanda Carolini da Silva
    Gustavo Luiz Cittadela
    Guilherme Henrique Cittadela
    Marcus Paulo Teixeira Cardoso

Projeto: Conversor de Bases: Número Decimal para Número Binário e Número Binário para Número Decimal. 
*/

#include <iostream>
#include <iomanip>
#include <math.h> // Biblioteca necessária para utilizar o comando pow 

using namespace std;

int main () {
 /* 1. declaramos a variável inteira num que
  será utilizada apenas para a parte do menu, e */

int num;

/*2. os comandos a seguir são a impressão do menu, onde o 
usuário irá digitar um valor, que será armazenado na variável
"num"*/

cout << "===========CONVERSOR DECIMAL <-> BINARIO=============\n";
cout << "1: DECIMAL -> BINARIO\n";
cout << "2: BINARIO -> DECIMAL\n";
cout << " QUAL OPERACAO DESEJA REALIZAR?\n";
cin >> num; 

/* 3. utilizamos o comando "if", para a variável "num", onde o programa
irá verificar o numero digitado pelo usuário e se a condição imposta for
verdadeira (nesse caso o número == 1 então)
serão executados os comandos do bloco if */

if (num == 1) { 
    
    int dec; // a variável inteira "dec" será o valor de entrada dado pelo usuário

    cout << "DIGITE UM NUMERO EM DECIMAL:\n" ; // mensagem que aparece após o usuário escolher a opção "1"
    cin >> dec; // o comando "cin" irá atribuir à váriavel "dec" o valor em decimal que será digitado pelo usuário.

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
    cout << setfill ('0') << setw (8) << result << "\n"; // esta linha de comando impõe que a "result" deve ter 8 caracteres, adicionando 0 a esquerda para completar
}

if (num == 2) {             //para o cálculo de binário para decimal usamos basicamente a mesma lógia do cálculo anterior.

    int exp = 0;            //nesse laço verificaremos se o número em binário é divisível por 10. Se for, o resto da divião é igual a '0'. Logo não fará diferença na hora de somar,
    int bin;                //pois será feito a seguinte conta: (resto da divisão * 2 ^ exp). onde exp é uma variável tipo int, de valor 0 até 7. 
    int num = 0;            //porém se o resultado do resto da divisão for 1, obteremos um valor inteiro, que será armazenado na váriavel num. E no final do laço, armazenamos na
    int soma = 0;           //variável soma, onde será somado com os valores anteriores, obtendo assim o número em decimal.

    cout << "DIGITE UM NUMERO EM BINARIO:\n";
    cin >> bin;
    

    while (exp <=7 && bin != 0) {      //laço será percorrido enquanto o valor de exp for menor ou igual a 7.
        
        if (bin % 10 == 1) {           //cálculo do resto da divisão por 10. Se for igual a 1, é executado o bloco abaixo.

            num = bin % 10;            //associamos o resto da divisão a váriavel num
            num = num * pow(2,exp);    //de novo utilizamos pow para executar o cálculo do exponencial. no primeiro loop exp é igual a 0.
            exp++;                     //criamos o contador para a váriavel exp, somando +1 a variavel para cada loop
            soma = soma + num;         //aqui armazenamos num ná variável soma, e em cada lopp será somado o resultado da linha 86 à variavel soma
            bin /= 10;                 //dividimos bin por 10 e voltamos ao ínicio do laço.
            
        }
        else {                        //caso o resto da divisão seja igual a zero, é feito apenas a divisão de bin por 10 e também a soma de exp em +1, e o laço recomeça.
            
            bin /= 10;
            exp++;
        }

    }


cout << "RESULTADO EM DECIMAL:" << endl;
cout << soma << endl << endl;


}  
int opc;
cout << "DESEJA REALIZAR OUTRA OPERACAO?\n";
cout << "1. SIM\n";
cout << "2. SAIR\n";
cin >> opc;

switch (opc)
{
case (1):
return main ();
break;

default:
return 0;

break;
}

system ("pause");

return 0;
}
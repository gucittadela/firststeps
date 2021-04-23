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
#include <math.h> 

using namespace std;

int main () {

    int num;

    cout << "===========CONVERSOR DECIMAL <-> BINARIO=============\n";
    cout << "1: DECIMAL -> BINARIO\n";
    cout << "2: BINARIO -> DECIMAL\n";
    cout << " QUAL OPERACAO DESEJA REALIZAR?\n";
    cin >> num; 

    if (num == 1) { 
        
        int dec; 
        cout << "DIGITE UM NUMERO EM DECIMAL:\n" ; 
        cin >> dec; 
        string result; 

        while (dec >= 1) {

            if (dec % 2 == 0) {  

                result = "0" + result; 

            } else { 

                result = "1" + result; 
            }
            dec = dec / 2; 
        }
        cout << "RESULTADO EM BINARIO: \n";
        cout << setfill ('0') << setw (8) << result << "\n"; 
    }

    if (num == 2) {            

        int exp = 0;           
        int bin;                
        int num = 0;           
	    int soma = 0;          

	    cout << "DIGITE UM NUMERO EM BINARIO:\n";
	    cin >> bin;
	    

        while (exp <=7 && bin != 0) {      
            
            if (bin % 10 == 1) {          

                num = bin % 10;            
                num = num * pow(2,exp);    
                exp++;                     
                soma = soma + num;         
                bin /= 10;                
                
            }
            else {                        
                
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
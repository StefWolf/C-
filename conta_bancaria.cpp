#include <stdio.h>
#include <stdlib.h>
#include <iostream>

 using namespace std;
   struct conta{
    char name[30];
    float money;
    float moneyatually;
    int cpf;
   };
   int main(){
       conta cont;
       FILE *arq;
       arq = fopen("registro.txt", "wt");
       cout << "Nome: ";
       cin >> cont.name;
       system("cls");
       cout << "CPF: ";
       cin >> cont.cpf;
       system("cls");
       cout << "Seu saldo: ";
       cin >> cont.moneyatually;
       system("cls");
       cout << "Sacar: ";
       cin >> cont.money; 

       cont.moneyatually = (cont.moneyatually-cont.money);

       if(cont.moneyatually < cont.money){
           cout << "Saldo insuficiênte" << endl;
           return 0;
       }
       else {
           fprintf(arq, "------------Registro do Saque-----------");
           fprintf(arq, "\nNome: %s", cont.name);
           fprintf(arq, "\nCPF: %i", cont.cpf);
           fprintf(arq, "\nDinheiro sacado: %2.f-", cont.money);
           fprintf(arq, "\nSaldo Atual: %2.f", cont.moneyatually);
           cout << "Imprimindo conta bancária.....";

       }
       

   }
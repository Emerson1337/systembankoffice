#include <stdio.h>


//System of: Emerson Lucena dos Santos.
//Computer Science student - UECE.
//First semester.
//Comments in Portuguese - BR.

int main() {

  int resp,op,count=0,conta[20],i,num,num2;
  float saldo[20];
    
  do{
  //Definindo variavel para verificacao de contas ja cadastradas.
        int find = 1; 
        
  printf("_______________________________________________________________\n\n");
  printf("Bem vindo ao banco da Coreia do Norte. Aqui amamos o capitalismo.\n");
  printf("Qual operacao deseja realizar?\n\n");
  printf("1 - Cadastrar conta bancaria.\n2 - Deposito.\n3 - Sacar um determinado valor.\n4 - Transferir um valor.\n5 - Listar contas cadastradas.");
printf("\n_______________________________________________________________\n\n");

scanf("%d", &op);

switch(op){

//Primeiro caso: cadastramento de contas.
  case 1:
  printf("\nInsira o numero da conta bancaria em 6 (seis) digitos abaixo:\n\n");
  scanf("%d", &num2);
                
  if(num2>999999 || num2<100000){
     printf("\nA conta precisa ter 6 digitos\n");
    break;
  } 
                                                        
 for(i = 0; i<=count; i++){
   if(conta[i]==num2){ 
    printf("\nEssa conta ja esta cadastrada no sistema!\n");           
    find = 0;                    
    break;
   } 
}
 
 if(find!=0){        
    conta[count]=num2;
    saldo[count]=0;
    count++;
    printf("\nConta cadastrada com sucesso!\n\n");            
      break;          
            }           
 break;



//Segundo caso: Deposito em contas.
 case 2:
 printf("\nDigite o numero da conta que deseja depositar:\n");
 scanf("%d", &num);

for (i = 0; i<count; i++){

 if(conta[i]==num){  
   printf("\nQuanto deseja depositar?\n");
   scanf("%f", &saldo[i]);
   printf("\nQuantia despositada com sucesso!\n");
   break;
   } 
} 

 if(conta[i]!=num){
    printf("\nEssa conta nao esta cadastrada no sistema.\n");
    break;
  }

  break;



//Terceiro caso: saque de dinheiro das contas cadastradas.
 case 3:
 printf("\nDigite a conta que deseja sacar:\n");
 scanf("%d", &num);

 for (i = 0; i<=count; i++){ 

   if(conta[i]==num){

    float valor;
    printf("\nQual quantia que deseja retirar da conta?\n");
    scanf("%f", &valor);

    if(valor<=saldo[i]){
      saldo[i] = saldo[i]-valor;
      printf("\nDinheiro retirado com sucesso!\n");
      break;
    } else {
      printf("\nSaldo insuficiente para realizar o saque!\n");
    break;
    }
break;
   }
 }
 
 if(conta[i]!=num){
    printf("\nConta inexistente!\n");
  break;
  } 

break;
 


//Quarto caso: transferencia de dinheiro entre as contas cadastradas.
 case 4:
 printf("\nDigite sua conta:\n");
 scanf("%d", &num);

 for( i = 0; i<count; i++){

   if(conta[i]==num){

     int qtd;
     printf("\nDigite a quantia que deseja transferir:\n");
     scanf("%d", &qtd);

     if(qtd<=saldo[i]){
       
       int ct; //conta de transferencia
       printf("\nDigite a conta que deseja transferir a quantia:\n");
       scanf("%d", &ct);
        
        for(int o = 0; o<count; o++){

          if (conta[o]==ct){
            saldo[i]=saldo[i]-qtd;                                
            saldo[o] = saldo[o]+qtd;
            printf("\nTransferencia concluida com sucesso!\n");
            find = 0;
            break;
          }

        }
         if(find != 0){
                printf("\nA conta de recebimento nao esta cadastrada no sistema!\n");
                        }
break;
     } else {
       printf("\nSaldo insuficiente para transferencia!\n");
       break;
     }
  break;
   }
  }

if(conta[i]!=num){
  printf("\nConta inexistente!\n");
  break;
}
break;



//Quinto caso: listagem das contas cadastradas, e seus respectivos saldos, no sistema.
 case 5:
  printf("\nAs contas cadastradas sao:\n\n");
  for (i = 0; i<count ; i++){
    printf("%d, saldo: R$%.2f\n", conta[i], saldo[i]);
  }
break;

default:
printf("\nCodigo invalido!\n");
break;
}




//Verificacao de continuacao ou nao da utilizacao do sistema. Efetuada a cada operacao.
printf("\nDigite qualquer numero para continuar e 0 para sair do sistema.\n");
scanf("%d", &resp);
  
  }while(resp!=0);

    return 0;
}

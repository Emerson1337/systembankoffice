#include stdio.h


Sistema feito por Emerson Lucena dos Santos
Aluno do curso de Ciência da Computação - UECE
1° Semestre.





int main() {

  FILE dados;
  dados = fopen(dados.txt, wra);

  int resp,op,count,conta[10],i,num;
  float saldo[10];

  do{
    printf(_______________________________________________________________nn);
    printf(Bem vindo ao banco da Coreia do Norte. Aqui amamos o capitalismo.n);
  printf(Qual operação deseja realizarnn);
  printf(1 - Cadastrar conta bancária.n2 - Depósito.n3 - Sacar um determinado valor.n4 - Transferir um valor.n5 - Listar contas cadastradas.);
printf(n_______________________________________________________________nn);

scanf(%d, &op);

switch(op){

  case 1
  printf(nInsira o número da conta bancária em 6 (seis) dígitos abaixonn);
  scanf(%d, &conta[count]);

  if(conta[count]=999999 &&  conta[count]=100000){
    saldo[count]=0;
    count++;
    printf(nConta cadastrada com sucesso!nn);
    
  } else {
    printf(nA conta precisa ter 6 dígitosn);
  }
 break;

 case 2
 printf(nDigite o número da conta que deseja depositarn);
 scanf(%d, &num);

for (i = 0; icount; i++){

 if(conta[i]==num){  
   printf(nQuanto deseja depositarn);
   scanf(%f, &saldo[i]);
   printf(nQuantia despositada com sucesso!n);
   break;
   } 
} 

 if(conta[i]!=num){
    printf(nEssa conta não está cadastrada no sistema.n);
    break;
  }

  break;

 case 3
 printf(nDigite a conta que deseja sacarn);
 scanf(%d, &num);

 for (i = 0; i=count; i++){ 

   if(conta[i]==num){

    float valor;
    printf(nQual quantia que deseja retirar da contan);
    scanf(%f, &valor);

    if(valor=saldo[i]){
      saldo[i] = saldo[i]-valor;
      printf(nDinheiro retirado com sucesso!n);
      break;
    } else {
      printf(nSaldo insuficiente para realizar o saque!n);
    break;
    }
break;
   }
 }
 
 if(conta[i]!=num){
    printf(nConta inexistente!n);
  break;
  } 

break;
 
 case 4
 printf(nDigite sua contan);
 scanf(%d, &num);

 for( i = 0; icount; i++){

   if(conta[i]==num){

     int qtd;
     printf(nDigite a quantia que deseja transferirn);
     scanf(%d, &qtd);

     if(qtd=saldo[i]){
       
       int ct; conta de transferência
       saldo[i]=saldo[i]-qtd;
       printf(nDigite a conta que deseja transferir a quantian);
       scanf(%d, &ct);
        
        for(int o = 0; ocount; o++){

          if (conta[o]==ct){
            saldo[o] = saldo[o]+qtd;
            printf(nTransferência concluída com sucesso!n);
            break;
          }

        }
break;
     } else {
       printf(nSaldo insuficiente para transferência!n);
       break;
     }
  break;
   }
  }

if(conta[i]!=num){
  printf(nConta inexistente!n);
  break;
}
break;

 case 5
  printf(nAs contas cadastradas sãonn);
  for (i = 0; icount ; i++){
    printf(%d, saldo R$%.2fn, conta[i], saldo[i]);
  }
break;

}

printf(nDigite qualquer número para continuar e 0 para sair do sistema.n);
scanf(%d, &resp);
  }while(resp!=0);

    return 0;
}
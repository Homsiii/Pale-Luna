#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL,"Portuguese");

    char resposta[50];
    bool tem_ouro = false;
    bool tem_pa = false;
    bool tem_corda = false;
    bool abrir_porta = false;
    
// PRIMEIRA PARTE //

printf("Você está em uma sala escura. A luz da lua raia pela janela.\n");
printf("Há OURO no canto da sala, junto com uma PÁ e uma CORDA.\n");
printf("Tem uma PORTA no LESTE.\n\n");

while (true) {
    printf("Comando?\n\n ");
    printf("> ");
    fgets(resposta, 50, stdin);

    if (strcmp(resposta, "PEGAR OURO\n") == 0) {
        if (tem_ouro) {
            exit(0);
        } else {
            tem_ouro = true;
            printf("Pegou.\n\n");
        }
    } else if (strcmp(resposta, "PEGAR PA\n") == 0) {
        if (tem_pa) {
            exit(0);
        } else {
            tem_pa = true;
            printf("Pegou.\n\n");
        }
    } else if (strcmp(resposta, "PEGAR CORDA\n") == 0) {
        if (tem_corda) {
           exit(0);
        } else {
            tem_corda = true;
            printf("Pegou.\n\n");
        }
    } else if (strcmp(resposta, "ABRIR PORTA\n") == 0) {
        if (tem_ouro && tem_pa && tem_corda ) {
            printf("Você abriu a PORTA.\n\n");
            abrir_porta = true;
        } else {
             exit(0);
        }
    } else if (strcmp(resposta, "LESTE\n") == 0) {
        if (abrir_porta){
        	system("cls");
            goto caralho;
        } else{
             exit(0);
        }
    } else {
        exit(0);
    }
}

// SEGUNDA PARTE // 

caralho:
	
char direcoes_corretas[30][10] = {
    "OESTE", "LESTE", "NORTE", "LESTE", "LESTE", "NORTE", "LESTE", "OESTE", "OESTE",
    "NORTE", "LESTE", "OESTE", "NORTE", "NORTE", "OESTE", "OESTE", "LESTE", "OESTE",
    "NORTE", "NORTE", "NORTE", "LESTE", "OESTE", "OESTE", "LESTE", "LESTE", "OESTE",
    "LESTE", "NORTE", "NORTE"
};

for (int i = 0; i < 30; i++) {
    printf("\nPegue sua recompensa.\n");
    printf("A LUA PÁLIDA SORRI PARA VOCÊ.\n\n\n");
    printf("Você está em um floresta. Existem caminhos para o NORTE, OESTE, e LESTE.\n\n");
    printf("\nComando? \n");
    printf("> ");
    fgets(resposta, 50, stdin);
    resposta[strcspn(resposta, "\n")] = 0; 

    if (strcmp(resposta, direcoes_corretas[i]) == 0) {
    } else {
        exit(0);
    }
}


// TERCEIRA PARTE //


    char comando[50];  
    bool tem_buraco = false;
    bool largo_oro = false;
    bool tapo_buraco = false;
    bool enforcou_corda = true;
    
    system("cls");
    printf("\n\nA LUA PÁLIDA SORRI LARGAMENTE.\n");
    printf("Não há caminhos.\n");
    printf("A LUA PÁLIDA SORRI LARGAMENTE.\n");
    printf("O chão está macio.\n");
    printf("A LUA PÁLIDA SORRI LARGAMENTE.\n");
    printf("Aqui.\n\n");

while (true) {
    printf("\n> ");
    fgets(comando, 50, stdin);
    
    if (strcmp(comando, "CAVAR BURACO\n") == 0) {
        if (tem_buraco) {
            exit(0);
        } else {
            tem_buraco = true;
            printf("Você cavou um buraco.\n\n");
        }
    } else if (strcmp(comando, "LARGAR OURO\n") == 0) {
        if (tem_buraco) {
            if (largo_oro) {
                exit(0);
            } else {
                largo_oro = true;
                printf("Você largou o ouro no buraco.\n\n");
            }
        } else {
            exit(0);
        }
    } else if (strcmp(comando, "USAR CORDA\n") == 0) {
        if (!enforcou_corda) {
            exit(0);
        } else {
            enforcou_corda = false;
            printf("Você já usou a corda.\n\n");
        }
    } else if (strcmp(comando, "TAPAR BURACO\n") == 0) {
        if (tem_buraco && largo_oro && !tapo_buraco) {
            tapo_buraco = true;
            printf("Você tapou o buraco.\n\n");
            goto fim;
        } else if (tapo_buraco) {
            exit(0);
        } else {
            exit(0);
        }
    }
}

fim:
    while (true) {
        printf("----------------------- Parabéns!! ----------------------- \n\n");
    }
    return 0;
}



   


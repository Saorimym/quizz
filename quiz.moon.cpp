    #include <stdlib.h>
#include <stdio.h>


int main()
{

system("color 3f");

printf("\n                                      #######  ##     ## #### ########");
printf("\n                                     ##     ## ##     ##  ##       ##  ");
printf("\n                                     ##     ## ##     ##  ##      ##   ");
printf("\n                                     ##     ## ##     ##  ##     ##    ");
printf("\n                                     ##  ## ## ##     ##  ##    ##     ");
printf("\n                                     ##    ##  ##     ##  ##   ##      ");
printf("\n                                      ##### ##  #######  #### ######## ");




do{
            cod2 = getch();  
		}while (cod2 != 10);
		
        system("cls");
        system("color f6");
        
        printf("\n\n\n-----------------------------------------------------------------------------\n");
        printf("                             QUIZ  MOO\n");
        printf("-----------------------------------------------------------------------------\n");
        printf ("\n\n\n\n   Ol�, seja bem vindo ao  QUIZ MOO!!!!!!.");
        printf("\n\n\n   Acerte o maximo e conquiste o ouro UwU");
        printf("\n\n\n   acertar ou empatar da em... GAME OVER!");

        printf("\n\n\n                                                    enter para avan�ar!");
        
        do{
            cod2 = getch();  
		}while (cod2 != 10);
		
		system("cls");
        system("color f0");
        
        printf("***********************************************************************************\n");
        printf("                            INSTRU��ES DO JOGO\n");
        printf("***********************************************************************************\n");
        printf("\n||=============================================================================||\n");
 printf("\n||                                                                               ||");
        printf("\n||* O jogo possui apenas uma alternativa correta;                                ||");
        printf("\n||                                                                               ||");
        printf("\n||* o Jogador tem que escolher uma alternatitva e digitar a letra correspondente;||");
        printf("\n||                                                                               ||");
        printf("\n||* Ap�s responder cada pergunta aperte ENTER e passe para a pr�xima;            ||");
        printf("\n||                                                                               ||");
        printf("\n||* No final ter� a op��o de retornar ao jogo ou ir para o placar final          ||");
        printf("\n||                                                                               ||");
        printf("\n||* Se acertar a resposta o jogo vai te indicar com a cor verde;                 ||");
        printf("\n||                                                                               ||");
        printf("\n||* Se errar a respota o jogo vai te indicar com a cor vermelha                  ||");
        printf("\n||                                                                               ||");
        printf("\n||         TwT  :3  :p   WuW                                                     ||");
        printf("\n||===============================================================================||");

        printf("\n\n                  QUE A SORTE ESTEJA A SEU FAVOR!");

        printf("\n\n\nVamos comecar! \n\n");

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        printf("\n\nAperte enter !");

        do{
            cod2 = getch();
        }while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/



//R�tulo, comando para onde o GoTo ir� Saltar ao ser solicitado
        Inicio :  system("color B");

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                                Quiz MOON     \n");
        printf("*******************************************************************************\n");

//Primeira pergunta

        printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE ?");
        printf("\n\na)Chicara");
        printf("\n\nb)Jil�");
        printf("\n\nc)Emcima");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[0]);
        printf("\n===============================================================================");
//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[0]=='b'|| cg_alt[0]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                               QUIZ  MOON     \n");
        printf("*******************************************************************************\n");

//Segunda pergunta
        printf ("\n2) QUAL POVO PR�-COLOMBIANO OCUPOU A REGI�O ONDE HOJE SE");
        printf("\n\nLOCALIZA O M�XICO ?");
        printf("\n\na)Maias");
        printf("\n\nb)Incas");
        printf("\n\nc)Astecas");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[1]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[1]=='a'|| cg_alt[1]=='A')
{
        system("color A");
        printf("\n\nCerta resposta");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                                 QUIZ   MOON    \n");
        printf("*******************************************************************************\n");

//Terceira pergunta
        printf ("\n3) QUAL O MAIOR ANIMAL DA TERRA ?");
        printf("\n\na)Elefante");
        printf("\n\nb)Tubar�o-Baleia");
        printf("\n\nc)Baleia azul");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[2]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[2]=='c'||cg_alt[2]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("Resposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                                QUIZ   MOON    \n");
        printf("*******************************************************************************\n");

//Quarta pergunta
        printf ("\n4) QUAL � O JOGO MAIS JOGADO NO MUNDO ATUALMENTE ?");
        printf("\n\na)League of legends");
        printf("\n\nb)Counter strike");
        printf("\n\nc)Battlefield");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[3]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[3]=='a'||cg_alt[3]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                            QUIZ  MOON     \n");
        printf("*******************************************************************************\n");

//Quinta pergunta
        printf ("\n5) QUATRO MOEDAS S�O LAN�ADAS SIMULTANEAMENTE. QUAL A PROBABILIDADE");
        printf ("\nDE OCORRER COROA EM UMA S� MOEDA ?");
        printf("\n\na)1/8");
        printf("\n\nb)2/9");
        printf("\n\nc)1/4");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[4]);
        printf("\n===============================================================================");


//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[4]=='c'||cg_alt[4]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                                 QUIZ    MOON   \n");
        printf("*******************************************************************************\n");

//Sexta pergunta
        printf ("\n6) EM QUAL PA�S FOI CONSTRU�DO UM CANAL QUE LIGA OS OCEANOS ATL�NTICO E PAC�FICO ?");
        printf("\n\na)M�xico");
        printf("\n\nb)Panam�");
        printf("\n\nc)EUA");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[5]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[5]=='b'||cg_alt[5]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                              QUIZ    MOON   \n");
        printf("*******************************************************************************\n");

//S�tima pergunta
        printf ("\n7) QUAL A PROPOSI��O COMPOSTA LOGICAMENTE VERDADEIRA ?");
        printf("\n\na)(2=2)=>(2.3=5)");
        printf("\n\nb)(2=3)e(2.3=5)");
        printf("\n\nc)(2=3)=>(2.3=5)");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[6]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[6]=='c'||cg_alt[6]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");

        system("color B");

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                               QUIZ    MOON   \n");
        printf("*******************************************************************************\n");

//Oitava pergunta
        printf ("\n8) QUAL PA�S EST� LOCALIZADO NA AM�RICA DO NORTE ?");
        printf("\n\na)Haiti");
        printf("\n\nb)M�xico");
        printf("\n\nc)Groel�ndia");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[7]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[7]=='c'||cg_alt[7]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("*******************************************************************************\n");
        printf("                                QUIZ    MOON   \n");
        printf("*******************************************************************************\n");

//Nona pergunta
        printf ("\n9) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O G�NERO INDICADO INCORRETAMENTE ?");
        printf("\n\na)a �gape");
        printf("\n\nb)a grama");
        printf("\n\nc)a h�lice");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[8]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[8]=='a'||cg_alt[8]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

        printf("*******************************************************************************\n");
        printf("                                QUIZ  MOON     \n");
        printf("*******************************************************************************\n");

//D�cima pergunta
        printf ("\n10) O T�TANO � UMA DOEN�A AGUDA E CONTAGIOSA QUE PODE SER");
        printf("\n\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES ?");
        printf("\n\na)Certo");
        printf("\n\nb)Errado");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[9]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[9]=='b'||cg_alt[9]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

        printf("*******************************************************************************\n");
        printf("                                SUPER MOON  \n");
        printf("*******************************************************************************\n");

//D�cima primeira pergunta
        printf ("\n11) CAPIT�ES DE AREIA � UM ROMANCE ESCRITO POR QUAL AUTOR ?");
        printf("\n\na)Guimar�es Rosa");
        printf("\n\nb)Machado de Assis.");
        printf("\n\nc)Jorge Amado.");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[10]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[10]=='c'||cg_alt[10]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("*******************************************************************************\n");
        printf("                                QUIZ MOON      \n");
        printf("*******************************************************************************\n");

//D�cima Segunda pergunta
        printf ("\n12) O PLURAL DE FOG�OZINHO E CIDAD� � : ");
        printf("\n\na)fog�ezinhos e cidad�os.");
        printf("\n\nb)fog�ozinhos e cidad�os.");
        printf("\n\nc)fog�ezinhos e cidad�es.");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[11]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[11]=='a'||cg_alt[11]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("Resposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("*******************************************************************************\n");
        printf("                                QUIZ  Moon     \n");
        printf("*******************************************************************************\n");

//D�cima terceira pergunta
        printf ("\n13) QUEM FOI O ATOR PRINCIPAL DO FILME SR E SR� SMITH ? ");
        printf("\n\na)Brad Pitt");
        printf("\n\nb)Tom Hanks");
        printf("\n\nc)Tom Cruise");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[12]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[12]=='a'||cg_alt[12]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repeti��o enquanto o usu�rio apertar enter para avan�ar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("*******************************************************************************\n");
        printf("                                 QUIZ MOON      \n");
        printf("*******************************************************************************\n");

//D�cima quarta pergunta
        printf ("\n14) DADA AS SENTEN�AS: ");
        printf("\n\n1. Ele n�o chegou a falar com a Presidenta;");
        printf("\n\n 2. Ele sofreu um entorse grave;");
        printf("\n\n 3. A tracoma � uma doen�a contagiosa.");
        printf("\n\nDeduzimos que:");
        printf("\n\na)apenas a senten�a 2 est� correta");
        printf("\n\nb) todas est�o corretas");
        printf("\n\nc)apenas a senten�a 1 est� correta");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[13]);
        printf("\n===============================================================================");

//Utilizar a condicional if...else, para analisar a resposta do usu�rio
        if (cg_alt[13]=='c'||cg_alt[13]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta


  
  
		
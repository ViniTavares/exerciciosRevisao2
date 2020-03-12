typedef struct
{

    char nome[21];
    char tipo[21];
    int integrantes;
    int posicao;

} banda;

void preencher(banda x[5])
{


    for(int i=0; i<5; i++)
    {
        printf("Digite o nome da banda[%i]:\n", i);
        fgets(x[i].nome,21,stdin);
        x[i].nome[strcspn(x[i].nome,"\n")]='\0';
        setbuf(stdin,NULL);
        printf("Digite o tipo da banda[%i]:\n", i);
        fgets(x[i].tipo,21,stdin);
        x[i].tipo[strcspn(x[i].tipo,"\n")]='\0';
        setbuf(stdin,NULL);
        printf("Digite o numero de integrantes da banda[%i]:\n", i);
        scanf("%i", &x[i].integrantes);
        setbuf(stdin,NULL);
        printf("Digite a posicao da banda[%i] entre as suas 5 favoritas:\n", i);
        scanf("%i", &x[i].posicao);
        setbuf(stdin,NULL);
    }

}

void exibir(banda x[5])
{
    int a=0;
    printf("\nDigite um numero de 1 a 5:\n");
    scanf("%i", &a);
    switch(a)
    {
    case 1:
        for(int i=0; i<5; i++)
        {
            if(x[i].posicao==1)
            {
                printf("Nome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
            }

        }
        break;
    case 2:
        for(int i=0; i<5; i++)
        {
            if(x[i].posicao==2)
            {
                printf("Nome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
            }

        }
        break;
    case 3:
        for(int i=0; i<5; i++)
        {
            if(x[i].posicao==3)
            {
                printf("Nome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
            }

        }
        break;
    case 4:
        for(int i=0; i<5; i++)
        {
            if(x[i].posicao==4)
            {
                printf("Nome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
            }

        }
        break;
    case 5:
        for(int i=0; i<5; i++)
        {
            if(x[i].posicao==5)
            {
                printf("Nome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
            }

        }
        break;
    default:
        printf("opcao invalida");

    }

}

int main()
{
    banda x[5];
    preencher(x);
    for(int i=0; i<5; i++)
    {
        printf("\nNome da banda: %s\nTipo musical: %s\nNumero de integrantes: %i\nPosicao no ranking: %i\n", x[i].nome, x[i].tipo,x[i].integrantes,x[i].posicao);
    }

    exibir(x);
    return 0;
}
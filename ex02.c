int main()
{
    FILE *arqa;
    FILE *arqb;

    char nomea[21];
    char nomeb[21];
    char a[8];
    printf("Digite o nome do arquivo a ser aberto:\n");
    fgets(nomea,21,stdin);
    nomea[strcspn(nomea,"\n")]='\0';
    setbuf(stdin,NULL);
    printf("Digite o nome do arquivo de saida:\n");
    fgets(nomeb,21,stdin);
    nomeb[strcspn(nomeb,"\n")]='\0';
    setbuf(stdin,NULL);
    arqa=fopen(nomea, "r");
    arqb=fopen(nomeb, "w");

    if(arqa==NULL)
    {
        printf("ERRO");
    }
    for(int i=0; i<8; i++)
    {
        a[i]=fgetc(arqa);
    }
    for(int i=0; i<8; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' ||a[i]=='o' ||a[i]=='u')
        {
            a[i]='*';
        }
        printf("%c", a[i]);
    }

    for(int i=0; i<8; i++)
    {
        fprintf(arqb,"%c",a[i]);

    }


    fclose(arqa);
    fclose(arqb);

    return 0;
}


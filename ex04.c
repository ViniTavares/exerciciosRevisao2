void *criarVet(int tam)
{
    int *vet;

    vet=(int*) malloc(tam*sizeof(int));

    for(int i=0; i<tam; i++)
    {
        printf("Digite o elemento[%i]:\n",i);
        scanf("%i",&vet[i]);

    }
    return vet;

}

int main()
{
    int tam, *v;

    printf("Digite o tamnho do vetor:\n");
    scanf("%i", &tam);
    v=criarVet(tam);
    printf("Vetor: \n");
    for(int i=0; i<tam; i++)
    {
        printf("%i\n",v[i]);

    }

    free(v);
    return 0;
}

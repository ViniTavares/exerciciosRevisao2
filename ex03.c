int rec(int x, int y)
{
    if(y==0)
    {

        return 1;
    }
    if(y==1)
    {

        return x;
    }
    if(y>1)
    {
        x*=x;
        return rec(x,y-1);
    }

}

int main()
{
    int x,y;
    printf("Digite a base:\n");
    scanf("%i", &x);
    printf("Digite o expoente:\n");
    scanf("%i", &y);

    printf("%i\n", rec(x,y));

    return 0;
}

void Pyramid(int);
void main()
{
    printf("Rishabh \n");
    Pyramid(6);
    printf("Dhawad \n");
    Pyramid(7);
    printf("India \n");  
}

void Pyramid(int n) 
{
    int i , j ;
    for ( i = 1 ; i <= n ; i++ ) 
    {
        for ( j = 1 ; j <= i ; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}
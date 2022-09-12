void Pyramid();
void main () 
{
    printf("Rishabh \n");
    Pyramid();
    printf("Dhawad \n");
    Pyramid();
    printf("India \n"); 
}

void Pyramid()
{
    int i , j ;
    for ( i = 1 ; i <= 5 ; i++ ) 
    {
        for ( j = 1 ; j <= i ; j++ ) 
        {
            printf("*");
        }
        printf("\n");
    }
}
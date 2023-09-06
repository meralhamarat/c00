void ft_putchar(char c);

void rush(int x, int y)
{
    int x_c;
    int y_c;

    if (y < 1 || x< 1)
        return;
    y_c = 1;    
    while (y_c <= y)
    {
        x_c = 1;
        while (x_c <= x)
        { 
            if ((x_c == 1 && y_c == 1) 
                || ( y_c == y && x_c == x && x != 1 && y != 1))
                ft_putchar('A');
            else if ((x_c == x && y_c == 1 ) || (x_c == 1 && y_c == y))
                ft_putchar('C');
            else if (( y_c > 1 && y_c < y ) && (x_c > 1 && x_c < x))
                ft_putchar(' ');
            else 
                ft_putchar('B');    
            x_c++;
        }  
        ft_putchar('\n');
        y_c++;
    }
}
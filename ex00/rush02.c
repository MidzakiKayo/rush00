#include <unistd.h>

void	rush(int a, int b);
void	print_line(int width, char start, char mid, char end);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int width, char start, char mid, char end)
{
	int	i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
		{
			ft_putchar(start);
		}
		else if (i < width)
		{
			ft_putchar(mid);
		}
		else if (i == width || i != 1)
		{
			ft_putchar(end);
		}
		i++;
	}
}

void	rush(int a, int b)
{
	int	line;

	line = 1;
	while (line <= b)
	{
		if (line == 1)
		{
			print_line (a, 'A', 'B', 'A');
		}
		else if (line < b)
		{
			print_line (a, 'B', ' ', 'B');
		}
		else if (line == b || line != 1)
		{
			print_line (a, 'C', 'B', 'C');
		}
		ft_putchar('\n');
		line++;
	}
}

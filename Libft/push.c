#include "libft.h"

int main(int ac, char **av)
{
    char *add;
    char *commit;

    add = ft_strjoin("git add ", av[1]);
    commit = ft_strjoin("git commit -m ", av[2]);
    system(add);
    system(commit);
    system("git push");
}
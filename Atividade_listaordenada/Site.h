#include <iostream>
class Site
{
public:
    std ::string Url_site;
    int Acessos, n;
    Site *elo;
    Site **Inserir(Site **, std ::string, int);
    void Listar(Site *);
    Site **Excluir(Site **, std ::string, bool *);
    Site *Pesquisar(Site *, std ::string);
};

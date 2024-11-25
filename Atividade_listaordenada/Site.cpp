#include "Site.h"
void Site ::Listar(Site *I)
{
    Site *aux = I;
    while (aux != NULL)
    {
        std ::cout << aux->Url_site << " - " << aux->Acessos << " \n ";
        aux = aux->elo;
    }
};

Site *Site::Pesquisar(Site *R, std::string U)
{
    Site *aux = R;
    while (aux != NULL && aux->Url_site != U)
    {
        aux = aux->elo;
    }
    return aux;
}

Site **Site ::Inserir(Site **R, std ::string U, int N)
{
    Site *novo = new Site();
    novo->Url_site = U;
    novo->Acessos = N;
    if (R[0] == NULL)
    {
        R[0] = novo;
        R[1] = novo;
        R[1]->elo = NULL;
    }
    else
    {
        Site *atual = R[0], *ant = NULL;
        while ((atual != NULL) && (novo->Acessos < atual->Acessos))
        {
            ant = atual;
            atual = atual->elo;
        }
        while ((atual != NULL) && (novo->Acessos == atual->Acessos && novo->Url_site > atual->Url_site))
        {
            ant = atual;
            atual = atual->elo;
        }
        if (ant == NULL)
        {
            novo->elo = atual;
            R[0] = novo;
        }
        else if (atual == NULL)
        {
            ant->elo = NULL;
            R[1]->elo = novo;
            R[1]->elo = novo;
        }
        else
        {
            ant->elo = novo;
            novo->elo = atual;
        }
    }
    return R;
};

Site **Site ::Excluir(Site **R, std ::string N, bool *achei)
{
    Site *atual = R[0], *ant = NULL;
    while ((atual != NULL) && (atual->Url_site != N))
    {
        ant = atual;
        atual = atual->elo;
    }
    if (atual == NULL)
    {
        *achei = false;
        return R;
    }
    else
    {
        *achei = true;
        if (atual == R[0])
        {
            R[0] = R[0]->elo;
        }
        else if (atual == R[1])
        {
            R[1] = ant;
            R[1]->elo = NULL;
        }
        else
        {
            ant->elo = atual->elo;
        }
        delete (atual);
    }
    return R;
};


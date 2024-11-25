#include "Site.h"

using namespace std;

void Menu()
{
    system(" clear ");
    cout << "1 - Inserir \n";
    cout << "2 - Listar \n";
    cout << "3 - Excluir \n";
    cout << "4 - Sair \n";
    cout << " Informe sua opcao : ";
}

int main()
{
    Site ** P, obj, *pesquisa;
    P = new Site *[2];
    string url_site;
    int op, acessos;
    bool achei;
    do
    {
        Menu();
        cin >> op;
        switch (op)
        {
        case 1:
            cout << " Informe o Url do Site : ";
            cin.ignore();
            getline(cin, url_site);
            pesquisa = obj.Pesquisar(P[0], url_site);
            if(pesquisa == NULL){
                P = obj.Inserir(P, url_site, 1);
            }else{
                acessos = pesquisa->Acessos +1;
                P = obj.Excluir(P, url_site, &achei);
                P =obj.Inserir(P, url_site, acessos);
            }
            cout << " Inserido com sucesso !!\n ";
            break;
        case 2:
            if (P[0] == NULL)
            {
                cout << " Nenhum site cadastrado !\n";
            }
            else
            {
                cout << " Sites cadastrados\n\n";
                obj.Listar(P[0]);
            }
            break;
        case 3:
            if (P[0] == NULL)
            {
                cout << " Nenhum site cadastrado !\n";
            }
            else
            {
                cout << " Informe o Url do site a ser excluido: ";
                cin.ignore();
                getline(cin, url_site);
                P = obj.Excluir(P, url_site, &achei);
                if (achei)
                    cout << " Excluido com sucesso!\n ";
                else
                    cout << " Site não localizado!\n";
            }
            break;
        case 4:
            cout << " Tchau !\n";
            break;
        default:
            cout << " Opção inválida !\n ";
        }
        cin.ignore().get();
    } while (op != 4);
    return 0;
}

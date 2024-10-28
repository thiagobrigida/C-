#include "Pessoa.h"
#include "Cidade.h"
#include "Estado.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "1 - Inserir\n";
    cout << "2 - Listar\n";
    cout << "3 - Excluir\n";
    cout << "4 - Maior Cidade\n";
    cout << "5 - Menor Estado\n";
    cout << "6 - Sair\n";
    cout << "Escolha sua opção: ";
};

int main()
{
    Pessoa *Inicio = NULL, *Fim = NULL, P;
    Cidade *IniCidade = NULL, *FimCidade = NULL, C;
    Estado *IniEstado = NULL, *FimEstado = NULL, E;
    string nome, cidade, estado;
    int op, ano, maiorCidade, menorEstado;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Informe o nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Informe a cidade: ";
                getline(cin, cidade);
                cout << "Informe o estado: ";
                getline(cin, estado);
                cout << "Informe o ano de nascimento: ";
                cin >> ano;
                Fim = P.Inserir(Fim, nome, cidade, estado, ano);
                if(Inicio == NULL)
                    Inicio = Fim;
                cout << "\nInserido!\n\n";
                // totalizando a cidade inserida
                if(!C.ProcuraCidade(IniCidade, cidade)){
                    FimCidade = C.Inserir(FimCidade, cidade);
                    if(IniCidade == NULL){
                        IniCidade = FimCidade;
                    }
                }
                if(!E.ProcuraEstado(IniEstado, estado)){
                    FimEstado = E.Inserir(FimEstado, estado);
                    if(IniEstado == NULL){
                        IniEstado = FimEstado;
                    }
                }
                break;
            case 2:
                if(Inicio == NULL)
                    cout << "Fila vazia!\n";
                else{
                    cout << "\nCadastrados\n\n";
                    P.Listar(Inicio);
                }
                break;
            case 3:
                if(Inicio == NULL)
                    cout << "Fila vazia!\n";
                else{
                    cidade = Inicio->Cidade;
                    Inicio = P.Excluir(Inicio);
                    C.diminuiQuantidade(IniCidade, cidade);
                    cout << "\nExcluido!\n\n";
                }
                break;
            case 4:
                if(IniCidade == NULL){
                    cout << "Fila Vazia!!!\n";
                }else{
                    maiorCidade = C.Maior(IniCidade);
                    cout << "A(s) cidade(s) que possuem a maior quantidade de pessoas cadastradas são:\n";
                    C.ListarMaior(IniCidade, maiorCidade);
                    cout << "\ne estas cidades possuem " << maiorCidade << " pessoas cadastradas.\n";
                }
                break;
            case 5:
                if(IniEstado == NULL){
                    cout << "Fila Vazia!!!\n";
                }else{
                    menorEstado = E.Menor(IniEstado);
                    cout << "O(s) estado(s) que possuem a menor qunatidade de pessoas cadastradas são:\n";
                    E.ListarMenor(IniEstado, menorEstado);
                    cout << "\ne estes estados possuem " << menorEstado << " pessoas cadastradas.\n";
                }
                break;
            case 6:
                cout << "\nFim!\n\n";
                break;
            default:
                cout << "Inválido!\n\n";
        }
        cin.ignore().get();
    }while(op != 6);
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Classe Data
class Data {
private:
    int dia, mes, ano;

public:
    // Construtores
    Data() : dia(0), mes(0), ano(0) {}
    Data(int d, int m, int a) : dia(d), mes(m), ano(a) {}
    Data(int a) : dia(0), mes(0), ano(a) {}

    void mostrarData() const {
        cout << (dia < 10 ? "0" : "") << dia << "/"
             << (mes < 10 ? "0" : "") << mes << "/"
             << ano;
    }
};

// Classe Livro
class Livro {
private:
    string titulo, autor, isbn;
    Data dataPublicacao;
    static int TOTAL_LIVROS; // Contador estático para o número de livros

public:
    // Construtores
    Livro() : titulo(""), autor(""), isbn(""), dataPublicacao() { TOTAL_LIVROS++; }
    Livro(string t, string a, string i, int d, int m, int ano)
        : titulo(t), autor(a), isbn(i), dataPublicacao(d, m, ano) {
        TOTAL_LIVROS++;
    }

    // Destrutor
    ~Livro() { TOTAL_LIVROS--; }

    // Métodos de acesso
    string getTitulo() const { return titulo; }
    string getISBN() const { return isbn; }
    void mostrarLivro() const {
        cout << "Título: " << titulo << "\nAutor: " << autor 
             << "\nISBN: " << isbn << "\nData de Publicação: ";
        dataPublicacao.mostrarData();
        cout << endl;
    }

    static int getTotalLivros() { return TOTAL_LIVROS; }
};
int Livro::TOTAL_LIVROS = 0; // Inicialização do atributo estático

// Vetores para gerenciar os registros
vector<Livro> acervo;

// Funções do sistema
void cadastrarLivro() {
    string titulo, autor, isbn;
    int dia, mes, ano;

    cout << "\nDigite o título do livro: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Digite o autor do livro: ";
    getline(cin, autor);
    cout << "Digite o ISBN do livro: ";
    cin >> isbn;
    cout << "Digite a data de publicação (DD MM AAAA): ";
    cin >> dia >> mes >> ano;

    acervo.emplace_back(titulo, autor, isbn, dia, mes, ano);
    cout << "Livro cadastrado com sucesso!\n";
}

void listarLivros() {
    if (acervo.empty()) {
        cout << "\nNenhum livro cadastrado.\n";
        return;
    }

    cout << "\nAcervo da Biblioteca:\n";
    for (const auto& livro : acervo) {
        livro.mostrarLivro();
        cout << "-------------------------\n";
    }
}

void pesquisarPorTitulo() {
    string titulo;
    cout << "\nDigite o título do livro a ser pesquisado: ";
    cin.ignore();
    getline(cin, titulo);

    bool encontrado = false;
    for (const auto& livro : acervo) {
        if (livro.getTitulo() == titulo) {
            livro.mostrarLivro();
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "Nenhum livro com o título informado foi encontrado.\n";
}

void pesquisarPorISBN() {
    string isbn;
    cout << "\nDigite o ISBN do livro a ser pesquisado: ";
    cin >> isbn;

    bool encontrado = false;
    for (const auto& livro : acervo) {
        if (livro.getISBN() == isbn) {
            livro.mostrarLivro();
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "Nenhum livro com o ISBN informado foi encontrado.\n";
}

void excluirLivro() {
    string isbn;
    cout << "\nDigite o ISBN do livro a ser excluído: ";
    cin >> isbn;

    for (auto it = acervo.begin(); it != acervo.end(); ++it) {
        if (it->getISBN() == isbn) {
            acervo.erase(it);
            cout << "Livro excluído com sucesso!\n";
            return;
        }
    }

    cout << "Livro com o ISBN informado não foi encontrado.\n";
}

void apagarTodosLivros() {
    acervo.clear();
    cout << "Todos os livros foram apagados!\n";
}

// Função principal
int main() {
    int opcao;

    do {
        cout << "\nMenu - Biblioteca:\n";
        cout << "1 - Cadastrar Livro\n";
        cout << "2 - Listar Livros\n";
        cout << "3 - Pesquisar por Título\n";
        cout << "4 - Pesquisar por ISBN\n";
        cout << "5 - Excluir Livro\n";
        cout << "6 - Apagar Todos os Livros\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                pesquisarPorTitulo();
                break;
            case 4:
                pesquisarPorISBN();
                break;
            case 5:
                excluirLivro();
                break;
            case 6:
                apagarTodosLivros();
                break;
            case 0:
                cout << "Saindo do programa...\n";
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }

    } while (opcao != 0);

    return 0;
}

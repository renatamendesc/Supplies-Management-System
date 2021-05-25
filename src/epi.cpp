#include "epi.h"

using namespace std;

EPI :: EPI(){
    this->tipo = 3;
}


void EPI :: setMaterial(string material){
    this->material =  material;
}

void EPI :: setQuantidadeDeUsos(string quantidadeUsos){
    this->quantidadeDeUsos = quantidadeUsos;
}


string EPI :: getMaterial(){
    return this->material;
}

string EPI :: getQuantidadeDeUsos(){
    return this->quantidadeDeUsos;
}


void EPI::cadastraAtributos(){

    std::cout << "\n--------------------- CADASTRAR UM EPI -----------------------\n\n";

    Insumo::cadastraAtributos();

    getchar();

    cout << "Material utilizado: ";
    getline(cin, this->material);

    cout << "Quantidade indicada de usos: ";
    getline(cin, this->quantidadeDeUsos);

}

void EPI::exibeInformacoes(){

    Insumo::exibeInformacoes();

    cout << "Material utilizado: " << this->material << endl;
    cout << "Quantidade indicada de usos: " << this->quantidadeDeUsos << endl;
    
}

void EPI::salvarDados(int estado){
    ofstream epi;
    epi.open("epi.csv", ios_base::app);

    Insumo::salvarDados(estado);

    epi << this->material << ",";
    epi << this->quantidadeDeUsos;

    epi.close();

}
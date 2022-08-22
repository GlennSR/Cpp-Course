#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, string> prod = {
        {5, "Headset"}
    };

    // INSERINDO ELEMENTOS
    // Forma 1:
    prod[0] = "Mouse";
    prod[1] = "Teclado";
    // Forma 2:
    prod.insert(make_pair(2, "Monitor"));
    prod.insert(make_pair(3, "Caixa de som"));

    for(auto it = prod.begin(); it != prod.end(); it++){
        cout << it->first << " = " << it->second << endl;
    }

    // DELETETANDO ELEMENTOS À PARTIR DA CHAVE
    prod.erase(2);
    cout << endl;

    for(auto it:prod){
        cout << it.first << " = " << it.second << endl;
    }

    // ENCONTRANDO ELEMENTOS NO MAP: MÉTODO FIND()
    // Obs: Só podemos procurar pelas chaves, não pelos valores
    map<int, string>::iterator itmap;

    itmap = prod.find(1);
    if(itmap == prod.end()){
        cout << "\nProduto não encontrado" << endl;
    }else{
        cout << "\nProduto em estoque\n";
        cout << "Código: " << itmap->first << " - Produto: " << itmap->second << endl;
    }

    // LIMPANDO O MAP POR INTEIRO
    prod.clear();

    cout << "\nMap produtos após limpeza: " << endl;
    for(auto it:prod){
        cout << it.first << " = " << it.second << endl;
    }


    // DELETANDO UMA SEQUÊNCIA DE ELEMENTOS COM ERASE()
    prod.insert(make_pair(0, "Mouse"));
    prod.insert(make_pair(10, "Teclado"));
    prod.insert(make_pair(6, "Monitor"));
    prod.insert(make_pair(7, "Caixa de som"));
    prod.insert(make_pair(9, "Microfone"));

    prod.erase(prod.begin(), prod.find(7));

    cout << "\nMap produtos após erase: " << endl;
    for(auto it:prod){
        cout << it.first << " = " << it.second << endl;
    }
    
    return 0;
}
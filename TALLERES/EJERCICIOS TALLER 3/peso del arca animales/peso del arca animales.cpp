#include<iostream>
using namespace std;

int main()
{
    int n_perro, n_gato, n_conejo, n_iguana, n_cocodrilo, n_aves;
    double p_perro, p_gato, p_conejo, p_iguana, p_cocodrilo, p_aves;

    cout << "Ingrese el numero de perros: ";
    cin >> n_perro;
    cout <<"Ingrese el numero de gatos: ";
    cin >> n_gato;
    cout <<"Ingrese el numero de conejos: ";
    cin >> n_conejo;
    cout <<"Ingrese el numero de iguanas: ";
    cin >> n_iguana;
    cout <<"Ingrese el numero de cocodrilos: ";
    cin >> n_cocodrilo;
    cout <<"Ingrese el numero de aves: ";
    cin >> n_aves;
    cout<<" " << endl;
    cout << "Ingrese el peso de perros: ";
    cin >> p_perro;
    cout <<"Ingrese el peso de gatos: ";
    cin >> p_gato;
    cout <<"Ingrese el peso de conejos: ";
    cin >> p_conejo;
    cout <<"Ingrese el peso de iguanas: ";
    cin >> p_iguana;
    cout <<"Ingrese el peso de cocodrilos: ";
    cin >> p_cocodrilo;
    cout <<"Ingrese el peso de aves: ";
    cin >> p_aves;   

    int total_animales = (n_perro+n_gato+n_conejo+n_iguana+n_cocodrilo+n_aves);
    cout << "El total de animales es: "<<total_animales <<endl;

    double peso_arca= ((p_perro*n_perro)+(p_gato*n_gato)+(p_conejo*n_conejo)+(p_iguana*n_iguana)+(p_cocodrilo*n_cocodrilo)+(p_aves*n_aves));
    cout <<"El peso del arca es de: "<<peso_arca <<" Kg" <<endl;

    system("pause");
    return 0;

}
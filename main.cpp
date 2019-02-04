#include <iostream>
using namespace std;

int main() {
    int CantidadGrados;
    int GradosFh;
    
    cout<<"Cantidad de Grados centigrados: ";
    cin>>CantidadGrados;
   
    std::cout << "Grados Fahrenheit: " << ( 32 + (9 * CantidadGrados / 5) ) << std::endl;
}

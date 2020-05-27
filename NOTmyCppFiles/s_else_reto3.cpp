#include<iostream>
#include<fstream>
using namespace std;

//FUNCION PARA DIBUJAR EL MAPA
void dibujarMapa(int posicionHeroe[2], char mapa[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (posicionHeroe[0] == i && posicionHeroe[1] == j)
            {
                cout << 'H';
            }
            else
            {
                cout << mapa[i][j];
            }
        }
        cout << endl;
    }
}

//FUNCION PARA ASIGNAR UNA NUEVA POSICIÓN AL HÉROE
bool asignarNuevaPosicion(char movimiento, int posicionHeroe[2]){
    switch (movimiento)
    {
        case'a':
            posicionHeroe[1]--;
        break;
        case'd':
            posicionHeroe[1]++;
        break;
        case's':
            posicionHeroe[0]++;
        break;
        case'w':
            posicionHeroe[0]--;
        break;
        case'p':
            return true;
        break;
        default:
            break;
    }
    return false;
}

//FUNCIÓN PARA BUSCAR Y LEER UN ARCHIVO GUARDADO CON ANTERIORIDAD Y CARGAR LOS DATOS QUE CONTENGA
void leerArchivo(int posicionHeroe[2]){
    ifstream Archivo_Lectura("Datos.txt");
    string linea;
    char leer;
    if (Archivo_Lectura.is_open())
    {   
        cout << "Hemos encontrado un archivo de guardado. Deseas leerlo?" << endl <<
        "(y) Si" << endl <<
        "(cualquier tecla) No" << endl;
        cin >> leer;
        if (leer == 'y')
        {
            cout << "Leyendo tu archivo de guardado..." << endl;
            int i = 0;
            while(getline(Archivo_Lectura, linea)){
                posicionHeroe[i] = stoi(linea);
                i++;
            }
        }
    }
    else
    {
        cout << "No fue posible abrir el archivo" << endl;
    }
}

//FUNCIÓN PARA GUARDAR EL ARCHIVO UNA VEZ QUE LOS DATOS SON CONFIRMADOS.
void guardarArchivo(int posicionHeroe[2]){
    cout << "Guardando archivo..." << endl;
    ofstream Archivo("Datos.txt");
    if (Archivo.is_open())
    {
        Archivo << posicionHeroe[0] << endl;
        Archivo << posicionHeroe[1] << endl;
    }
    Archivo.close();
    cout << "Archivo guardado..." << endl;
}

//FUNCIÓN PARA CONFIGURAR LA POSICIÓN DEL HÉROE ANTES DE GUARDARLA
void configurarPosicionHeroe(int posicionHeroe[2], char mapa[5][5]){
    char movimiento = ' ';
    cout << "Selecciona la posicion de tu heroe:" << endl <<
    "(a) Izquierda" << endl << 
    "(d) Derecha" << endl <<
    "(w) Arriba" << endl <<
    "(s) Abajo" << endl << 
    "(y) para confirmar" << endl << endl;
    bool confirmarPosicion = false;
    do
    {
        dibujarMapa(posicionHeroe, mapa);
        cin >> movimiento;
        if (movimiento == 'y')
        {
            cout << "Esta seguro que desea configurar esta posicion de inicio?" << endl <<
            "(y) Si" << endl <<
            "(cualquier tecla) No" << endl;
            char confirmacion = ' ';
            cin >> confirmacion;
            if (confirmacion == 'y')
            {
                confirmarPosicion = true;
            }
        }
        else
        {
            asignarNuevaPosicion(movimiento, posicionHeroe);
        }
    } while (confirmarPosicion == false);
    guardarArchivo(posicionHeroe);
}

int main(){
    int posicionHeroe[2] = {0, 0};
    char movimiento = ' ';
    bool fin = false;
    char mapa[5][5] = {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };

    leerArchivo(posicionHeroe);
    configurarPosicionHeroe(posicionHeroe, mapa);    
    cout << "Guardando tus preferencias..." << endl;

    cout << endl << "Iniciando tu partida..." << endl;
    dibujarMapa(posicionHeroe, mapa);
    while(fin == false){
        cin >> movimiento;
        if (movimiento == 'p')
        {
            fin = true;
            char guardar = ' ';
            cout << "Deseas guardar tu partida?" << endl <<
            "(y) Si" << endl <<
            "(cualquier tecla) No" << endl;
            cin >> guardar;
            if (guardar == 'y')
            {
                guardarArchivo(posicionHeroe);
            }
        }
        else
        {
            asignarNuevaPosicion(movimiento, posicionHeroe);
            cout<<posicionHeroe[0]<<endl;
            cout<<posicionHeroe[1]<<endl;

	    dibujarMapa(posicionHeroe, mapa);
        }
    }
    return 0;
}

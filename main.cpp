#include <iostream>
#include <string>
#include <vector>
#include "lista.h"

using namespace std;

vector<string> menu();


int main(int argc, char const *argv[])
{
    vector<string> data;
    int line,op;
    string stationsL1[20]={"Pantitlan","Zaragosa","Gomez Farias","Boulevard Pto. Aereo","Balbuena","Moctezuma","San Lazaro","Candelaria","Merced","Pino Suarez","Isabel la Catolica","Salto del Agua","Balderas","Cuauhtemoc","Insurgentes","Sevilla","Chapultepec","Juanacatlan","Tacubaya","Observatorio"};
    string stationsL2[24]={"Tasqueña","General Anaya","Ermita","Portales","Nativitas","Villa de Cortes","Xola","Viaducto","Chabacano","San Antonio Abad","Pino Suarez","Zocalo","Allende","Bellas Artes","Hidalgo","Revolucion","San Cosme","Normal","Colegio Militar","Popotla","Cuitlahuac","Tacuba","Panteones","Cuatro Caminos"};
    string stationsL3[21]={"Universidad","Copilco","Miguel Angel de Quevedo","Viveros/Derechos Humanos","Coyoacan","Zapata","Division del Norte","Eugenia","Etiopia/Plaza de la Transparencia","Centro Medico","Hospital General","Niños Heroes","Balderas","Juarez","Hidalgo","Guerrero","Tlatelolco","La Raza","Portero","Deportivo 18 de Marzo","Indios Verdes"};
    string stationsL4[10]={"Santa Anita","Jamaica","Fray Servando","Candelaria","Morelos","Canal del Norte","Consulado","Bondojito","Talisman","Martin Carrera"};
    string stationsL5[13]={"Pantitlan","Hangares","Terminal Aerea","Oceania","Aragon","Eduardo Molina","Consulado","Valle Gomez","Misterios","La Raza","Autobuses del Norte","Instituto del Petroleo","Politecnico"};
    string stationsL6[11]={"Martin Carrera","La Villa-Basilica","Deportivo 18 de Marzo","Lindavista","Instituto del Petroleo","Vallejo","Norte 45","Ferreria/Arena Ciudad de Mexico","Azcapotzalco","Tezozomoc","El Rosario"};
    string stationsL7[14]={"Barranca del Muerto","Mixcoac","Sn. Antonio","Sn. Pedro de los Pinos","Tacubaya","Constituyentes","Auditorio","Polanco","San Joaquin","Tacuba","Refineria","Camarones","Aquiles Serdan","El Rosario"};
    string stationsL8[19]={"Const. de 1917","U.A.M. I","C. de la Estrella","Iztapalapa","Atlalico","Escuadron 201","Aculco","Iztacalco","Coyuya","Santa Anita","La Viga","Chabacano","Obrera","Doctores","Salto del Agua","San Juan de Letran","Bellas Artes","Garibaldi/Lagunilla"};
    string stationsL9[12]={"Pantitlan","Puebla","Ciudad Deportiva","Velodromo","Mixiuhca","Jamaica","Chabacano","Lazaro Cardenas","Centro Medico","Chilpancingo","Patriotismo","Tacubaya"};
    string stationsLA[10]={"Pantitlan","Agricola Oriental","Canal de San Juan","Tepalcates","Guelatao","Peñon Viejo","Acatitla","Santa Marta","Los reyes","La Paz"};
    string stationsLB[21]={"Ciudad Azteca","Plaza Aragon","Olimpica","Ecatepec","Muzquiz","Rio de los Remedios","Impulsora","Nezahualcoyotl","Villa de Aragon","Bosque de Aragon","Deportivo Oceania","Oceania","Romero Rubio","Flores Magon","San Lazaro","Morelos","Tepito","Lagunilla","Garibaldi/Lagunilla","Guerrero","Buenavista"};
    string stationsL12[20]={"Tlahuac","Tlaltenco","Zapotitlan","Nopalera","Olivos","Tezonco","Periferico Ote.","Calle 11","Lomas Estrella","San Andres Tomatlan","Culhuacan","Atlalilco","Mexicaltzingo","Ermita","Eje Central","Parque de los Venados","Zapata","Hospital 20 de Noviembre","Insurgentes Sur","Mixcoac"};
    Lista Linea1 = Lista();
    Lista Linea2 = Lista();
    Lista Linea3 = Lista();
    Lista Linea4 = Lista();
    Lista Linea5 = Lista();
    Lista Linea6 = Lista();
    Lista Linea7 = Lista();
    Lista Linea8 = Lista();
    Lista Linea9 = Lista();
    Lista LineaA = Lista();
    Lista LineaB = Lista();
    Lista Linea12 = Lista();
    Lista Route = Lista();
    for(int i = 0; i < 20; i++)
        Linea1.AtBegin(stationsL1[i]);
    for(int i = 0; i < 24; i++)
        Linea2.AtBegin(stationsL2[i]);
    for(int i = 0; i < 21; i++)
        Linea3.AtBegin(stationsL3[i]);
    for(int i = 0; i < 10; i++)
        Linea4.AtBegin(stationsL4[i]);
    for(int i = 0; i < 13; i++)
        Linea5.AtBegin(stationsL5[i]);
    for(int i = 0; i < 11; i++)
        Linea6.AtBegin(stationsL6[i]);
    for(int i = 0; i < 14; i++)
        Linea7.AtBegin(stationsL7[i]);
    for(int i = 0; i < 19; i++)
        Linea8.AtBegin(stationsL8[i]);
    for(int i = 0; i < 12; i++)
        Linea9.AtBegin(stationsL9[i]);
    for(int i = 0; i < 10; i++)
        LineaA.AtBegin(stationsLA[i]);
    for(int i = 0; i < 21; i++)
        LineaB.AtBegin(stationsLB[i]);
    for(int i = 0; i < 20; i++)
        Linea12.AtBegin(stationsL12[i]);
    do
    {
        data = menu();
        if (data[0] == "A" || data[0] == "a")
            line = 10;
        else if (data[0] == "B" || data[0] == "b")
            line = 11;
        else
            line = atoi(data[0].c_str());
        switch (line)
        {
            case 1:
                Linea1.Route(Linea1,data);
                break;
            case 2:
                Linea2.Route(Linea2,data);
                break;
            case 3:
                Linea3.Route(Linea3,data);
                break;
            case 4:
                Linea4.Route(Linea4,data);
                break;
            case 5:
                Linea5.Route(Linea5,data);
                break;
            case 6:
                Linea6.Route(Linea6,data);
                break;
            case 7:
                Linea7.Route(Linea7,data);
                break;
            case 8:
                Linea8.Route(Linea8,data);
                break;
            case 9:
                Linea9.Route(Linea9,data);
                break;
            case 10:
                LineaA.Route(LineaA,data);
                break;
            case 11:
                LineaB.Route(LineaB,data);
                break;
            case 12:
                Linea12.Route(Linea12,data);
                break;
            default:
                cout << "Error en la linea seleccionada";
                break;
        }
        cout << "Presiona \'0' para salir o cualquier tecla para countinuar: ";
        cin >> op;
    } while (op != 0);
    
    
    

    return 0;
}

vector<string> menu(){
    vector<string> datos,lineas;
    lineas = {
        "linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea A","linea B","linea 12"
    };
    string chosenLine, startStation, endStation;
    cout << "\t \t Selecciona un linea del metro" << endl;
    for (auto elemento : lineas)
		cout << "\t" << elemento << endl;
    cout << "\t Linea: ";
    cin >> chosenLine;
    cin.ignore();
    cout << "\t Estacion partida: ";
    getline(cin,startStation);
    cout << "\t Estacion destino: ";
    getline(cin,endStation);
    datos.push_back(chosenLine);
    datos.push_back(startStation);
    datos.push_back(endStation);
    return datos;
}
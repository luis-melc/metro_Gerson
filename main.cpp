#include <iostream>
#include <string>
#include "lista.h"

using namespace std;

int menu();

int main(int argc, char const *argv[])
{
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
    cout << "Linea 1" << endl;
    Linea1.Show();
    cout << "Linea 2" << endl;
    Linea2.Show();
    cout << "Linea 3" << endl;
    Linea3.Show();
    cout << "Linea 4" << endl;
    Linea4.Show();
    cout << "Linea 5" << endl;
    Linea5.Show();
    cout << "Linea 6" << endl;
    Linea6.Show();
    cout << "Linea 7" << endl;
    Linea7.Show();
    cout << "Linea 8" << endl;
    Linea8.Show();
    cout << "Linea 9" << endl;
    Linea9.Show();
    cout << "Linea A" << endl;
    LineaA.Show();
    cout << "Linea B" << endl;
    LineaB.Show();
    cout << "Linea12" << endl;
    Linea12.Show();

    return 0;
}


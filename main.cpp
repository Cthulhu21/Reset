#include "mainwindow.h"

#include <QApplication>

#include <iostream>

using namespace std;

class Partido
{
public:
    Partido(string _Equipo1, string _Equipo2);
    string Equipo1;
    string Equipo2;
    void Ganador();

private:
    int GolesEquipo1=0;
    int GolesEquipo2=0;
    void GenerarGoles();
};

Partido::Partido(string _Equipo1, string _Equipo2)
{
    Equipo1=_Equipo1;
    Equipo2=_Equipo2;
    GenerarGoles();
}

void Partido::GenerarGoles()
{
    srand(time(NULL));
    GolesEquipo1=rand()%3; //Rango 0-2
    GolesEquipo2=rand()%3; //Rango 0-2
}

void Partido::Ganador()
{
    if(GolesEquipo1>GolesEquipo2)
    {
        cout << "El ganador es " << Equipo1 << endl;
    }
    else if(GolesEquipo2>GolesEquipo1)
    {
        cout << "El ganador es " << Equipo2 << endl;
    }
    else
    {
        cout << "Empate" << endl;
    }
}

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    Partido Partido1=Partido("Caldas", "Medellin");
    Partido1.Ganador();
    //return a.exec();
}

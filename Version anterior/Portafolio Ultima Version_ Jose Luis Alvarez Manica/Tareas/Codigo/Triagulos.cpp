// Triagulos.cpp

#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#define PI 3.1416
using namespace std;

void Tipotriangulo (double base, double derecho, double izquierdo)
{
    if ((base == derecho) && (derecho== izquierdo))
    {
        cout << "El triangulo es equilatero. \n";
        return;
    }
    if ((base == derecho) || (derecho == izquierdo) || (izquierdo == base))
    {
        cout << "El triangulo es isosceles.  \n";
        return;
    }
    if ((base != derecho) && (izquierdo != base) && (izquierdo != derecho))
    {
        cout << "El triangulo es escaleno.  \n";
        return;
    }
}

double Perimetro(double base, double derecho, double izquierdo)
{
    double perimetro;
    perimetro = base + derecho + izquierdo;
    return perimetro;
}

double Area(double base, double derecho, double izquierdo)
{
    double s, area;
    s = (base + derecho + izquierdo) / 2;
    area = sqrt(s * (s - base) * (s - derecho) * (s - izquierdo));
    return area;
}

double TEOREMACOSENO(double a, double b, double c)
{
    double angulo, dos;
    dos = 2;
    angulo = (acos(((b * b) + (c * c) - (a * a))/(2*b*c)) * 180/PI);
    return angulo;
}

void Angulos (double base, double derecho, double izquierdo)
{
    cout << "El angulo contrario a la base es de " <<TEOREMACOSENO(base,derecho,izquierdo) << " grados. \n";
    cout << "El angulo contrario al lado derecho es de " << TEOREMACOSENO(derecho,base,izquierdo) << " grados. \n";
    cout << "El angulo contrario al lado izquierdo es de " << TEOREMACOSENO(izquierdo,base,derecho) << " grados. \n";
    cout << "Estos angulos suman a " << TEOREMACOSENO(base, derecho, izquierdo) + TEOREMACOSENO(derecho, base, izquierdo) + TEOREMACOSENO(izquierdo, base, derecho) << " grados. \n";
}

int main()
{
    double Base, derecho, izquierdo;
    string repetibilidad = "0";



    while (repetibilidad != "SALIR")
    {
        while (repetibilidad == "0")
        {
            cout << "Ingrese los lados de un triangulo: \n";
            cout << "Introdusca la base: ";
            cin >> Base;
            cout << "Introdusca el lado izquierdo: ";
            cin >> izquierdo;
            cout << "Introdusca el lado derecho: ";
            cin >> derecho;
            repetibilidad = "s";
        }
        cout << "Ingrese que desea calcular: Tipo de triangulo (t), Perimetro (p), Area (a), Angulos (n), si desea introducir otro triangulo (0) o desea salir (SALIR). ";
        cin >> repetibilidad;
        if (repetibilidad == "t")
        {
            Tipotriangulo(Base, derecho, izquierdo);
        }
        if (repetibilidad == "p")
        {
            cout << "El perimetro de su triangulo es: " << Perimetro(Base, derecho, izquierdo) << "\n";
        }
        if (repetibilidad == "a")
        {
            cout << "El area de su triangulo es: " << Area(Base, derecho, izquierdo) << "\n";
        }
        if (repetibilidad == "n")
        {
            Angulos(Base, derecho, izquierdo);
        }
    }

}


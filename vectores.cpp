#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

// Const Definition
const double PI = 3.1416;

double radian(double degrees)
{
	return(degrees * PI) / 180;
}

int main() 
{
    while(true)
    {
        // Variable Definition
        double vectorA = 14, vectorB = 75, vectorC, vectC;
        double alpha = 308, beta = 336;
        double ax, ay, bx, by, cx, cy;
        string jump;
        

        // Request Data.
        while (true)
        {
            cout << "================== Opciones ===================" << endl;
            cout << "1. Suma de Vectores" << endl;
            cout << "2. Resta de Vectores" << endl;
            
            cout << "Ingrese la opcion deseada" << endl;
            cin >> jump;
        }
        
        
        cout << "Ingresa la magnitud del Vector A: ";
        cin >> vectorA;
        cout << "Inserta el valor de alpha (Angulo del Vector): ";
        cin >> alpha;

        cout << "\nIngresa la magnitud del Vector B: ";
        cin >> vectorB;
        cout << "Inserta el valor de beta (Angulo del Vector): ";
        cin >> beta;

        // Descompose Vectors
        ax = vectorA * cos(radian(alpha));
        ay = vectorA * sin(radian(alpha));

        bx = vectorB * cos(radian(beta));
        by = vectorB * sin(radian(beta));

        // Subtract Vectors
        cx = ((ax)-(bx));
        cy = ((ay)-(by));

        //Calculate |C|
        vectC = pow(cx,2) + pow(cy,2);
        vectorC = sqrt(vectC);

        // Show Results
        system("cls");
        cout << "========== Restar Vectores ==========\n" << endl;
        cout << "A = " << ax << "i " << ay << "j" << endl;
        cout << "B = " << bx << "i " << by << "j" <<endl;
        cout << "--------------------------------" << endl;
        if(cy > 0)
            cout << "C = " << cx << "i +" << cy << "j" << endl;
        else
            cout << "C = " << cx << "i " << cy << "j" << endl;

        cout << "\n========== Calcular |C| ==========\n" << endl;
        cout << "|C| = (Simbolo Raiz Cuadrada) " << "(" << cx << ")^2" << " + " << "(" << cy << ")^2" << endl;
        cout << "|C| = " << vectorC << endl;

        cout << "\n========== Calcular Angulo De C ==========\n" << endl;
        cout << "\nCalcule el anuglo manualmente, con la formula Tan-1(cy/cx)"<<endl;

        cout << "\nIngrese Cualquier letra para hacer otro problema..."<<endl;
        cin >> jump;
        system("cls");
    }
	return 0;
}
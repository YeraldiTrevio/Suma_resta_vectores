#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "functions.cpp"
using namespace std;


int main() 
{   
    // Variable Definition
    float vectorA = 0.0f, vectorB = 0.0f, vectorC = 0.0f, vectC = 0.0f;
    float alpha = 0.0f, beta = 0.0f, degreesVC = 0.0f;
    float ax = 0.0f, ay = 0.0f, bx = 0.0f, by = 0.0f, cx = 0.0f, cy = 0.0f;
    string option;
    clear();
    while(true)
    {
        // Request Data.
        while (true)
        {
            fflush(stdin);
            cout << "\n================== Opciones ===================" << endl;
            cout << "1. Suma de Vectores" << endl;
            cout << "2. Resta de Vectores" << endl;
            cout << "3. Mostrar resultado de la operacion anterior." << endl;
            cout << "4. Salir." << endl;
            
            cout << "\nIngrese la opcion deseada: ";
            cin >> option;

            if(option == "1" || option == "2")
            {
                clear();
                break;
            }
            else if(option == "3")
            {
                showResult( ax, bx, cx, ay, by, cy, 
                            vectorC, degreesVC, 
                            vectorA, vectorB, alpha, beta);
                cout << "\nIngrese cualquier letra para continuar: ";
                cin >> option;
                clear();
            }
            else if(option == "4")
            {
                clear();
                showResult( ax, bx, cx, ay, by, cy, 
                            vectorC, degreesVC, 
                            vectorA, vectorB, alpha, beta);
                exit(1);
            }
        }

        while(true)
        {
            fflush(stdin);
            cout << "\nIngresa la magnitud del Vector A: ";
            cin >> vectorA;
            cout << "Inserta el valor de alpha (Angulo del Vector): ";
            cin >> alpha;

            cout << "\nIngresa la magnitud del Vector B: ";
            cin >> vectorB;
            cout << "Inserta el valor de beta (Angulo del Vector): ";
            cin >> beta;

            // Descompose Vectors
            ax = cosDescompose(vectorA, alpha);
            ay = sinDescompose(vectorA, alpha);

            bx = cosDescompose(vectorB, beta);
            by = sinDescompose(vectorB, beta);

            // Option condition
            if(option == "1")
            {
                // Add Vectors.
                cx = addVectorsX(ax, bx);
                cy = addVectorsY(ay, by);
            }
            else if(option == "2")
            {
                // Subtract Vectors
                cx = substractVectorsX(ax, bx);
                cy = substractVectorsY(ay, by);
            }

            option = "";

            //Calculate |C|
            vectC = pow(cx,2) + pow(cy,2);
            vectorC = sqrt(vectC);

            // Calculate vector C degrees
            degreesVC = atan(cy/cx);
            degreesVC = degrees(degreesVC);

            // Show Results
            clear();
            showResult( ax, bx, cx, ay, by, cy, 
                            vectorC, degreesVC, 
                            vectorA, vectorB, alpha, beta);

            // Final menu
            cout << "\n===========================================" << endl;
            cout << "\nIngrese Cualquier letra para hacer otro problema o ingrese"<<endl;
            cout << "el numero '5' para elegir otra operacion y '4' para salir."<<endl;
            cin >> option;

            // Final option conditions 
            if(option == "4")
            {
                clear();
                showResult( ax, bx, cx, ay, by, cy, 
                            vectorC, degreesVC, 
                            vectorA, vectorB, alpha, beta);
                exit(1);
            }
            else if(option == "5")
            {
                clear();
                break;
            }
            clear();
        }
    }
	return 0;
}
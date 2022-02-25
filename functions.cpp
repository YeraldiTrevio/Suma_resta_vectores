#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const float PI = 3.14159265359f;

// Clear console
void clear()
{
    system("clear");
}

// Radian converter.
float radian(float degrees)
{
	return(degrees * PI) / 180;
}

// Degrees Converter
float degrees(float radians)
{
	return(radians * 180) / PI;
}

// Descompose Vectors
float cosDescompose(float vector, float degree)
{
    return vector*cos(radian(degree));
}

float sinDescompose(float vector, float degree)
{
    return vector*sin(radian(degree));
}


// Add Vectors
float addVectorsX(float ax, float bx)
{
    return ((ax)+(bx));
}

float addVectorsY(float ay, float by)
{
    return ((ay)+(by));
}

float substractVectorsX(float ax, float bx)
{
    return ((ax)-(bx));
}

float substractVectorsY(float ay, float by)
{
    return ((ay)-(by));
}

// Susbract Vector

// Show Results
void showResult(float ax, float bx, float cx,
                float ay, float by, float cy, 
                float vectorC, float degreesVC,
                float vectorA, float vectorB,
                float alpha, float beta)
{
    cout << "============= Vectores y Angulos =============\n" << endl;
    cout << "\tA = " << vectorA << "        Alpha =   " << alpha<< endl;
    cout << "\tB = " << vectorB << "        Beta =    " << beta << endl;
    printf ("\tC = %.2f     Angulo =  %.2f\n",vectorC, degreesVC);

    cout << "\n========== Suma o Resta de Vectores ==========\n" << endl;
    // Vector A
    if(ay > 0)
        cout << "\tA = " << ax << "i +" << ay << "j" << endl;
    else
        cout << "\tA = " << ax << "i " << ay << "j" << endl;

    // Vector B
    if(by > 0)
        cout << "\tA = " << bx << "i +" << by << "j" << endl;
    else
        cout << "\tA = " << bx << "i " << by << "j" << endl;

    // Line
    cout << "----------------------------------------------" << endl;

    //Vector C
    if(cy > 0)
        cout << "\tC = " << cx << "i +" << cy << "j" << endl;
    else
        cout << "\tC = " << cx << "i " << cy << "j" << endl;

    cout << "\n================ Calcular |C| ================\n" << endl;
    printf("\t|C| = %c/(%2f)%c (%f)%c\n",253, cx, 253, cy, 253);
    printf("\t|C| = %2f%c\n", vectorC, 248);

    cout << "\n============ Calcular Angulo De C ============\n" << endl;
    cout << "\tAngulo: " << degreesVC << endl;
}
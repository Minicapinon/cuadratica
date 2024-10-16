/*
    Este es el archivo principal, en el cual se piden los valores
    a, b y c; se comprueba si a no es igual a cero para evitar errores,
    despues se llama a las funciones "cuadx1" y "cuadx2"
    para calcular y finalmente se muestra el resultado.
*/
#include<iostream>
#include"operations.cpp"

int main(int argc, char const *argv[])
{
    double a,b,c,resx2,resx1;

    std::cout<<"Ingrese el valor de a: "<<std::endl;
    std::cin>>a;std::cout<<std::endl;
    std::cout<<"Ingrese el valor de b: "<<std::endl;
    std::cin>>b;std::cout<<std::endl;
    std::cout<<"Ingrese el valor de c: "<<std::endl;
    std::cin>>c;std::cout<<std::endl;

    if(a!=0)
    {

        resx1 = cuadx1(a,b,c);

        resx2 = cuadx2(a,b,c);


        std::cout<<"X1 = "<<resx1<<std::endl;
        std::cout<<"X2 = "<<resx2<<std::endl;
    }
    else
    {
        std::cout<<"El valor no se puede determinar!";
    }
    return 0;
}

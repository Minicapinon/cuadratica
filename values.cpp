#include<iostream>
#include"operations.cpp" //archivo personal

int main(int argc, char const *argv[])
{
    // Variables en doouble en caso de ser decimal
    double a,b,c,resx2,resx1;

    std::cout<<"Ingrese el valor de a: "<<std::endl;
    std::cin>>a;std::cout<<std::endl;
    std::cout<<"Ingrese el valor de b: "<<std::endl;
    std::cin>>b;std::cout<<std::endl;
    std::cout<<"Ingrese el valor de c: "<<std::endl;
    std::cin>>c;std::cout<<std::endl;

    //Se previene de errores 
    if(a!=0)
    {
        //Llama a las funciones para calcular los valores
        resx1 = cuadx1(a,b,c);

        resx2 = cuadx2(a,b,c);

        //Muestra el resultado
        std::cout<<"X1 = "<<resx1<<std::endl;
        std::cout<<"X2 = "<<resx2<<std::endl;
    }
    //si a == 0
    else
    {
        std::cout<<"El valor no se puede determinar!";
    }
    return 0;
}

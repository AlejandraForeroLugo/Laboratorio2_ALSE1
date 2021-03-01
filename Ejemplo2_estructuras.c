//Integrantes: Alejandra Forero, Juan Andres Riapira y Diego Coy
//Código implementando estructuras para determinar la ecuación de una recta dando dos puntos

#include <stdio.h>
#include <string.h>


struct punto
{
        float x;
        float y;
};

struct punto recta (struct punto *p1, struct punto *p2);
struct punto pedir (struct punto *p1, struct punto *p2);
void main()
{
        struct punto p1;
        struct punto p2;
	p1,p2=pedir(&p1,&p2);
	recta (&p1,&p2);

        printf("\n-------------Operación terminada--------------\n");
}
struct punto pedir (struct punto*p1, struct punto *p2)
{
	printf ("\n ------------Bienvenido-----------\n");
	printf("\n Porfavor ingrese el valor de x para el punto 1 \n");
	scanf("%f" , &p1->x);
	printf("\n Porfavor ingrese el valor de y para el punto 1 \n");
	scanf ("%f", &p1->y);
	printf("\n Porfavor ingrese el valor de x para el punto 2 \n");
	scanf ("%f", &p2->x);
	printf("\n Porfavor ingrese el valor de y para el punto 2 \n");
	scanf ("%f", &p2->y);
	return (*p1,*p2);
}


struct punto recta (struct punto *p1, struct punto *p2)
{
        float m;
        float b;
        m = (p2->y-p1->y)/(p2->x-p1->x);
        printf("\n El valor de la pendiente es: %1.3f \n\n", m);
        b = p1->y-m*p1->x;
        printf("\n El valor de la intersección es: %1.3f \n\n", b);
        printf("\n La recta es igual a: y = (%1.3f)x + (%1.3f) \n\n",m, b);
}

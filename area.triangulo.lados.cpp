// area,triangulo, lados.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "Math.h"

using namespace std;

void main()
{
	float a,b,c,p,area;
	cin>>a;
	cin>>b;
	cin>>c;
	p=(a+b+c)/2;
	area= sqrt(p*(p-a)*(p-b)*(p-c));
	cout <<"el area es: "<<area;
	getch();
}

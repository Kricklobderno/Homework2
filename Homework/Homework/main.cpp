// Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include<fstream>
#include"ComposedShape.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"Circle.h"

using namespace std;

int main() {
	
	ofstream file;
	file.open("Shape.svg", ios::out);	//Every time the program runs delete the old One.

	char MCShape, SShape = 'r';					//Main Container Shape and Small Shape
	int MCRadius, MCWidth, MCHeight, MCTri;	// Main Container variables
	int Radius, WofRect, HofRect, LofTri;		// Small Shape variables. WofRect->Width of Rectangle, HofRect->Height of Rectangle, LofTri->Lenght of Triangle					

	cout << "Please enter the main container shape (R, C, T): ";
	cin >> MCShape;	//Main Container

	ComposedShape ComShape;
	Circle Cir;	//Main Cont
	Rectangle Rec;	//Main Cont
	Triangle Tri;	//Main Cont

	switch (MCShape) {

	case 'c':

		cout << "Please set the Main Shape Radius: " << endl;
		cin >> MCRadius;
		Cir.setShape(MCRadius);
		Cir.Draw();
		ComShape = ComposedShape(Cir,SShape);
		break;
	case 'r':
		
		cout << "Please set the Main Shape Rectangle's Width: " << endl;
		cin >> MCWidth;
		cout << "Please set the Main Shape Rectangle's Height: " << endl;
		cin >> MCHeight;
		Rec.setShape(MCWidth, MCHeight);
		Rec.Draw();
		ComShape = ComposedShape(Rec,SShape);
		break;
	case 't':
		
		cout << "Please set the Main Shape Triangle's Length" << endl;
		cin >> MCTri;
		Tri.setShape(MCTri);
		Tri.Draw();
		ComShape = ComposedShape(Tri,SShape);
		break;

	default:
		cout << "Wrong decision!!";
		break;
	}	

	return 0;
}


#pragma once
#include "Alumno.h"


void mostrarMenu();
void menu(Alumno obj);
bool grabarRegistroAlumno(Alumno reg);
bool leerRegistroAlumno(Alumno &reg);
bool leerRegistroAlumno2();

int buscarLegajo(int leg);
Alumno devolverRegistro(int posReg);

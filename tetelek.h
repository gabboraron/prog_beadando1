#ifndef TETELEK_H_INCLUDED
#define TETELEK_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "tetelek.h" // maxKiv; szamlalas;
#include "matrixmuveletek.h" //PrintMatrix, ReadMatrix, initMatrixConsole, FillMatrixRnd, MatrixTest
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas

//ALKALMAZOTT TETELEK

//MAXIMUM KIVALASZTAS
//Meghivas: maxKiv(rendezendo_vector)
int maxKiv(const std::vector< std::vector<int> >& );

//SZAMLALAS
//Meghivas: szamlalas(szamlalando_vector)
int szamlalas(const std::vector<int>& );

#endif // TETELEK_H_INCLUDED

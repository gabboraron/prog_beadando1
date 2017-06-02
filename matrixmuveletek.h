#ifndef MATRIXMUVELETEK_H_INCLUDED
#define MATRIXMUVELETEK_H_INCLUDED
#include <vector>
#include <string>

//MATRIX KIIRATASA
void PrintMatrix(const std::vector< std::vector<int> >&);


//MATRIXBEOLVASAS KONZOLROL
void ReadMatrix(std::vector< std::vector<int> >& ,const int& ,const int& );
void initMatrixConsole(int& , int& );
//meghivasa: FillMatrixRnd(matrix, n, m);
void FillMatrixRnd(std::vector< std::vector<int> >&, const int&, const int& );

//MATRIXOLVASAS FILEBOL
void FillMatriFromFile(std::vector< std::vector<int> >&, std::string& );
//enum FileError {OpenError, RangeError, DataError};
//void FillMatrixFromFile(const std::string&,std::vector< std::vector<int> >&) throw (FileError);

//TESZELES   meghivasa:MatrixTest(matrix, n, m);
void MatrixTest(std::vector< std::vector<int> >&, const int&, const int&);

#endif // MATRIXMUVELETEK_H_INCLUDED

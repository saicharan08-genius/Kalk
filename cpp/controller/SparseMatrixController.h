#ifndef SPARSEMATRIXCONTROLLER_H
#define SPARSEMATRIXCONTROLLER_H

#include "MatrixController.h"

class SparseMatrixController : public MatrixController {
public:
    SparseMatrixController(MatrixKalk* = nullptr, Matrix* = nullptr, Matrix* = nullptr);

    void buildMatrix1(QVector<KeypadInput *>, unsigned int, unsigned int);
    void buildMatrix1(unsigned int, unsigned int);
    void setMatrix1(const Matrix&);

    void buildMatrix2(QVector<KeypadInput*>, unsigned int, unsigned int);
    void buildMatrix2(unsigned int, unsigned int);
    void setMatrix2(const Matrix&);

    //sparse operations
    double getSparsity() const;
    bool isDense() const;
    QVector<double> nonZeroRow(unsigned int) const;
    QVector<double> nonZeroCol(unsigned int) const;
};

#endif // SPARSEMATRIXCONTROLLER_H
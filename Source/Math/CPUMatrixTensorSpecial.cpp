#include "stdafx.h"
#include "CPUMatrixTensorImpl.h"
#include "mkl_vml.h"

#pragma warning(disable:4100) // warning C4100: 'var': unreferenced formal parameter

namespace Microsoft { namespace MSR { namespace CNTK {

template<>
bool CPUMatrixSpecialUnaryTensorOpImpl<float>(float beta, const CPUMatrix<float>& a, CPUMatrix<float>& o, float alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 2>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 2>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 2>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialBinaryTensorOpImpl<float>(float beta, const CPUMatrix<float>& a, const CPUMatrix<float>& b, CPUMatrix<float>& o, float alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 3>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 3>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 3>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialTernaryTensorOpImpl<float>(float beta, const CPUMatrix<float>& a, const CPUMatrix<float>& b, const CPUMatrix<float>& c, CPUMatrix<float>& o, float alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 4>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 4>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 4>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialUnaryTensorOpImpl<double>(double beta, const CPUMatrix<double>& a, CPUMatrix<double>& o, double alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 2>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 2>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 2>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialBinaryTensorOpImpl<double>(double beta, const CPUMatrix<double>& a, const CPUMatrix<double>& b, CPUMatrix<double>& o, double alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 3>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 3>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 3>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialTernaryTensorOpImpl<double>(double beta, const CPUMatrix<double>& a, const CPUMatrix<double>& b, const CPUMatrix<double>& c, CPUMatrix<double>& o, double alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 4>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 4>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 4>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialUnaryTensorOpImpl<half>(half beta, const CPUMatrix<half>& a, CPUMatrix<half>& o, half alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 2>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 2>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 2>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialBinaryTensorOpImpl<half>(half beta, const CPUMatrix<half>& a, const CPUMatrix<half>& b, CPUMatrix<half>& o, half alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 3>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 3>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 3>& reducingStrides)
{
    return false;
}

template<>
bool CPUMatrixSpecialTernaryTensorOpImpl<half>(half beta, const CPUMatrix<half>& a, const CPUMatrix<half>& b, const CPUMatrix<half>& c, CPUMatrix<half>& o, half alpha, ElementWiseOperator op, ElementWiseOperator reductionOp,
    const array<size_t, 4>& offsets,
    const SmallVector<size_t>& regularOpDims, const array<SmallVector<ptrdiff_t>, 4>& regularStrides,
    const SmallVector<size_t>& reducingOpDims, const array<SmallVector<ptrdiff_t>, 4>& reducingStrides)
{
    return false;
}

}}}
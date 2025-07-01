#include "matrix.h"
template <typename T,int N>
using Vector = Matrix<T,N,1>;
template <typename T>
using Vector2 = Vector<T,2>;
template <typename T>
using Vector3 = Vector<T,3>;
template <typename T>
using Vector4 = Vector<T,4>;
template <typename T>
using Matrix12 = Matrix<T,1,2>;
template <typename T>
using Matrix13 = Matrix<T,1,3>;
template <typename T>
using Matrix14 = Matrix<T,1,4>;
template <typename T>
using Matrix22 = Matrix<T,2,2>;
template <typename T>
using Matrix23 = Matrix<T,2,3>;
template <typename T>
using Matrix24 = Matrix<T,2,4>;
template <typename T>
using Matrix32 = Matrix<T,3,2>;
template <typename T>
using Matrix33 = Matrix<T,3,3>;
template <typename T>
using Matrix34 = Matrix<T,3,4>;
template <typename T>
using Matrix42 = Matrix<T,4,2>;
template <typename T>
using Matrix43 = Matrix<T,4,3>;
template <typename T>
using Matrix44 = Matrix<T,4,4>;
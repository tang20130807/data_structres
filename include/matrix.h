#ifndef MATRIX_H
#define MATRIX_H
template <typename T,int N,int M>
class Matrix {
private:
    T data[N][M];
public:
    Matrix() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = 0;
            }
        }
    }
    explicit Matrix(T a[N][M]) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = a[i][j];
            }
        }
    }
    Matrix(const Matrix<T,N,M>& other) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = other.data[i][j];
            }
        }
    }
    ~Matrix() = default;
    Matrix<T,N,M> operator+(const Matrix<T,N,M>& other) {
        Matrix<T,N,M> result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    Matrix<T,N,M> operator-(const Matrix<T,N,M>& other) {
        Matrix<T,N,M> result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
    template <int S>
    Matrix<T,N,M> operator*(const Matrix<T,M,S>& other) {
        Matrix<T,N,S> result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < S; j++) {
                for (int k = 0; k < M; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    Matrix<T,N,M> operator*(const T& scalar) {
        Matrix<T,N,M> result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.data[i][j] = data[i][j] * scalar;
            }
        }
        return result;
    }
    Matrix<T,N,M>& operator=(const Matrix<T,N,M>& other) {
        if (this == &other) {
            return *this;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }
    Matrix<T,N,M>& operator+=(const Matrix<T,N,M>& other) {
        return *this = *this + other;
    }
    Matrix<T,N,M>& operator-=(const Matrix<T,N,M>& other) {
        return *this = *this - other;
    }
    template <int S>
    Matrix<T,N,M>& operator*=(const Matrix<T,M,S>& other) {
        return *this = *this * other;
    }
    Matrix<T,N,M>& operator*=(const T& scalar) {
        return *this = *this * scalar;
    }
    T &operator()(int i, int j) {
        return data[i][j];
    }
    T *operator[](int i) {
        return data[i];
    }
};
#endif //MATRIX_H
#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template <class T>

class Calculadora {
private:
    T A;
    T B;
public:
    void setA(const T &A) {
        Calculadora::A = A;
    }
    const T &getA() const {
        return A;
    }
    void setB(const T &B) {
        Calculadora::B = B;
    }
    const T &getB() const {
        return B;
    }
    T sumar(){
        return A + B;
        }
    T restar(){
        return A - B;
        }
    T dividir() {
        return A / B;
        }
    T multiplicar(){
        return A * B;
        }
};


#endif //REPASO_CALCULADORA_H

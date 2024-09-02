#include <iostream>
using namespace std;

class Pieza {
private:
	short fila;
	short columna;
	
public:
	
	Pieza() {
		fila = 1;
		columna = 1;
	}
	
	Pieza(short f, short c) {
		fila = f;
		columna = c;
	}
	
	void verInfor() {
		cout << fila << " " << columna << endl;
	}
	

	short getFila() {
		return fila;
	}
	
	
	short getColumna() {
		return columna;
	}
	
	bool celValido(short f, short c) {
		return (f >= 1 && f <= 8) && (c >= 1 && c <= 8);
	}
	
	// Método para mover la pieza
	void mover(short f, short c) {
		if (celValido(f, c)) {
			fila = f;
			columna = c;
		} else {
			cout << "Movimiento inválido" << endl;
		}
	}
};

class Torre : public Pieza {
public:
	
	Torre(short f, short c) : Pieza(f, c) {}
	
	void avanzar(short f, short c) {
		
		if (getFila() == f || getColumna() == c) {
			mover(f, c);
		} else {
			cout << "Movimiento inválido para una Torre" << endl;
		}
	}
};

int main() {
	Pieza p1;
	p1.verInfor();
	
	Pieza p2(10, 10);
	p2.verInfor();
	
	Torre torre(1, 1);
	torre.verInfor();
	
	// Movemos la torre a una posición válida
	torre.avanzar(1, 5);
	torre.verInfor();
	
	// Intentamos un movimiento inválido
	torre.avanzar(2, 6);
	torre.verInfor();
	
	return 0;
}

git remote add origin https://github.com/betzabe12/Ajedrez.git
	git branch -M main
	git push -u origin main

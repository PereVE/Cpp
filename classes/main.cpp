#include <iostream>

class Guerrer {
	public:
		Guerrer(){}
		Guerrer(int vida)
		{
			this->vida = vida;
		}
		int mostraVida(){
			return vida;
		}
	public:
		int vida = 0;
};

class Arquer : public Guerrer {
	
};

int main(int argc, char** argv) {
	Guerrer a(5);
	Arquer b;
	printf("%i",b.mostraVida());
	return 0;
}

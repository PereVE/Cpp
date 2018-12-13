#include <iostream>
#include <stdlib.h>
#include <time.h>

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
		void ModificarVida(int mod){
			vida += mod;
			printf("Ara te %i vides",vida);
		}
	public:
		int vida = 0;
		int atac = 1;
};
class Arquer : public Guerrer {
	public:
		int atacFletxa = 3;
};

class Espadatxi : public Guerrer {
	public:
		int atacEspecial(){
			if (rand()%3 == 0){
				printf("has fallat\n");
				return 0;
			}
			else{
				return 2;
			}
		}
};
int main(int argc, char** argv) {
	srand(time(NULL));
	Arquer b;
	b.vida = 5;
	Espadatxi c;
	c.vida = 5;
	b.ModificarVida(-c.atacEspecial());
	return 0;
}

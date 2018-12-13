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
		void ModificarVida(int mod){
			vida += mod;
			printf("Ara te %i vida",vida);
		}
	public:
		int vida = 0;
		int atac = 1;
};
class Arquer : public Guerrer {
	
};

class Espadatxi : public Guerrer {
	
};
int main(int argc, char** argv) {
	Arquer b;
	b.vida = 5;
	Espadatxi c;
	c.vida = 5;
	b.ModificarVida(c.atac);
	printf("%i",b.mostraVida());
	return 0;
}

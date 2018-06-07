#ifndef JACCARD
#define JACCARD
#include "Animal.h"
class Jaccard{
	private:
		int sacarUnion(Animal&,Animal&);
		int sacarInterseccion(Animal&,Animal&);
	public:
		Jaccard();
		~Jaccard();
		double aplicarAlgoritmo(Animal*,Animal*);

};
#endif
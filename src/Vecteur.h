#include <vector>

class Vect{
	
	private:
		std::vector<double> components;		//composantes du vecteur
		
		bool dimTest(Vect);					//teste si deux vecteurs ont la même dimension
	
	public:
		void augmente(double);				//ajoute une dimension au vecteur et lui attribue la valeur passée en argument
			
		void print() const;					//affiche sur cout un objet vecteur
		
		bool compare(Vect) const;			//test l'égalité de l'objet et de l'argument
		
		Vect add(Vect) const;				//additionne l'instance courante et l'argument
		
		Vect subtract(Vect) const;			//soustrait 2 vecteurs (voire add() )
		
		Vect opposite() const;				//retourne l'opposé d'un vecteur
		
		Vect mult(double) const;			//multiplie le vecteur par le scalaire passé en argument
		
		double scalarProduct(Vect) const;	//retourne le produit scalaire de l'instance et du vecteur passé en argument
		
		Vect vectProduct(Vect) const;		//retourne le produit vectoriel de 2 vecteurs
		
		double normSqr() const;				//retourne le carré de la norme d'un vecteur
		
		double norm() const;				//retourn la norme d'un vecteur
}


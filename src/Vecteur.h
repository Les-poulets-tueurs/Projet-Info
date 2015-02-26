#include <vector>

class Vector{
	
	private:
		std::vector<double> components;		//composantes du vecteur
		
		bool dimTest(Vector);				//teste si deux vecteurs ont la même dimension
	
	public:
		void augmente(double);				//ajoute une dimension au vecteur et lui attribue la valeur passée en argument
			
		void print() const;					//affiche sur cout un objet vecteur
		
		bool compare(Vector) const;			//test l'égalité de l'objet et de l'argument
		
		Vector add(Vector) const;			//additionne l'instance courante et l'argument
		
		Vector subtract(Vector) const;		//soustrait 2 vecteurs (voire add() )
		
		Vector opposite(Vector) const;		//retourne l'opposé d'un vecteur
		
		Vector mult(double) const;			//multiplie le vecteur par le scalaire passé en argument
		
		double scalarProduct(Vector) const;	//retourne le produit scalaire de l'instance et du vecteur passé en argument
		
		Vector vectProduct(Vector) const;	//retourne le produit vectoriel de 2 vecteurs
		
		double normSqr(Vector) const;		//retourne le carré de la norme d'un vecteur
		
		double norm(Vector) const;			//retourn la norme d'un vecteur
		
}


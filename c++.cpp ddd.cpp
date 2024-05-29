
#include <iostream>
#include <vector >
#include <string >

using namespace std;



 class Equipe{
public :
string nom ;
int victoires ;
int nuls ;
int defaites ;
int points ;
int butsmarques;
int butsencaisses;
public:
Equipe(string nom) {
this->nom =nom ;
this->victoires = 0;
this->nuls = 0;
this->defaites = 0;  
this->points = 0 ;
this->butsmarques=0;
this->butsencaisses=0;

}
void ajouterResultat(int butsencaisses, int butsmarques) { 
if ( butsmarques>butsencaisses) { 
this->victoires ++; 
this->points += 3 ;
} 
 else if (butsmarques == butsencaisses) { 
this->nuls ++; 
this->points += 1 ;
} 
 else { 
this->defaites ++; 
} 
this->butsencaisses += butsencaisses ; 
this->butsmarques += butsmarques; 
} 
void afficherInformationsequipe ( ){ 
cout << "Équipe: " << nom << endl ;
cout << "Victoires: " << victoires << endl ; 
cout << "Nuls: " << nuls << endl ; 
cout << "Défaites: " << defaites << endl ; 
cout << "Buts encaisses: " << butsencaisses << endl ;
cout << "Buts marques: " << butsmarques << endl ; 
cout << "Points: " << points << endl ; 
}

};



 class Match{
 
public:
Equipe equipe1;
Equipe equipe2;
int scoreEquipe1;
int scoreEquipe2;
public :
Match(const Equipe& equipe1,const Equipe& equipe2):equipe1(equipe1),equipe2(equipe2){}
void saisirresultat(){
	cout<<"saisissez le score du match("<<equipe1.nom<<"-"<<equipe2.nom<<")"<<endl;
	cout<<equipe1.nom<<":";
	cin>>scoreEquipe1;
	cout<<equipe2.nom<<":";
	cin>>scoreEquipe2;
	equipe1.ajouterResultat(scoreEquipe2,scoreEquipe1);
	equipe2.ajouterResultat(scoreEquipe1,scoreEquipe2);
}
void afficheresultat(){
	cout<<equipe1.nom<<""<<scoreEquipe1<<"-"<<scoreEquipe2<<""<<equipe2.nom<<endl;
	}
 
};

int main(){
	vector<Equipe>equipes;
	Equipe equipe1("Equipe 1");
	Equipe equipe("Equipe 2");
	equipes.push_back(equipe1);
	equipes.push_back(equipe1);
	
		Match match(equipes[0],equipes[1]);
		match.saisirresultat();
		match.afficheresultat();
		return 0;
	}
	
	
	
	
	







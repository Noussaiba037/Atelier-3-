#include <iostream>
#include <string>

using namespace std;

class Voiture{
private:
    //attributs
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;
public:
    //methodes
    Voiture() : marque("null"),modele("null"),annee(0),kilometrage(0.0),vitesse(0.0){}

    Voiture(string mar, string mod, int ann, float km, float v):marque(mar),modele(mod),annee(ann),kilometrage(km),vitesse(v){}

    void accelerer(float valeur){
        vitesse = vitesse + valeur;
    }

    void freiner(float valeur){
        if(valeur > vitesse){
            vitesse = 0;
        }
        else{
            vitesse = vitesse - valeur;
        }
    }

    void afficherInfo(){
        cout <<"Marque: "<<marque<< endl;
        cout <<"Modele: "<<modele<< endl;
        cout <<"Annee: "<<annee<< endl;
        cout <<"Kilometrage: "<<kilometrage<< endl;
        cout <<"Vitesse: "<<vitesse<< endl;
    }

    void avancer(float distance){
        kilometrage = kilometrage + distance;
    }

    ~Voiture(){
        cout << "La voiture est detruite ! "<<endl;
    }
};
int main(){
    Voiture voiture1("Range Rover","Velar",2022,8000,50);

    voiture1.afficherInfo();
    cout <<"\n-------------------\n";

    voiture1.accelerer(70.0);
    cout <<"Apres l'acceleration \n";
    voiture1.afficherInfo();
    cout <<"\n-------------------\n";

    voiture1.freiner(30.0);
    cout <<"Apres le freinage \n";
    voiture1.afficherInfo();
    cout <<"\n-------------------\n";

    voiture1.avancer(30);
    cout <<"Apres l'avancement \n";
    voiture1.afficherInfo();


    return 0;
}
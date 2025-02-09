#include <iostream>
using namespace std;

class Video{
    public:
    Video(string , string , string , float , int , string );
    Video(string , string , string , int , string );
    void calificaVideo(float _calificacion);
    virtual void muestraDatos();

    float getCalificacion();
    string getNombreVideo();
    
    protected:
    string tipoVideo, nombreVideo, genero, duracion;
    int añoLanzamiento;
    float calificacion;
};
class Pelicula:public Video{
    public:
    Pelicula(string , string , string , float , int , string , int );
    Pelicula(string , string , string , int , string , int );
    

    void muestraDatos();

    private:
    int nominaciones;

};
class Serie:public Video{
    public:
    Serie(string , string , string , float , int , string , int );
    Serie(string , string , string , int , string , int );
    
    void muestraDatos();
    
    private:
    int cantEpisodios;

};

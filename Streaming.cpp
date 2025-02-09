#include <iostream>
#include "Streaming.h"
using namespace std;

void Video::calificaVideo(float _calificacion){
    calificacion = _calificacion;
    cout << "\nIngrese su calificacion (De 0 a 10): " <<endl;
    cin >> calificacion;
}
float Video::getCalificacion(){
    return calificacion;
}
string Video::getNombreVideo(){
    return nombreVideo;
}
Video::Video(string _tipoVideo, string _genero, string _nombreVideo, float _calificacion, int _añoLanzamiento, string _duracion){
    tipoVideo = _tipoVideo;
    genero = _genero;
    nombreVideo = _nombreVideo;
    calificacion = _calificacion;
    añoLanzamiento = _añoLanzamiento;
    duracion = _duracion;

}
Video::Video(string _tipoVideo, string _genero, string _nombreVideo, int _añoLanzamiento, string _duracion){
    tipoVideo = _tipoVideo;
    genero = _genero;
    nombreVideo = _nombreVideo;
    añoLanzamiento = _añoLanzamiento;
    duracion = _duracion;

}
void Video:: muestraDatos(){
    cout<<"Tipo: " << tipoVideo <<endl;
    cout<<"Nombre: " << nombreVideo <<endl;
    cout<<"Genero: " << genero << endl;
    cout <<"Ano de lanzamiento: " << añoLanzamiento <<endl;
    cout <<"Calificacion: " << calificacion <<endl;
}

Pelicula::Pelicula(string _tipoVideo, string _genero, string _nombreVideo, float _calificacion, int _añoLanzamiento, string _duracion, int _nominaciones):Video( _tipoVideo,  _genero,  _nombreVideo, _calificacion, _añoLanzamiento, _duracion){
    nominaciones = _nominaciones;
  

};
Serie::Serie(string _tipoVideo, string _genero, string _nombreVideo, float _calificacion, int _añoLanzamiento, string _duracion, int _episodios):Video( _tipoVideo,  _genero,  _nombreVideo, _calificacion, _añoLanzamiento, _duracion){
    cantEpisodios = _episodios;
};

Pelicula::Pelicula(string _tipoVideo, string _genero, string _nombreVideo, int _añoLanzamiento, string _duracion, int _nominaciones):Video( _tipoVideo,  _genero, _nombreVideo,  _añoLanzamiento, _duracion){
    nominaciones = _nominaciones;

};
Serie::Serie(string _tipoVideo, string _genero, string _nombreVideo, int _añoLanzamiento, string _duracion, int _episodios):Video( _tipoVideo,  _genero, _nombreVideo,  _añoLanzamiento, _duracion){
    cantEpisodios = _episodios;   
}; 

void Serie::muestraDatos(){
    Video::muestraDatos();
    cout << "Duracion por episodio: " << duracion << " minutos "<< endl;
    cout << "Numero de episodios: " << cantEpisodios <<endl;
}

void Pelicula::muestraDatos(){
    Video::muestraDatos();
    cout <<"Duracion: " << duracion << " horas "<<endl;
    cout << "Total de nominaciones: " << nominaciones << endl;
}


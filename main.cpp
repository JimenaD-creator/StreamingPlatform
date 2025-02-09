#include <iostream>
#include "Streaming.h"
using namespace std;

int main(){
    int op,calificacion, num_pelicula, num_serie;
    string afirmacion, af_pelicula, af_serie;
    Video *vector[4];
    vector[0] = new Pelicula("Pelicula", "Terror", "La Monja", 9.7, 2018, "2:30", 0);
    vector[1] = new Pelicula("Pelicula", "Comedia", "Son Como Ninos", 8.7, 2010, "1:45", 3);
    vector[2] = new Pelicula("Pelicula", "Romance", "Antes de Ti", 10, 2016, "2:15", 4);
    vector[3] = new Pelicula("Pelicula", "Ciencia Ficcion", "Interestelar", 10, 2014, "2:35", 7);

    Video *Serie1;
    Serie1 = new Serie("Serie", "Suspenso", "Riverdale", 10, 2017, "0:55", 90);
    Video *Serie2;
    Serie2 = new Serie("Serie", "Ciencia Ficcion", "Stranger Things", 9.8 , 2016, "0:58", 40);


    cout<<"\n--------------------------- BIENVENIDO A SU PLATAFORMA DE STREAMING :) -----------------------" <<endl;
    do{
    cout<<"\n...........................................MENU......................................"<<endl;
    cout<<"1. Mostrar series y peliculas" <<endl;
    cout<<"2. Mostrar series con cierta calificacion" <<endl;
    cout<<"3. Mostrar peliculas con cierta calificacion" <<endl;
    cout<<"4. Calificar series o peliculas" <<endl;
    cout<<"5. Salir" <<endl;
    cout << endl;
    cout<<"¨Que desea hacer a continuacion? (Elija de 1 a 5): " <<endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout<< "\n----------------------------------------- PELICULAS -----------------------------------------" <<endl<<endl;
        cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
        vector[0]->muestraDatos();
        cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
        vector[1]->muestraDatos();
        cout << "   - MTV Movie Award (2011)"<<endl;
        cout << "   - Premio People's Choice Award (2011)"<<endl;
        cout << "   - Teen Choice Award (2010)"<<endl;
        cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
        vector[2]->muestraDatos();
        cout << "    - Teen Choice Award (2016)"<<endl;
        cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
        cout << "    - Premio People's Choice Award (2017)"<<endl;
        cout << "    - MTV Movie Award (2017)"<<endl;

        cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
        vector[3]->muestraDatos();
        cout << "    - Premios Oscar (2015)"<<endl;
        cout << "    - Premio Empire (2015)"<<endl;
        cout << "    - Premio BAFTA (2015)"<<endl;
        cout << "    - Premio Satellite (2015)"<<endl;
        cout << "    - Critics' Choice Movie Award (2015)"<<endl;
        cout << "    - Premio Hugo (2015)"<<endl;
        cout << "    - Teen Choice Award (2015)"<<endl;

        cout << "\n------------------------------------------ SERIES --------------------------------------------" <<endl<<endl;
        cout << "\n------------------------" << Serie1->getNombreVideo() << "---------------------------" <<endl;
        Serie1->muestraDatos();
        cout << "\n------------------------" << Serie2->getNombreVideo() << "-----------------------" <<endl;
        Serie2->muestraDatos();
       
        break;

    case 2:
    float cals;
        do{
        cout << "¨Que series desea consultar? (Ingrese una calificacion):" <<endl;
        cin >> cals;
        if(Serie1->getCalificacion() == cals && Serie2->getCalificacion() == cals){
        cout << "\n------------------------" << Serie1->getNombreVideo() << "---------------------------" <<endl;
        Serie1->muestraDatos();
        cout << "\n------------------------" << Serie2->getNombreVideo() << "-----------------------" <<endl;
        Serie2->muestraDatos();

        }else{
            if(Serie1->getCalificacion()==cals){
                cout << "\n------------------------" << Serie1->getNombreVideo() << "---------------------------" <<endl;
                Serie1->muestraDatos();
            }else{
                if(Serie2->getCalificacion() == cals){
                    cout << "\n------------------------" << Serie2->getNombreVideo() << "---------------------------" <<endl;
                    Serie2->muestraDatos();

                }else{
                    cout << "La calificacion no se encuentra aplicada"<<endl;

                }
            }
        }
        cout << "\n¨Desea consultar alguna mas?:"<<endl;
         cin >> afirmacion;
        }
        while (afirmacion == "Sí" || afirmacion == "SI" || afirmacion == "Si" || afirmacion == "SI" || afirmacion == "si");
    
        break;
 
    case 3:
    float calp;
    do{
    cout << "¨Que peliculas desea consultar? (Ingrese una calificacion): "<<endl;
    cin >> calp;
    if (vector[0]->getCalificacion() == calp && vector[1]->getCalificacion() == calp && vector[2]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
        cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
        vector[0]->muestraDatos();
        cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
        vector[1]->muestraDatos();
        cout << "   - MTV Movie Award (2011)"<<endl;
        cout << "   - Premio People's Choice Award (2011)"<<endl;
        cout << "   - Teen Choice Award (2010)"<<endl;
        cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
        vector[2]->muestraDatos();
        cout << "    - Teen Choice Award (2016)"<<endl;
        cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
        cout << "    - Premio People's Choice Award (2017)"<<endl;
        cout << "    - MTV Movie Award (2017)"<<endl;
        cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
        vector[3]->muestraDatos();
        cout << "    - Premios Oscar (2015)"<<endl;
        cout << "    - Premio Empire (2015)"<<endl;
        cout << "    - Premio BAFTA (2015)"<<endl;
        cout << "    - Premio Satellite (2015)"<<endl;
        cout << "    - Critics' Choice Movie Award (2015)"<<endl;
        cout << "    - Premio Hugo (2015)"<<endl;
        cout << "    - Teen Choice Award (2015)"<<endl;
        }else{
            if(vector[0]->getCalificacion() == calp && vector[1]->getCalificacion() == calp && vector[2]->getCalificacion()==calp){
                cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                vector[0]->muestraDatos();
                cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                vector[1]->muestraDatos();
                cout << "   - MTV Movie Award (2011)"<<endl;
                cout << "   - Premio People's Choice Award (2011)"<<endl;
                cout << "   - Teen Choice Award (2010)"<<endl;
                cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                vector[2]->muestraDatos();
                cout << "    - Teen Choice Award (2016)"<<endl;
                cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                cout << "    - Premio People's Choice Award (2017)"<<endl;
                cout << "    - MTV Movie Award (2017)"<<endl;
                

            }else{
                if(vector[0]->getCalificacion() == calp && vector[1]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                    cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                    vector[0]->muestraDatos();
                    cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                    vector[1]->muestraDatos();
                    cout << "   - MTV Movie Award (2011)"<<endl;
                    cout << "   - Premio People's Choice Award (2011)"<<endl;
                    cout << "   - Teen Choice Award (2010)"<<endl;
                    cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                    vector[3]->muestraDatos();
                    cout << "    - Premios Oscar (2015)"<<endl;
                    cout << "    - Premio Empire (2015)"<<endl;
                    cout << "    - Premio BAFTA (2015)"<<endl;
                    cout << "    - Premio Satellite (2015)"<<endl;
                    cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                    cout << "    - Premio Hugo (2015)"<<endl;
                    cout << "    - Teen Choice Award (2015)"<<endl;

                }else{
                    if(vector[0]->getCalificacion() == calp && vector[2]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                        cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                        vector[0]->muestraDatos();
                        cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                        vector[2]->muestraDatos();
                        cout << "    - Teen Choice Award (2016)"<<endl;
                        cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                        cout << "    - Premio People's Choice Award (2017)"<<endl;
                        cout << "    - MTV Movie Award (2017)"<<endl;
                        cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                        vector[3]->muestraDatos();
                        cout << "    - Premios Oscar (2015)"<<endl;
                        cout << "    - Premio Empire (2015)"<<endl;
                        cout << "    - Premio BAFTA (2015)"<<endl;
                        cout << "    - Premio Satellite (2015)"<<endl;
                        cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                        cout << "    - Premio Hugo (2015)"<<endl;
                        cout << "    - Teen Choice Award (2015)"<<endl;



                    }else{
                        if(vector[1]->getCalificacion()==calp && vector[2]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                            cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                            vector[1]->muestraDatos();
                            cout << "   - MTV Movie Award (2011)"<<endl;
                            cout << "   - Premio People's Choice Award (2011)"<<endl;
                            cout << "   - Teen Choice Award (2010)"<<endl;
                            cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                            vector[2]->muestraDatos();
                            cout << "    - Teen Choice Award (2016)"<<endl;
                            cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                            cout << "    - Premio People's Choice Award (2017)"<<endl;
                            cout << "    - MTV Movie Award (2017)"<<endl;
                            cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                            vector[3]->muestraDatos();
                            cout << "    - Premios Oscar (2015)"<<endl;
                            cout << "    - Premio Empire (2015)"<<endl;
                            cout << "    - Premio BAFTA (2015)"<<endl;
                            cout << "    - Premio Satellite (2015)"<<endl;
                            cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                            cout << "    - Premio Hugo (2015)"<<endl;
                            cout << "    - Teen Choice Award (2015)"<<endl;

                        }else{
                            if(vector[0]->getCalificacion()==calp && vector[1]->getCalificacion() == calp){
                                cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                                vector[0]->muestraDatos();
            
                                cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                                vector[1]->muestraDatos();
                                cout << "   - MTV Movie Award (2011)"<<endl;
                                cout << "   - Premio People's Choice Award (2011)"<<endl;
                                cout << "   - Teen Choice Award (2010)"<<endl;

                            }else{
                                if(vector[0]->getCalificacion() == calp && vector[2]->getCalificacion() == calp){
                                    cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                                    vector[0]->muestraDatos();
            
                                    cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                                    vector[2]->muestraDatos();
                                    cout << "    - Teen Choice Award (2016)"<<endl;
                                    cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                                    cout << "    - Premio People's Choice Award (2017)"<<endl;
                                    cout << "    - MTV Movie Award (2017)"<<endl;


                                }else{
                                    if(vector[0]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                                        cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                                        vector[0]->muestraDatos();
                                        cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                                        vector[3]->muestraDatos();
                                        cout << "    - Premios Oscar (2015)"<<endl;
                                        cout << "    - Premio Empire (2015)"<<endl;
                                        cout << "    - Premio BAFTA (2015)"<<endl;
                                        cout << "    - Premio Satellite (2015)"<<endl;
                                        cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                                        cout << "    - Premio Hugo (2015)"<<endl;
                                        cout << "    - Teen Choice Award (2015)"<<endl;
                                    }else{
                                        if(vector[1]->getCalificacion() == calp && vector[2]->getCalificacion() == calp){
                                            cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                                            vector[1]->muestraDatos();
                                            cout << "   - MTV Movie Award (2011)"<<endl;
                                            cout << "   - Premio People's Choice Award (2011)"<<endl;
                                            cout << "   - Teen Choice Award (2010)"<<endl;
                                            cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                                            vector[2]->muestraDatos();
                                            cout << "    - Teen Choice Award (2016)"<<endl;
                                            cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                                            cout << "    - Premio People's Choice Award (2017)"<<endl;
                                            cout << "    - MTV Movie Award (2017)"<<endl;


                                        }if(vector[1]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                                            cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                                            vector[1]->muestraDatos();
                                            cout << "   - MTV Movie Award (2011)"<<endl;
                                            cout << "   - Premio People's Choice Award (2011)"<<endl;
                                            cout << "   - Teen Choice Award (2010)"<<endl;
                                            cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                                            vector[3]->muestraDatos();
                                            cout << "    - Premios Oscar (2015)"<<endl;
                                            cout << "    - Premio Empire (2015)"<<endl;
                                            cout << "    - Premio BAFTA (2015)"<<endl;
                                            cout << "    - Premio Satellite (2015)"<<endl;
                                            cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                                            cout << "    - Premio Hugo (2015)"<<endl;
                                            cout << "    - Teen Choice Award (2015)"<<endl;


                                        }else{
                                            if(vector[2]->getCalificacion() == calp && vector[3]->getCalificacion() == calp){
                                                cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                                                vector[2]->muestraDatos();
                                                cout << "    - Teen Choice Award (2016)"<<endl;
                                                cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                                                cout << "    - Premio People's Choice Award (2017)"<<endl;
                                                cout << "    - MTV Movie Award (2017)"<<endl;
                                                cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                                                vector[3]->muestraDatos();
                                                cout << "    - Premios Oscar (2015)"<<endl;
                                                cout << "    - Premio Empire (2015)"<<endl;
                                                cout << "    - Premio BAFTA (2015)"<<endl;
                                                cout << "    - Premio Satellite (2015)"<<endl;
                                                cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                                                cout << "    - Premio Hugo (2015)"<<endl;
                                                cout << "    - Teen Choice Award (2015)"<<endl;

                                            }else{
                                                if(vector[0]->getCalificacion() == calp){
                                                    cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
                                                    vector[0]->muestraDatos();

                                                }else{
                                                    if(vector[1]->getCalificacion() == calp){
                                                        cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
                                                        vector[1]->muestraDatos();
                                                        cout << "   - MTV Movie Award (2011)"<<endl;
                                                        cout << "   - Premio People's Choice Award (2011)"<<endl;
                                                        cout << "   - Teen Choice Award (2010)"<<endl;

                                                    }else{
                                                        if(vector[2]->getCalificacion() == calp){
                                                            cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
                                                            vector[2]->muestraDatos();
                                                            cout << "    - Teen Choice Award (2016)"<<endl;
                                                            cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
                                                            cout << "    - Premio People's Choice Award (2017)"<<endl;
                                                            cout << "    - MTV Movie Award (2017)"<<endl;

                                                        }else{
                                                            if(vector[3]->getCalificacion() == calp){
                                                                cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
                                                                vector[3]->muestraDatos();
                                                                cout << "    - Premios Oscar (2015)"<<endl;
                                                                cout << "    - Premio Empire (2015)"<<endl;
                                                                cout << "    - Premio BAFTA (2015)"<<endl;
                                                                cout << "    - Premio Satellite (2015)"<<endl;
                                                                cout << "    - Critics' Choice Movie Award (2015)"<<endl;
                                                                cout << "    - Premio Hugo (2015)"<<endl;
                                                                cout << "    - Teen Choice Award (2015)"<<endl;

                                                            }else{
                                                                cout << "La calificacion no se encuentra aplicada" <<endl;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            
        }
        
        cout << "\n¨Desea consultar alguna mas?:"<<endl;
        cin >> af_pelicula;
        }
        while(af_pelicula == "Sí" || af_pelicula == "SI" || af_pelicula == "Si" || af_pelicula == "SI" || af_pelicula == "si");
        
        break;
    
        
    case 4:
    int s;
        //.......................................... CALIFICAR PELÍCULAS ..............................................
        do{
        cout << "¨Que desea calificar? (Presione 1 para pelicula/ presione 2 para serie): "<<endl;
        cin >> s;
        if (s == 1){
        cout<< "\nPELICULAS: "<<endl;
        cout<<"1. " << vector[0]->getNombreVideo() <<endl;
        cout<<"2. " << vector[1]->getNombreVideo() <<endl;
        cout<<"3. " << vector[2]->getNombreVideo() <<endl;
        cout<<"4. " << vector[3]->getNombreVideo() <<endl;
        cout << "\n¨Que pelicula desea calificar?(Ingrese de 1 a 4)" <<endl;
        cin >> num_pelicula;
        switch (num_pelicula)
        {
        case 1:
            vector[0]->calificaVideo(calificacion);
            cout << "\n------------------------" << vector[0]->getNombreVideo() << "-----------------------" <<endl;
            vector[0]->muestraDatos();
            break;
        case 2:
            vector[1]->calificaVideo(calificacion);
            cout << "\n------------------------" << vector[1]->getNombreVideo() << "-----------------------" <<endl;
            vector[1]->muestraDatos();
            cout << "   - MTV Movie Award (2011)"<<endl;
            cout << "   - Premio People's Choice Award (2011)"<<endl;
            cout << "   - Teen Choice Award (2010)"<<endl;

            break;
        case 3:
            vector[2]->calificaVideo(calificacion);
            cout << "\n------------------------" << vector[2]->getNombreVideo() << "-----------------------" <<endl;
            vector[2]->muestraDatos();
            cout << "    - Teen Choice Award (2016)"<<endl;
            cout << "    - Bandung Fill Festival for Imported Film (2017)"<<endl;
            cout << "    - Premio People's Choice Award (2017)"<<endl;
            cout << "    - MTV Movie Award (2017)"<<endl;
            break;
        case 4:
            vector[3]->calificaVideo(calificacion);
            cout << "\n------------------------" << vector[3]->getNombreVideo() << "-----------------------" <<endl;
            vector[3]->muestraDatos();
            cout << "    - Premios Oscar (2015)"<<endl;
            cout << "    - Premio Empire (2015)"<<endl;
            cout << "    - Premio BAFTA (2015)"<<endl;
            cout << "    - Premio Satellite (2015)"<<endl;
            cout << "    - Critics' Choice Movie Award (2015)"<<endl;
            cout << "    - Premio Hugo (2015)"<<endl;
            cout << "    - Teen Choice Award (2015)"<<endl;
            break;
        default:
            cout << "LA OPCION ELEGIDA NO ESTA DENTRO DEL CATALOGO" <<endl;
            break;
        }
        }
        else{
        cout<< "\nSERIES: "<<endl;
        cout<<"1. " << Serie1->getNombreVideo() <<endl;
        cout<<"2. " << Serie2->getNombreVideo() <<endl;

        //............................................... CALIFICAR SERIES ................................................
        cout << "\n¨Que serie desea calificar?(Ingrese 1 o 2): " <<endl;
        cin >> num_serie;
        switch (num_serie)
        {
        case 1:
            Serie1->calificaVideo(calificacion);
            cout << "\n------------------------" << Serie1->getNombreVideo() << "-----------------------" <<endl;
            Serie1->muestraDatos();
            break;
        case 2:
            Serie2->calificaVideo(calificacion);
            cout << "\n------------------------" << Serie2->getNombreVideo() << "-----------------------" <<endl;
            Serie2->muestraDatos();
            break;
        default:
            cout << "LA OPCION ELEGIDA NO ESTA DENTRO DEL CATALOGO" <<endl;
            break;
        }
        }
        cout << "\n¨Desea calificar algo mas? (Si/No): " <<endl;
        cin >> af_serie;
        }
        while (af_serie == "Sí" || af_serie == "Si" || af_serie == "si" || af_serie == "SI");
        cout << "\nGracias por su opinion para mejorar nuestro contenido :)" <<endl;
        break;
        
    case 5:
        cout << "\nGracias por navegar a traves de la plataforma :D" <<endl<<endl;
        break;
    }
    }
    while(op != 5);
}




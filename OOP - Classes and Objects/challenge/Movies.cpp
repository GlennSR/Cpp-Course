#include <iostream>
#include <vector>
#include "Movies.h"

Movies::Movies(){};

Movies::~Movies(){};

bool Movies::add_movie(std::string name, int rating, int watched){
    for(const Movie &movie: movies) // const to avoid changing the object
        if(movie.get_name() == name)
            return false;
    
    movies.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(std::string name){
    for(Movie &movie: movies)
        if(movie.get_name() == name){
            movie.increment_watched();
            return true;
        }
    return false;
}

void Movies::display() const{
    if(movies.size() == 0){
        std::cout << "Sorry, there are no movies to display\n";
    }else{
        std::cout << "============================\n";
        for(const auto &movie: movies)
            movie.display();
        std::cout << "============================\n";
    }
}
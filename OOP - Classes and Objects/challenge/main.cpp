#include <iostream>
#include "Movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, int rating, int watched);

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Simpsons", 5, 10);
    add_movie(my_movies, "Depois do Universo", 5, 1);
    add_movie(my_movies, "Thor 4", 2, 2);
    add_movie(my_movies, "Thor 4", 1, 2);

    my_movies.display();

    increment_watched(my_movies, "Simpsons");

    my_movies.display();

    return 0;
}


void increment_watched(Movies &movies, std::string name){
    if(movies.increment_watched(name))
        std::cout << name << " watch incremented\n";
    else
        std::cout << name << " not found\n";
}

void add_movie(Movies &movies, std::string name, int rating, int watched){
    if(movies.add_movie(name, rating, watched))
        std::cout << name << " added\n";
    else
        std::cout << name << " already exists\n";
}
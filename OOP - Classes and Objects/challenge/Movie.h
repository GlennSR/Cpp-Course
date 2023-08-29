#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie{
private:
    std::string name;
    int rating;
    int watched;

public:
    Movie(std::string name, int rating, int watched);

    Movie(const Movie &source);

    ~Movie();

    void set_name(std::string name){ this->name = name;}
    std::string get_name() const{ return name; }

    void set_rating(int rating){ this->rating = rating;}
    int get_rating(){ return rating; }

    void set_watched(int watched){ this->watched = watched;}
    int get_watched(){ return watched; }

    void increment_watched(){ ++watched; }
    
    void display() const;

};

#endif
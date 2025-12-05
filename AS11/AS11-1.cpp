#include <iostream>
#include <string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
};

void displayMovie(const MovieData m) {
    cout << "Title       : " << m.title << "\n";
    cout << "Director    : " << m.director << "\n";
    cout << "Year Released: " << m.yearReleased << "\n";
    cout << "Running Time: " << m.runningTime << " minutes\n";
    
}

int main() {
    MovieData movie1, movie2;

    // Example data for movie1
    movie1.title = "The Example Movie";
    movie1.director = "Jane Doe";
    movie1.yearReleased = 2020;
    movie1.runningTime = 125;

    // Example data for movie2
    movie2.title = "Another Example";
    movie2.director = "John Smith";
    movie2.yearReleased = 2018;
    movie2.runningTime = 98;

    cout << "Movie 1 information:\n";
    displayMovie(movie1);

    cout << "Movie 2 information:\n";
    displayMovie(movie2);

    return 0;
}

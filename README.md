Streaming Platform

This project is a simulation of a streaming platform that allows users to browse movies and series, view their details, filter by rating, and rate the available content. It is developed in C++ and uses object-oriented programming concepts such as inheritance and polymorphism.

## Main features

- **Movie and series catalog**: Displays detailed information about each movie and series, including genre, release year, duration, rating and nominations (in the case of movies) or number of episodes (in the case of series).
- **Rating filtering**: Allows users to search for movies or series that have a specific rating.
- **Content rating**: Users can rate movies and series, which updates their rating in the system.
- **Menu interface**: An interactive menu makes it easy to navigate through the different options of the program.

## Project structure

The project is organized into three main files:

1. **`main.cpp`**: Contains the main logic of the program, including the interactive menu and user interaction.
2. **`Streaming.h`**: Defines the `Video`, `Movie`, and `Series` classes, along with their attributes and methods.
3. **`Streaming.cpp`**: Implements the methods of the classes defined in `Streaming.h`.

## Classes and inheritance

- **`Video` class**: This is the base class that contains the attributes common to movies and series, such as name, genre, release year, duration, and rating.
- **`Movie` class**: Inherits from `Video` and adds movie-specific attributes, such as the number of nominations.
- **`Series` class**: Inherits from `Video` and adds series-specific attributes, such as the number of episodes.

The program will display a menu with the following options:

1. Show all movies and series.
2. Filter series by rating.
3. Filter movies by rating.
4. Rate movies or series.
5. Exit the program.

When starting the program, a menu is displayed with the available options.
The user can select an option to view the movies and series, filter them by rating or rate them.
The program displays detailed information about each content based on the user's selection.
The user can rate movies or series, which updates their rating in the system.



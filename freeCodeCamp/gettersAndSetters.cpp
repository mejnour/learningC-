#include <iostream>

using namespace std;

class Movie
{
    private:
        string rating;

    public:
        string title;
        string director;

        Movie (string atitle, string adirector, string arating) {
            title = atitle;
            director = adirector;
            setRating(arating);
        }

        void setRating(string arating) {
            if (arating == "PG-13") {
                rating = arating;
            } else {
                rating = "NR";
            }
        }

        string getRating() {
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Zé", "PG-13");

    avengers.setRating("Bacurau");

    cout << avengers.getRating() << endl;
}
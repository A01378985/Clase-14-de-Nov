#ifndef JUGADORES_H
#define JUGADORES_H

#include <string>
using std::string;

class JUGADORES {
    private:
        string color; 
        int pos;
        string id;

    public: 
        string getColor();
        void setColor(string color);
        int getPos();
        void setPos(int p);
        string getId();
        void setId(string id);

    
};

#endif

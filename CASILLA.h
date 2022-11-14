#ifndef CASILLA_H
#define CASILLA_H

class CASILLA{
    private:
        int pos;
        int cambio_pos;

    public:
    int mover();
    int getPos();
    void setPos(int p);
    int getCambioPos();
    void setCambioPos(int p);
    
};

#endif
#ifndef BASIC_H
#define BASIC_H

class Num {
    public:
        Num(int n);
        int getNum();
    private:
        int num;
};

int coin_change(int x);

#endif
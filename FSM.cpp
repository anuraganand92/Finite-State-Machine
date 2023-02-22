#include <bits/stdc++.h>
using namespace std;

class State {
public:
    virtual void on() = 0;
    virtual void off() = 0;
};

class OnState : public State {
public:
    void on() {
        cout << "Already On" << endl;
    }
    void off() {
        cout << "Turning Off" << endl;
    }
};

class OffState : public State {
public:
    void on() {
        cout << "Turning On" << endl;
    }
    void off() {
        cout << "Already Off" << endl;
    }
};  

class Switch {
private:
    State *state;   
public:
    Switch() {
        state = new OffState();
    }
    void setState(State *state) {
        this->state = state;
    }
    void on() {
        state->on();
    }
    void off() {
        state->off();
    }
};

int main() {
    Switch s;
    s.on();
    s.off();
    s.off();
    s.on();
    s.on();
    return 0;
}      

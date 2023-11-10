#pragma once
#include <iostream>

using namespace std;

class MediaPlayer
{
private:

public:
    void play() {
        cout << "Playing multimedia" << endl;
    }

    void pause() {
        cout << "Pausing multimedia" << endl;
    }

    void stop() {
        cout << "Stopping multimedia" << endl;
    }
};

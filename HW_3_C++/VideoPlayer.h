#pragma once
#include <iostream>
#include "MediaPlayer.h"

using namespace std;

class VideoPlayer : MediaPlayer
{
private:
    int seconds;
public:
    void rewind() {
        cout << "Rewinding video by " << seconds << " seconds" << endl;
    }
};

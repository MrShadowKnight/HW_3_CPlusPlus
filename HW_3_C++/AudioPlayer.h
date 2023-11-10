#pragma once
#include <iostream>
#include "MediaPlayer.h"

using namespace std;

class AudioPlayer : MediaPlayer
{
private:
    int volume;
public:
    void adjustVolume() {
        cout << "Adjusting volume to " << volume << endl;
    }
};

#include <iostream>
#include <math.h>
#include "MediaPlayer.h"
#include "VideoPlayer.h"
#include "AudioPlayer.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

using namespace std;

int main()
{
    // TASK 1

    MediaPlayer genericPlayer;
    AudioPlayer audioPlayer;
    VideoPlayer videoPlayer;

    genericPlayer.play();
    genericPlayer.pause();
    genericPlayer.stop();

    audioPlayer.play();
    audioPlayer.pause();
    audioPlayer.stop();
    audioPlayer.adjustVolume(50);

    videoPlayer.play();
    videoPlayer.pause();
    videoPlayer.stop();
    videoPlayer.rewind(30);

    // TASK 2

    Car myCar;
    Motorcycle myMotorcycle;

    myCar.start();
    myCar.stop();

    myMotorcycle.start();
    myMotorcycle.performStunts();
    myMotorcycle.stop();

    return 0;
}
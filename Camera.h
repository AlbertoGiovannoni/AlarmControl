//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_CAMERA_H
#define UNTITLED_CAMERA_H
#include <iostream>
#include "Alarm.h"

using namespace std;

class Camera : public Alarm {
public:
    Camera(string position) : Alarm(position) {}

    virtual ~Camera() {}

    virtual string getAlarmDescription() const {
        return (position + " camera detected an anomaly.");
    }

    std::string getVideoStream() const {
        return ("Let's pretend this is a video stream from " + position + " camera.");
    }
};



#endif //UNTITLED_CAMERA_H

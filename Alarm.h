//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_ALARM_H
#define UNTITLED_ALARM_H
#include <iostream>

using namespace std;

class Alarm {
public:
    Alarm(string p) : position(p) {}
    virtual string getAlarmDescription() const = 0;
    virtual void activate() {

    }
    virtual ~Alarm() {}
protected:
    std::string position;
};



#endif //UNTITLED_ALARM_H

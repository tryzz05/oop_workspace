#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    private:
        bool isOn;
        int powerRating;
    public:
        Appliance();

        Appliance(int powerRating);

        int get_PowerRating();

        bool get_isOn();

        void turnOn();

        void turnOff();

        virtual double getPowerConsumption();

};

#endif
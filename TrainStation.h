
#pragma once

#include <string>

namespace YourProjectNamespace {

    ref class TrainStation
    {
    public:
        String^ Name;
        int TravelTime; // Travel time in minutes from previous station

        TrainStation(String^ name, int travelTime)
        {
            Name = name;
            TravelTime = travelTime;
        }
    };
}
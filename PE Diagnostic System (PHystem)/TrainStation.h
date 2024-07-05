#pragma once

namespace YourProjectNamespace {
    using namespace System;

    public ref class TrainStation {
    public:
        property String^ Name;
        property int TravelTime; // Travel time in minutes from previous station

        TrainStation(String^ name, int travelTime) {
            Name = name;
            TravelTime = travelTime;
        }
    };
}

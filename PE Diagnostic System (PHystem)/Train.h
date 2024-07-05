#pragma once

#include "TrainStation.h"

namespace YourProjectNamespace {
    using namespace System;
    using namespace System::Collections::Generic;

    public ref class Train {
    private:
        int currentStationIndex;
        List<TrainStation^>^ stations;
        DateTime lastUpdateTime;

    public:
        property String^ TrainName;
        property String^ Status;
        property TrainStation^ CurrentStation;

        Train(String^ name, List<TrainStation^>^ stations, int startIndex) {
            TrainName = name;
            this->stations = stations;
            currentStationIndex = startIndex;
            CurrentStation = stations[currentStationIndex];
            Status = "On Time";
            lastUpdateTime = DateTime::Now;
        }

        void UpdateStatus() {
            TimeSpan elapsed = DateTime::Now - lastUpdateTime;

            if (Status == "On Time" && elapsed.TotalMinutes >= 1){
                Status = "Arriving";
                lastUpdateTime = DateTime::Now;
            }
            else if (Status == "Arriving" && elapsed.TotalMinutes >= 2) {
                Status = "Arrived";
                lastUpdateTime = DateTime::Now;
            }
            else if (Status == "Arrived" && elapsed.TotalSeconds >= 60) {
                Status = "Departing";
                lastUpdateTime = DateTime::Now;
            }
            else if (Status == "Departing" && elapsed.TotalSeconds >= 30) {
                Status = "On Time";
                lastUpdateTime = DateTime::Now;
                currentStationIndex = (currentStationIndex + 1) % stations->Count;
                CurrentStation = stations[currentStationIndex];
            }
        }
    };
}

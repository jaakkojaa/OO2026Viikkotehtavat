#ifndef DHT_H
#define DHT_H
#include "random.h"

#endif // DHT_H
class DHT
{
public:
    void begin();
    float readTemperature();

private:
    float temperature;
    random gen;
};

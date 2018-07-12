
#include <CMMC_Legend.h>
#include <modules/WC_ESPNowModule.h>
#include <CMMC_Sensor.h>

CMMC_Legend os;

// float axisX = 0.0;
// float axisY = 0.0;
// float axisZ = 0.0;

void setup()
{
  os.addModule(new WC_ESPNowModule()); 
  os.setup();
  Serial.printf("APP VERSION: %s\r\n", LEGEND_APP_VERSION);
}

void loop()
{
  os.run();
}
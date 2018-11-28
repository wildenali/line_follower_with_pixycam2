#include <Pixy2.h>

Pixy2 pixy;

void setup()
{
  Serial.begin(115200);
  Serial.print("Starting...\n");

  pixy.init();
  Serial.println(pixy.changeProg("line"));
}

void loop()
{
  int8_t i;
  char buf[128];
 
  pixy.line.getMainFeatures();

//  Cara Baca DATA satu satu si pixycam2 yg garis nya

  if (pixy.line.numVectors)
    Serial.print(pixy.line.vectors->m_x1);
    Serial.print(" ");
    Serial.print(pixy.line.vectors->m_x0);
    Serial.print("\t");
    Serial.print(pixy.line.vectors->m_y1);
    Serial.print(" ");
    Serial.print(pixy.line.vectors->m_y0);
    Serial.print("\t");
    pixy.line.vectors[0].print();
 

}



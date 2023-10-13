Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


struct Step {
  float pos[8];
  float speed;
};


class Servo {
  public:
    int pin = 0;
    float pos = 0;
    int move = 1;
    float trim;

    bool moveServo(int newPos, float speed) {
      if(newPos > pos) { 
        if(pos + speed > newPos)
          pos = newPos;
        else
          pos = pos + speed;
      }
      else if(newPos < pos) {
        if(pos - speed < newPos)
          pos = newPos;
        else
          pos = pos - speed;
      }
      else if(newPos == pos) {
        return true; // reached the new position
      }
      int s = (pin == 2 || pin == 3 || pin > 5) ? 1 : -1;
      float val = 270 + ((pos + trim) * s);
      pwm.setPWM(pin, 0, val);
      return false;
    }
};

class Legs {
  private:
    int mode = 0;
    int dataTick = 0;
    Servo servo[8];

  public:
    void init(float trim[8]) {
      for(int i = 0; i < 8; i ++) {
        servo[i].pin = i;
        servo[i].trim = trim[i];
      }
      pwm.setPWM(0, 0, 270);
      pwm.setPWM(1, 0, 270);

      pwm.setPWM(2, 0, 270);
      pwm.setPWM(3, 0, 270);

      pwm.setPWM(4, 0, 270);
      pwm.setPWM(5, 0, 270);

      pwm.setPWM(6, 0, 270);
      pwm.setPWM(7, 0, 270);
     mode = 1;
    }

    void moveLegs(Step* stepsData, int dataSize ) {
      if(mode == 0)
        return;
      if(mode == 1) {
        Step step = stepsData[dataTick];

        bool complete[8] = {false,false,false,false,false,false,false,false};
        
        for(int i = 0; i < 8; i++) {
        
          complete[i] = servo[i].moveServo(step.pos[i], step.speed);
          if(complete[0] == true && complete[1] == true && complete[2] == true && complete[3] == true
            && complete[4] == true && complete[5] == true && complete[6] == true && complete[7] == true)
          {
            Serial.println("###");
            Serial.println(complete[0]);
            mode = 2; // tick complete
          }
        }
        
      }
      if(mode == 2) {
        // move to the next step
        dataTick ++;
        mode = 1;
        if(dataTick == dataSize) {
          mode = 0;
        }
      }
    }
};
/*
 
 FRONT
  Right
    Upper      
    Lower
      up +
 REAR
  Right
    Upper
      clockwise +
    Lower
      clockwise - 

 */


Step stepsWalk[] = {
  {
    {
      // front right leg
      270 - 80,
      270 ,
      // front left leg
      270 + 80,
      270,

      // rear right leg
      270 + 110,
      270 + 50,
      // rear left leg
      270 - 110,
      270 - 50,        
    },
    2
  },

  // Stand up with the front legs
  {
    {
      // front right leg
      270 + 80,
      270 + 60,
      // front left leg
      270 - 80,
      270 - 60,

      // rear right leg
      270 + 110,
      270 + 50,
      // rear left leg
      270 - 110,
      270 - 50,       
    },
    2
  },  
  
  // tilt right to start moving forward
  {
    {
      // front right leg
      270 + 80,
      270 + 60,
      // front left leg
      270,
      270 - 60,

      // rear right leg
      270 + 130,
      270 + 50,
      // rear left leg
      270 - 160,
      270 - 50,       
    },
    1
  },   

  // start moving forward
  {
    {
      // front right leg
      270 + 80,
      270 + 60,
      // front left leg
      270 + 30,
      270 - 60,

      // rear right leg
      270 + 180,
      270 + 50,
      // rear left leg
      270 - 180,
      270 - 20,       
    },
    1
  },   


};
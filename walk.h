/**
 * front right leg + back
 * front left leg + up
 *
 * front right leg - down 
 * front left leg - up 
 **/


Step stepsWalk[] = {
  {
    {
      // front right leg
      270 - 80,
      270,
      // front left leg
      270 + 80,
      270,

      // rear right leg
      270 + 100,
      270 + 40,
      // rear left leg
      270 - 100,
      270 - 40,        
    },
    2
  },

  {
    {
      // front right leg
      270 + 80,
      270 + 40,
      // front left leg
      270 - 80,
      270 - 40,

      // rear right leg
      270 + 140,
      270 + 50,
      // rear left leg
      270 - 140,
      270 - 50,        
    },
    1
  },

  // start moving forward

  {
    {
      // front right leg
      270 + 80,
      270 + 40,
      // front left leg
      270 - 80,
      270 - 80,

      // rear right leg
      270 + 140,
      270 + 50,
      // rear left leg
      270 - 140,
      270 - 30,        
    },
    1
  },  


  {
    {
      // front right leg
      270 + 100,
      270 + 40,
      // front left leg
      270 + 20,
      270 + 20,

      // rear right leg
      270 + 140 + 20,
      270 + 50 - 30,
      // rear left leg
      270 - 140 + 10,
      270 - 30 + 30,        
    },
    1
  },  
 
  // move forward


  {
    {
      // front right leg
      270 + 140,
      270 + 40,
      // front left leg
      270 + 20,
      270 + 80,

      // rear right leg
      270 + 140 + 20,
      270 + 50 - 80,
      // rear left leg
      270 - 140 + 10,
      270 - 30 + 80,        
    },
    1
  },    

};
/*

  UPPER
    + counter clockwise
  LOWER
    + clockwise

 */

 int frontLegsUpper = 120;
 int frontLegsLower = - 120;
 int rearLegsBodyAngle = -10;


Step stepsWalk[] = {



  // stand up

  {
    {
      // front right leg
      0,
      0 ,
      // front left leg
      0,
      0,

      // rear right leg
      0,
      0,
      // rear left leg
      0,
      0,        
    },
    1
  },  
  
  // stand up
  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle,
      -140,
      // rear left leg
      0 + rearLegsBodyAngle,
      -140,        
    },
    1
  },   



  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle,
      -140,
      // rear left leg
      0 + rearLegsBodyAngle + 20, // <<<
      -140 ,        
    },
    2
  },   

  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle,
      -140,
      // rear left leg
      0 + rearLegsBodyAngle + 25 + 30, // <<<
      -140 + 60,        
    },
    2
  },  

// =======================================

  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle + 20 - 20,
      -140 + 40,
      // rear left leg
      0 + rearLegsBodyAngle + 25, // <<<
      -140 + 60,        
    },
    2
  },  

};


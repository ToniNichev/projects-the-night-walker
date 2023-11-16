/*

  UPPER
    + counter clockwise
  LOWER
    + clockwise

 */

 int frontLegsUpper = 100;
 int frontLegsLower = - 120;
 int rearLegsBodyAngle = -10;
 int walkingSpeed = 2;


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
    walkingSpeed
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
    walkingSpeed
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
      0 + rearLegsBodyAngle + 25 + 20, // <<<
      -140 + 60,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle + 90,
      -140 + 80,
      // rear left leg
      0 + rearLegsBodyAngle + 0, // <<<
      -140 + 30,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle - 10,
      -140 + 0,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 80,        
    },
    walkingSpeed
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
    walkingSpeed
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
      0 + rearLegsBodyAngle + 25 + 20, // <<<
      -140 + 60,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle + 90,
      -140 + 80,
      // rear left leg
      0 + rearLegsBodyAngle + 0, // <<<
      -140 + 30,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle - 10,
      -140 + 0,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 80,        
    },
    walkingSpeed
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
    walkingSpeed
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
      0 + rearLegsBodyAngle + 25 + 20, // <<<
      -140 + 60,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle + 90,
      -140 + 80,
      // rear left leg
      0 + rearLegsBodyAngle + 0, // <<<
      -140 + 30,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle - 10,
      -140 + 0,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 80,        
    },
    walkingSpeed
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
    walkingSpeed
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
      0 + rearLegsBodyAngle + 25 + 20, // <<<
      -140 + 60,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle + 90,
      -140 + 80,
      // rear left leg
      0 + rearLegsBodyAngle + 0, // <<<
      -140 + 30,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle - 10,
      -140 + 0,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 80,        
    },
    walkingSpeed
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
    walkingSpeed
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
      0 + rearLegsBodyAngle + 25 + 20, // <<<
      -140 + 60,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle + 90,
      -140 + 80,
      // rear left leg
      0 + rearLegsBodyAngle + 0, // <<<
      -140 + 30,        
    },
    walkingSpeed
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
      0 + rearLegsBodyAngle - 10,
      -140 + 0,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 80,        
    },
    walkingSpeed
  },     
/* The en

*/
};


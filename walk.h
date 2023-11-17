/*

  UPPER
    + counter clockwise
  LOWER
    + clockwise

 */

 int frontLegsUpper = 100;
 int frontLegsLower = - 120;
 int rearLegsBodyAngle = -10;
 int walkingSpeed = 3;


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
// =======================================

  // # 1
  // rear left up
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

  // # 2
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
      0 + rearLegsBodyAngle + 75, // <<<
      -140 + 70,        
    },
    walkingSpeed + 3
  },  

  // # 3
  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle - 40,
      -140 - 40,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 70,        
    },
    walkingSpeed + 2
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
      0 + rearLegsBodyAngle + 60,
      -140 + 60,
      // rear left leg
      0 + rearLegsBodyAngle + 10, // <<<
      -140 + 10,        
    },
    walkingSpeed
  },  

// #####################################
//  end cycle
// #####################################

  // # 1
  // rear left up
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

  // # 2
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
      0 + rearLegsBodyAngle + 75, // <<<
      -140 + 70,        
    },
    walkingSpeed + 3
  },  

  // # 3
  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle - 40,
      -140 - 40,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 70,        
    },
    walkingSpeed + 2
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
      0 + rearLegsBodyAngle + 60,
      -140 + 60,
      // rear left leg
      0 + rearLegsBodyAngle + 10, // <<<
      -140 + 10,        
    },
    walkingSpeed
  }, 

// #####################################
//  end cycle
// #####################################

  // # 1
  // rear left up
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

  // # 2
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
      0 + rearLegsBodyAngle + 75, // <<<
      -140 + 70,        
    },
    walkingSpeed + 3
  },  

  // # 3
  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle - 40,
      -140 - 40,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 70,        
    },
    walkingSpeed + 2
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
      0 + rearLegsBodyAngle + 60,
      -140 + 60,
      // rear left leg
      0 + rearLegsBodyAngle + 10, // <<<
      -140 + 10,        
    },
    walkingSpeed
  },    

// #####################################
//  end cycle
// #####################################

  // # 1
  // rear left up
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

  // # 2
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
      0 + rearLegsBodyAngle + 75, // <<<
      -140 + 70,        
    },
    walkingSpeed + 3
  },  

  // # 3
  {
    {
      // front right leg
      0 + frontLegsUpper,
      0 + frontLegsLower,
      // front left leg
      0 + frontLegsUpper,
      0 + frontLegsLower,

      // rear right leg
      0 + rearLegsBodyAngle - 40,
      -140 - 40,
      // rear left leg
      0 + rearLegsBodyAngle + 90, // <<<
      -140 + 70,        
    },
    walkingSpeed + 2
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
      0 + rearLegsBodyAngle + 60,
      -140 + 60,
      // rear left leg
      0 + rearLegsBodyAngle + 10, // <<<
      -140 + 10,        
    },
    walkingSpeed
  }, 

/* The end

*/
};


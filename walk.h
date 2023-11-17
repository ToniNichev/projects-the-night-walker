/*

  UPPER
    + counter clockwise
  LOWER
    + clockwise

 */

 int frontLegsUpper = 100;
 int frontLegsLower = - 120;
 int rearLegsBodyAngle = -5;
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
  // #########################################################
  // end walking
  // #########################################################
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
      -140 + 60,
      // rear left leg
      0 + rearLegsBodyAngle,
      -140 + 60,        
    },
    1
  }, 

  // #########################################################
  // #########################################################
  // hip=-hop hends up
  // #########################################################
  // #########################################################

  {
    {
      // front right leg
      0,
      -100,
      // front left leg
      0,
      -100,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  },  


   // ***************************
  // paws up
  // ***************************
  {
    {
      // front right leg
      160,
      160,
      // front left leg
      160,
      160,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  }, 


  {
    {
      // front right leg
      100,
      100,
      // front left leg
      180,
      180,

      // rear right leg
      0,
      -110,
      // rear left leg
      0,
      -130,        
    },
    6
  },   

  {
    {
      // front right leg
      200,
      200,
      // front left leg
      100,
      100,

      // rear right leg
      0,
      -130,
      // rear left leg
      0,
      -110,        
    },
    6
  },   

  {
    {
      // front right leg
      100,
      100,
      // front left leg
      180,
      180,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  },   

  {
    {
      // front right leg
      200,
      200,
      // front left leg
      100,
      100,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  }, 

  {
    {
      // front right leg
      100,
      100,
      // front left leg
      180,
      180,

      // rear right leg
      0,
      -110,
      // rear left leg
      0,
      -130,        
    },
    6
  },   

  {
    {
      // front right leg
      200,
      200,
      // front left leg
      100,
      100,

      // rear right leg
      0,
      -130,
      // rear left leg
      0,
      -110,        
    },
    6
  },   

  {
    {
      // front right leg
      100,
      100,
      // front left leg
      180,
      180,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  },   

  {
    {
      // front right leg
      200,
      200,
      // front left leg
      100,
      100,

      // rear right leg
      0,
      -120,
      // rear left leg
      0,
      -120,        
    },
    6
  }, 

  // #########################################################
  // #########################################################
  // default position
  // #########################################################
  // #########################################################  


  {
    {
      // front right leg
      0,
      0,
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
    3
  }, 
  // #########################################################
  // #########################################################
  // hip-hop running man 
  // #########################################################
  // #########################################################    


  {
    {
      // front right leg
      0,
      0,
      // front left leg
      180,
      180,

      // rear right leg
      -180,
      -180,
      // rear left leg
      0,
      0,        
    },
    10
  }, 

  {
    {
      // front right leg
      0,
      0,
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
    10
  },  



  {
    {
      // front right leg
      180,
      180,
      // front left leg
      0,
      0,

      // rear right leg
      0,
      0,
      // rear left leg
      -180,
      -180,        
    },
    10
  }, 

  {
    {
      // front right leg
      0,
      0,
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
    10
  },  

  {
    {
      // front right leg
      180,
      180,
      // front left leg
      180,
      180,

      // rear right leg
      180,
      180,
      // rear left leg
      180,
      180,      
    },
    10
  },  

  {
    {
      // front right leg
      0,
      0,
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
    10
  }, 

  {
    {
      // front right leg
      180,
      -180,
      // front left leg
      180,
      -180,

      // rear right leg
      180,
      -180,
      // rear left leg
      180,
      -180,      
    },
    10
  }, 

  {
    {
      // front right leg
      0,
      180,
      // front left leg
      0,
      180,

      // rear right leg
      0,
      0,
      // rear left leg
      0,
      0,        
    },
    10
  }, 



/* The end

*/
};


/* my first C project, lots of improvments will be added "Battle ship game"*/

//
//  main.c
//  battleship
//
//
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



const int rows=10;
const int columns=10;
const int total_ships=10;
int matrix [rows][columns];




/* ***************************************************************** */
/* a function that builds our battle field*/
void build(){
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            matrix[i][j]=0;
        }
    }
    }



/* ***************************************************************** */
/* a function that shows the grid*/
void showgrid(){
    
    for (int i=0; i<rows; i++)
    {
        printf("\n");
        for (int j=0; j<columns; j++)
        {
            printf("%d\t",matrix[i][j]);

        }
    }
}



/* ***************************************************************** */
/* a function that spawns the ships*/    /* only for testing it spawns only on one spot */
void spawn_myships()
{
    int ships=0;
    while(ships<total_ships)
    {
        int x= rand()%rows;
        int y= rand()%columns;
        if (matrix[x][y] != 1) {
            ships++;
            matrix[x][y]=1;
        }
    }
}

/* ***************************************************************** */
/* a function that spawns the destroyer Ship*/

void spawn_Destroyer()
{
const int Des_ships=4;
      
      int D=0;
   while(D<Des_ships)
  {
        int x= rand()%rows;
        int y= rand()%columns;
        int random_4Num=rand()%4;
        int random_3Num=rand()%3;
        int random_2Num=rand()%2;
        
  
      if (matrix [x][y]==0 && matrix[x][y] != 5 && matrix[x][y] != 7 && matrix[x][y] != 1 && matrix[x][y]!=2 && matrix [x-1][y]==0 && matrix [x+1][y]==0 && matrix [x][y-1]==0 && matrix [x][y+1]==0 )
      {
           /* [1] the if statment will not excute without cheching if the spot has a value of 0 and does not have a carrier (5)a destroyer (2), Cruiser and no submarine.  it looks around our slot in the array if there is a destroyer around it
               [2]this function does it's part perfectly with these condition if there was only two types of ships excluding the submarine and the cruiser but a change of conditions for spawning the submarine and spawning the cruiser will fix this. */
          
          
          if (x==0 && y!=0 && y!=9) {    /* if the ship spawns on the top edge of our matrix excluding the two top corners */
              matrix[x][y]=2;
              if (random_3Num==0) {
                  matrix[x][y-1]=2;
                  D++;
              }
              if (random_3Num==1){
                  matrix[x][y+1]=2;
                  D++;
              }
              if (random_3Num==2) {
                  matrix[x+1][y]=2;
                  D++;
              }
          }
          
          
          if (y==0 && x!=0 && x!=9) { /* if the ship spawns on the left edge of our matrix excluding the two Top and Bottom corners */
              matrix[x][y]=2;
              if (random_3Num==0) {
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_3Num==1){
                  matrix[x+1][y]=2;
                  D++;
              }
              if (random_3Num==2) {
                  matrix[x][y+1]=2;
                  D++;
              }
          }
          
          
          if (x==9 && y!=0 && y!=9) { /* if the ship spawns on the bottom edge of our matrix excluding the two bottom corners */
              matrix[x][y]=2;
              if (random_3Num==0) {
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_3Num==1){
                  matrix[x][y+1]=2;
                  D++;
              }
              if (random_3Num==2) {
                  matrix[x][y-1]=2;
                  D++;
          }
          }
          
          
          if (y==9 && x!=0 &x!=9) { /* if the ship spawns on the right edge of our matrix excluding the two top and bottom corners */
              matrix[x][y]=2;
              if (random_3Num==0) {
                  matrix[x+1][y]=2;
                  D++;
              }
              if (random_3Num==1){
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_3Num==2) {
                  matrix[x][y-1]=2;
                  D++;
              }
           }
          
          
          if (x==0 && y==0) {          /* if the ship is placed at the top left corner */
              matrix[x][y]=2;
              if (random_2Num==0) {
                  matrix[x][y+1]=2;
                  D++;
              }
              if (random_2Num==1) {
                  matrix[x+1][y]=2;
                  D++;
              }
          }
          
          
          if (x==9 && y==0) {          /* if the ship is placed at the bottom left corner */
              matrix[x][y]=2;
              if (random_2Num==0) {
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_2Num==1) {
                  matrix[x][y+1]=2;
                  D++;
              }
          }
          
          
          if (y==9 && x==9) {         /* if the ship is placed at the bottom right corner */
              matrix[x][y]=2;
              if (random_2Num==0) {
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_2Num==1) {
                  matrix[x][y-1]=2;
                  D++;
              }
          }
          
          
          if (x==0 && y==9) {          /* if the ship is placed at the top right corner  */
              matrix[x][y]=2;
              if (random_2Num==0) {
                  matrix[x][y-1]=2;
                  D++;
              }
              if (random_2Num==1) {
                  matrix[x+1][y]=2;
                  D++;
              }
          }
          
          
          if (0<x && x>9 && 0<y && y>9) { /* if our ship I placed in in any place on the matrix excluding the previous conditions*/
              matrix[x][y]=2;
              if (random_4Num==0) {
                  matrix[x+1][y]=2;
                  D++;
              }
              if (random_4Num==1) {
                  matrix[x-1][y]=2;
                  D++;
              }
              if (random_4Num==2) {
                  matrix[x][y+1]=2;
                  D++;
              }
              if (random_4Num==3) {
                  matrix[x][y-1]=2;
                  D++;
              }
          }
      } /* if matrix[x][y] != 1  curly bracket*/
      
  } /* while loop curly bracket*/
}/* function curly bracket*/


/* ***************************************************************** */
/* a function that spawns the carrier Ship*/
/* the random function makes a choice if our ship will spawn in a row or a column and then choses again a random value based on the previous choice, this random value is a slot in our row or column with regard to the size of the ship */
void spawn_Carrier()
{
const int numof_carrier=1;
                              
int C=0;
while(C<numof_carrier)
{
    srand(time(NULL));
    /* int x= rand()%rows;
    int y= rand()%columns; */
    int randomRaw_orCol = rand()%2;
    int x=0,y=0;
    if (randomRaw_orCol==0) {
    x=rand()%6;
         if (x==0) {
                        y=0;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
             C++;
                                  }
        if (x==1) {
                        y=1;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
            C++;
                                  }
        if (x==2) {
                        y=2;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
            C++;
                                    
                                  }
        if (x==3 ) {
                        y=3;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
            C++;
                      
                                }
        if (x==4) {
                        y=4;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
            C++;
                                }
        if (x==5) {
                        y=5;
                        matrix[x][y]=5;
                        matrix[x][y+1]=5;
                        matrix[x][y+2]=5;
                        matrix[x][y+3]=5;
                        matrix[x][y+4]=5;
            C++;
                                }
    }
                                  
        if (randomRaw_orCol==1) {
        y=rand()%6;
        if (y==0) {
                        x=0;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                                  }
        if (y==1) {
                        x=1;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                                  }
        if (y==2) {
                        x=2;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                                    
                                  }
        if (y==3) {
                        x=3;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                      
                                }
        if (y==4) {
                                  x=4;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                                }
        if (y==5) {
                                  x=5;
                        matrix[x][y]=5;
                        matrix[x+1][y]=5;
                        matrix[x+2][y]=5;
                        matrix[x+3][y]=5;
                        matrix[x+4][y]=5;
            C++;
                                }

                              
                          }
                        }
}

/* ***************************************************************** */
/* a function that spawns our submarines :D */
/* the random function makes a choice if our ship will spawn in a row or a column and then choses again a random value based on the previous choice, this random value is a slot in our row or column with regard to the size of the ship */
void spawn_Submarine(){

/* same style as Carrier ship function */
const int num_ofSubmarine=2;
int SS=0; int x=0; int y=0;
int rand_twoNums=rand()%2; /* if it outputs 0 it will spawn our submarine on a random row if it equals 2 a random column */
while (SS<num_ofSubmarine){

if (rand_twoNums==0 ) { /* our ships will spawn on a random raw */

x=rand()%7;

if (x==0) {
y=0;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }


           }

if (x==1) {
y=1;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }
          }

if (x==2) {
y=2;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }
            }

if (x==3) {
y=3;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }
            }

if (x==4) {
y=4;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }
            }

if (x==5) {
y=5;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x][y+1]=7;
        matrix[x][y+2]=7;
        matrix[x][y+3]=7;

            SS++;
    }
              }


  if (x==6) {
y=6;
      if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
          matrix[x][y]=7;
          matrix[x][y+1]=7;
          matrix[x][y+2]=7;
          matrix[x][y+3]=7;

              SS++;
      }
             }
}  /* if random number equals zero curly bracket */
if (rand_twoNums==1 ){
y=rand()%7;

if (y==0) {
x=0;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }

           }

if (y==1) {
x=1;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
          }
          
if (y==2) {
x=2;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
            }

if (y==3) {
x=3;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
          }

if (y==4) {
x=4;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
          }

if (y==5) {
x=5;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
            }

if (y==6) {
x=6;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2) {
        matrix[x][y]=7;
        matrix[x+1][y]=7;
        matrix[x+2][y]=7;
        matrix[x+3][y]=7;
            SS++;
    }
           }
}
} /* while loop curly braket */

} /* end of function braket */



/* ***************************************************************** */
/* a function that spawns our Cruisers  */
/* the random function makes a choice if our ship will spawn in a row or a column and then choses again a random value based on the previous choice, this random value is a slot in our row or column with regard to the size of the ship */

void spawn_Cruiser (){
const int Cruiser_SHIPS=3;
int Cruiser=0;
int x=0; int y=0;
int random_2=rand()%2;
while (Cruiser<Cruiser_SHIPS) {

if(random_2==0){ /* our ships will spawn on a random Row */
x=rand()%8; /* our ship can spawn from row 1 till row 8 (0-7 before the new refrencing)*/

if (x==0) {
    y=0;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;


            
    }
  }


if (x==1) {
    y=1;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;


        }
      }


if (x==2) {
          y=2;
if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;


              }
    Cruiser++;
            }

if (x==3) {
          y=3;
if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;

                        }
                        }
if (x==4) {
        y=4;
        if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;

                       }
                       }

if (x==5) {
        y=5;
        if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;


                        }
                        }
if (x==6) {
        y=6;
        if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;

                        }
                        }
if (x==7) {
        y=7;
        if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x][y+1]=1;
        matrix[x][y+2]=1;
        Cruiser++;


                         }
                         }

} /* if our ship spawn on a row curly bracket*/

if(random_2==0) {
y=rand()%8;

if (y==0) {
x=0;
    if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
        matrix[x][y]=1;
        matrix[x+1][y]=1;
        matrix[x+2][y]=1;
        Cruiser++;

    }
  }
  if (y==1) {
   x=1;
      if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
          matrix[x][y]=1;
          matrix[x+1][y]=1;
          matrix[x+2][y]=1;
          Cruiser++;

      }
    }
    if (y==2) {
    x=2;
        if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
            matrix[x][y]=1;
            matrix[x+1][y]=1;
            matrix[x+2][y]=1;
            Cruiser++;

        }
      }
      if (y==3) {
      x=3;
          if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
              matrix[x][y]=1;
              matrix[x+1][y]=1;
              matrix[x+2][y]=1;
              Cruiser++;

          }
        }
        if (y==4) {
        x=4;
            if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
                matrix[x][y]=1;
                matrix[x+1][y]=1;
                matrix[x+2][y]=1;
                Cruiser++;

            }
          }
          if (y==5) {
          x=5;
              if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
                  matrix[x][y]=1;
                  matrix[x+1][y]=1;
                  matrix[x+2][y]=1;
                  Cruiser++;

              }
            }
            if (y==6) {
            x=6;
                if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
                    matrix[x][y]=1;
                    matrix[x+1][y]=1;
                    matrix[x+2][y]=1;
                    Cruiser++;

                }
              }
              if (y==7) {
              x=7;
                  if (matrix[x][y]==0 && matrix[x][y]!=7 && matrix[x][y]!=5 && matrix[x][y]!=2 && matrix[x][y]!=1) {
                      matrix[x][y]=1;
                      matrix[x+1][y]=1;
                      matrix[x+2][y]=1;
                      Cruiser++;

                  }
                }


} /* If our ship spawn on a Column curly braket */






} /* main while loop curly bracket */

} /* end of function curly bracket */



/* ***************************************************************** */
/* a boolean function that attempts to hit the ship */
/* it returns either true or false a print function depends on the output and will print accordingly the function scans through the matrix*/
bool attempt(int x,int y) {
    int rand_num=rand()%2;
    /* IF THE HIT IS ON A DESTROYER*/
    if (matrix[x][y]==2)
    {
        matrix[x][y]=3;
        /* I ADDED THE CONDITIONS AFTER I DISCOVED A BUG THAT IT HITS ON THE OTHER SIDE OF THE MATRIX SOMETIMES IT MIGHT NOT LOOK SUPER NEAT BUT WORKS TO PREVENT HITTING IN ANOTHER PLACE */
        if (matrix[x-1][y]==2 && 1<x && x<9 && 1<y && y<10) {
            matrix[x-1][y]=3;
        }
        
        if (matrix[x+1][y]==2 && 1<x && x<9 && 1<y && y<10) {
            matrix[x+1][y]=3;
        }
        
        if (matrix[x][y+1]==2 && 1<x && x<9 && 1<y && y<10){
            matrix[x][y+1]=3;
        }
        
        if (matrix[x][y-1]==2 && 1<x && x<9 && 1<y && y<10) {
            matrix[x][y-1]=3;
        }
        
        if (x==0 && y==0 ) {
            if (matrix[x][y+1]==2) {
                matrix[x][y+1]=3;
            }
            if (matrix[x+1][y]==2) {
                matrix[x+1][y]=3;
            }
        }
        
        if (x==9 && y==0) {
            if (matrix[x][y+1]==2) {
                matrix[x][y+1]=3;
            }
            if (matrix[x-1][y]==2) {
                matrix[x-1][y]=3;
            }
        }
        
        if (x==0 && y==9) {
            if (matrix[x][y-1]==2) {
                matrix[x][y-1]=3;
            }
            if (matrix[x+1][y]==2) {
                matrix[x+1][y]=3;
            }
        }
        
        if (x==9 && y==9) {
            if (matrix[x][y-1]==2) {
                matrix[x][y-1]=3;
            }
            if (matrix[x-1][y]==2) {
                matrix[x-1][y]=3;
            }
        }
        
        return true;
    }
    
/* ----------------------------------------- */
    /* IF THE HIT IS ON A CARRIER*/
    if (matrix[x][y]==5)
    {
        matrix[x][y]=3;
        
        /* if the carrier is on a row */
        if (matrix[x+1][y]==5) {
            matrix[x+1][y]=3;
        }
        if (matrix[x+2][y]==5) {
            matrix[x+2][y]=3;
        }
        if (matrix[x+3][1]==5){
            matrix[x+3][y]=3;
        }
        if (matrix[x+4][y]==5) {
            matrix[x+4][y]=3;
        }
        if (matrix[x+5][y]==5) {
            matrix[x+5][y]=3;
        }
        /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
        if (matrix[x-1][y]==5) {
            matrix[x-2][y]=3;
        }
        if (matrix[x-2][y]==5) {
            matrix[x-2][y]=3;
        }
        if (matrix[x-3][y]==5) {
            matrix[x-3][y]=3;
        }
        if (matrix[x-4][y]==5) {
            matrix[x-4][y]=3;
        }
        if (matrix[x-5][y]==5) {
            matrix[x-5][y]=3;
        }
        
        
        /* if the carrier is on a column */
        if (matrix[x][y]==5) {
            matrix[x][y]=3;
        }
        if (matrix[x][y+1]==5) {
            matrix[x][y+1]=3;
        }
        if (matrix[x][y+2]==5) {
            matrix[x][y+2]=3;
        }
        if (matrix[x][y+3]==5) {
            matrix[x][y+3]=3;
        }
        if (matrix[x][y+4]==5) {
            matrix[x][y+4]=3;
        }
        if (matrix[x][y+5]==5) {
            matrix[x][y+5]=3;
        }
        /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
        if (matrix[x][y-1]==5) {
            matrix[x][y-1]=3;
        }
        if (matrix[x][y-2]==5) {
            matrix[x][y-2]=3;
        }
        if (matrix[x][y-3]==5) {
            matrix[x][y-3]=3;
        }
        if (matrix[x][y-4]==5) {
            matrix[x][y-4]=3;
        }
        if (matrix[x][y-5]==5) {
            matrix[x][y-5]=3;
        }
        
        
        return true;
    }
    /* ----------------------------------------- */
        /* IF THE HIT IS ON A submarine*/
       if (matrix[x][y]==7)
    {
        matrix[x][y]=3;
        
        /* if the submarine is on a row */
        if (matrix[x+1][y]==7) {
            matrix[x+1][y]=3;
        }
        if (matrix[x+2][y]==7) {
            matrix[x+2][y]=3;
        }
        if (matrix[x+3][1]==7){
            matrix[x+3][y]=3;
        }
        if (matrix[x+4][y]==7) {
            matrix[x+4][y]=3;
        }
        /* it can be less terms but I did it anyways just in case */
        if (matrix[x+5][y]==7) {
            matrix[x+5][y]=3;
        }
        /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
        if (matrix[x-1][y]==7) {
            matrix[x-2][y]=3;
        }
        if (matrix[x-2][y]==7) {
            matrix[x-2][y]=3;
        }
        if (matrix[x-3][y]==7) {
            matrix[x-3][y]=3;
        }
        if (matrix[x-4][y]==7) {
            matrix[x-4][y]=3;
        }
        if (matrix[x-5][y]==7) {
            matrix[x-5][y]=3;
        }
        
        
        /* if the carrier is on a column */
        if (matrix[x][y]==7) {
            matrix[x][y]=3;
        }
        if (matrix[x][y+1]==7) {
            matrix[x][y+1]=3;
        }
        if (matrix[x][y+2]==7) {
            matrix[x][y+2]=3;
        }
        if (matrix[x][y+3]==7) {
            matrix[x][y+3]=3;
        }
        if (matrix[x][y+4]==7) {
            matrix[x][y+4]=3;
        }
        if (matrix[x][y+5]==7) {
            matrix[x][y+5]=3;
        }
        /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
        if (matrix[x][y-1]==7) {
            matrix[x][y-1]=3;
        }
        if (matrix[x][y-2]==7) {
            matrix[x][y-2]=3;
        }
        if (matrix[x][y-3]==7) {
            matrix[x][y-3]=3;
        }
        if (matrix[x][y-4]==7) {
            matrix[x][y-4]=3;
        }
        if (matrix[x][y-5]==7) {
            matrix[x][y-5]=3;
        }
        
        
        return true;
    }
/* ----------------------------------------- */
    /* IF THE HIT IS ON A Cruiser*/
    /* it has excess code but it wont run anyways if the function scans and doesn't find the specific number in the spot */
    if (matrix[x][y]==1)
        {
            matrix[x][y]=3;
            
            /* if the submarine is on a row */
            if (matrix[x+1][y]==1) {
                matrix[x+1][y]=3;
            }
            if (matrix[x+2][y]==1) {
                matrix[x+2][y]=3;
            }
            if (matrix[x+3][1]==1){
                matrix[x+3][y]=3;
            }
            if (matrix[x+4][y]==1) {
                matrix[x+4][y]=3;
            }
            /* it can be less terms but I did it anyways just in case */
            if (matrix[x+5][y]==1) {
                matrix[x+5][y]=3;
            }
            /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
            if (matrix[x-1][y]==1) {
                matrix[x-2][y]=3;
            }
            if (matrix[x-2][y]==1) {
                matrix[x-2][y]=3;
            }
            if (matrix[x-3][y]==1) {
                matrix[x-3][y]=3;
            }
            if (matrix[x-4][y]==1) {
                matrix[x-4][y]=3;
            }
            if (matrix[x-5][y]==1) {
                matrix[x-5][y]=3;
            }
            
            
            /* if the cruiser is on a column */
            if (matrix[x][y]==1) {
                matrix[x][y]=3;
            }
            if (matrix[x][y+1]==1) {
                matrix[x][y+1]=3;
            }
            if (matrix[x][y+2]==1) {
                matrix[x][y+2]=3;
            }
            if (matrix[x][y+3]==1) {
                matrix[x][y+3]=3;
            }
            if (matrix[x][y+4]==1) {
                matrix[x][y+4]=3;
            }
            if (matrix[x][y+5]==1) {
                matrix[x][y+5]=3;
            }
            /* IF WE HIT FROM THE MIDDLE OR THE END OF THE SHIP */
            if (matrix[x][y-1]==1) {
                matrix[x][y-1]=3;
            }
            if (matrix[x][y-2]==1) {
                matrix[x][y-2]=3;
            }
            if (matrix[x][y-3]==1) {
                matrix[x][y-3]=3;
            }
            if (matrix[x][y-4]==1) {
                matrix[x][y-4]=3;
            }
            if (matrix[x][y-5]==1) {
                matrix[x][y-5]=3;
            }
            
            
            return true;
        }
        return false;
}



/* ***************************************************************** */
/* a function that Calculates the number of destroyers available*/
int num_ofDestroyers(){
    
    int num_Destroyers=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            
            if (matrix[i][j]==2) {
                num_Destroyers++;
            }
        }
    }
  
    return num_Destroyers/2;
}



/* ***************************************************************** */
/* a function that Calculates the number of Carriers available*/
int num_ofCarrier(){
    int num_Carrier=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            
            if (matrix[i][j]==5) {
                num_Carrier++;
            }
        }
    }
    return num_Carrier/5;
}


/* ***************************************************************** */
/* a function that Calculates the number of Submarines available*/
int num_ofSubmarines(){
    int num_Submarines=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            
            if (matrix[i][j]==7) {
                num_Submarines++;
            }
        }
    }
    return num_Submarines/4;
}
/* ***************************************************************** */
/* a function that Calculates the number of Cruisers available*/
int num_ofCruisers(){
    int num_Cruisers=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            
            if (matrix[i][j]==1) {
                num_Cruisers++;
            }
        }
    }
    return num_Cruisers/3;
}








/* ************************* MAIN CODE *********************** */



/* ***************************************************************** */

int main() {
    srand(time(NULL));
    int x1 = 0,y1=0,ro=0;
    char col,surrender;
    printf("Welcome to Battleship game\n");
    printf("Let the Battle Begin!\n");
    printf("Press Enter Key to Continue...\n");
    getchar();
    printf("the rules are simple\n");
    printf("You Enter the co-ordinates for your attack, If all ships are hit you WIN \n");
    printf("Press Enter Key to Continue...\n");
    getchar();
    printf("GoodLuck :D\n");
    printf("Press Enter Key to Continue...\n");
    getchar();
    printf("Here is your GRID to help you aim:)\n");
    build();
    printf("    A   B   C   D   E   F   G   H   I   J\n");
    printf("1   0   0   0   0   0   0   0   0   0   0   \n");
    printf("2   0   0   0   0   0   0   0   0   0   0   \n");
    printf("3   0   0   0   0   0   0   0   0   0   0   \n");
    printf("4   0   0   0   0   0   0   0   0   0   0   \n");
    printf("5   0   0   0   0   0   0   0   0   0   0   \n");
    printf("6   0   0   0   0   0   0   0   0   0   0   \n");
    printf("7   0   0   0   0   0   0   0   0   0   0   \n");
    printf("8   0   0   0   0   0   0   0   0   0   0   \n");
    printf("9   0   0   0   0   0   0   0   0   0   0   \n");
    printf("10  0   0   0   0   0   0   0   0   0   0   \n");
    
    spawn_Submarine();
    spawn_Carrier();
    spawn_Destroyer();
    /* showgrid();*/ /* CAN BE USED FOR TESTING */
    /* spawn_Cruiser(); */           /* I greyd out this function because of a logical error that the loop keeps going in 30% of the times I run this function for no obvious reason although all posibilities are considered */

    printf("------------------------------------\n");

    while(1){
        printf("please enter the Row co-ordinates of your attack (1-10): ");
        scanf("%d" ,&ro);

        
        

        /* we rename our rows*/
        if (ro==1) {
          x1=0;
          }
        if (ro==2) {
            x1=1;
            }

        if (ro==3) {
            x1=2;
              }
        if (ro==4) {
            x1=3;
                }

        if (ro==5) {
            x1=4;
                }
        if (ro==6) {
            x1=5;
                }

        if (ro==7) {
            x1=6;
                }
        if (ro==8) {
            x1=7;
                }

        if (ro==9) {
            x1=8;
                }
        if (ro==10) {
            x1=9;
                }
       
        

        printf("please enter the Column co-ordinates of your attack in capital letters (A-K): ");
        scanf("%s" ,&col);
        /* we rename our columns*/
        if (col=='A') {
          y1=0;
          }
        if (col=='B') {
          y1=1;
            }

        if (col=='C') {
          y1=2;
              }
        if (col=='D') {
          y1=3;
                }

        if (col=='E') {
          y1=4;
                  }
        if (col=='F') {
          y1=5;
                    }

        if (col=='G') {
          y1=6;
                      }
        if (col=='H') {
          y1=7;
                        }

        if (col=='I') {
          y1=8;
                          }
        if (col=='J') {
          y1=9;
                            }

        if (col=='K') {
          y1=10;
        }
        


        int totalNum_ofShips=num_ofSubmarines()+num_ofCarrier()+num_ofDestroyers();

        if(attempt(x1,y1))
            printf("a hit was successful\n");
        else
            printf("a hit wasn't successful\n");
        
        printf("number of Destroyers left %d\n",num_ofDestroyers());
        printf("number of Carriers left is %d\n",num_ofCarrier());
        printf("number of Submarines left is %d\n",num_ofSubmarines());
        printf("The total number of ships is %d\n",totalNum_ofShips);
         /* printf("number of Cruisers left is %d\n",num_ofCruisers()); */
        printf("do you want to surrender(Y/N)?");
        scanf("%s",&surrender);
        if(surrender == 'Y')
            break;
        if (totalNum_ofShips==0) {
            printf("WELL DONE YOU WERE ABLE TO SINK ALL SHIPS\n");
            printf("Press Enter Key to Continue\n");
            getchar();
            printf("EVERYTHING SUNK!!!\n");
            printf("GAME OVER");
            showgrid();
            break;

        }
    }
    printf("GAME OVER");
    showgrid();
    
}

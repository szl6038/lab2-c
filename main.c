// Author: Shang Yuan Lim szl6038@psu.edu
// Collaborator: Yong Lin Kwang yqk5211@psu.edu
// Collaborator: Sean Murphy spm6407@psu.edu
// Section: 010R
// Breakout: 2

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {

  double grade = atof(readline("Enter your CMPSC 131 grade: "));

  char *gradeletter;

  if (grade >=93.0) {
    gradeletter = "A";
  }
  else if (grade >=90.0) {
    gradeletter = "A-";
  }
  else if (grade >=87.0) {
    gradeletter = "B+";
  }
  else if (grade >=83.0) {
    gradeletter = "B";
  }
  else if (grade >=80.0) {
    gradeletter = "B-";
  }
  else if (grade >=77.0) {
    gradeletter = "C+";
  }
  else if (grade >=70.0) {
    gradeletter = "C";
  }
  else if (grade >=60.0) {
    gradeletter = "D";
  }
  else {
    gradeletter = "F";
  }

  printf("Your letter grade for CMPSC 131 is %s.\n", gradeletter);

  return 0;
 

}
/* Messi goals function
Messi is a soccer player with goals in three leagues:

LaLiga
Copa del Rey
Champions
Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.

For example:

5, 10, 2  -->  17 */

//Solution Below:
int goals (int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
  // GOALS!
  int A = laLigaGoals;
  int B = copaDelReyGoals;
  int C = championsLeagueGoals;
  int sum;
  
  sum = A + B + C;
  return sum;
}


/*Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0. 
Your function only needs to return the result, what is shown between parentheses in the example below is how you reach that result 
and it's not part of it, see the sample tests.

For example (Input -> Output):

2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)*/

int summation(int num){
  int x=1 ;
  int y = num ;
  int sum=0;
  
  for (x=1; x<=y; x++){
    sum+=x;
  }
  
  return sum ;
}
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
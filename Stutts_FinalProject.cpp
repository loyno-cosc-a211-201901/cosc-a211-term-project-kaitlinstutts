//Program Name: Disnay Pin Sorter
//Purpose: Prompt user to enter a character and look at the
//pins that fit the category
//Author: Kaitlin Stutts
//Date Last Modified: April 25, 2019

#include <iostream>
using namespace std;

int main()

{
  int pinType;  // declare variable that is going to
               // guide the search


  cout << "Welcome to Kaitlin's Disney Pin Organizer! " << endl;
  cout << "Please choose which type of pin you would like to see from the list below (1-8): " << endl;

  cout << "1. Princess and the Frog" << endl;      //different categories
  cout << "2. Disneyland" << endl;
  cout << "3. Food and Beverages" << endl;
  cout << "4. Walt Disney World" << endl;
  cout << "5. Donald Duck" << endl;
  cout << "6. Daisy Duck" << endl;
  cout << "7. Hercules" << endl;
  cout << "8. Jessica Rabbit" << endl;

  cin >> pinType;

  if (pinType == 1)       // selected PATF
  {
    cout << "There are four Princess and the Frog Pins!" << endl;

    cout << "1. Date Nite At Disnayland Tiana and Naveen" << endl;
    cout << "   - Released in 2016" << endl;
    cout << "   - Features Tiana and Naveen as Frogs dancing to music on a purple background" << endl;

    cout << "2. Mardi Gras 2017" << endl;
    cout << "   - Released in 2017" << endl;
    cout << "   - Features Louis playing the trumpet and Ray against a curtain backdrop" << endl;

    cout << "3. Tiana and Naveen Shanghai Disneyland Opening" << endl;
    cout << "   - Released in 2016" << endl;
    cout << "   - Features a screenshot of Tiana and Naveen's wedding kiss in the bayou" << endl;

    cout << "4. Stained Glass Portrait of Tiana" << endl;
    cout << "   - Released in 2016" << endl;
    cout << "   - Features Tiana's bust against purple and freen flowered stained glass" << endl;

    cout << "Thanks for visiting, have magical day!" << endl;
  }

if (pinType == 2)         // Selected Disneyland
{
  cout << "There are three Disneyland Pins!" << endl;

  cout << "1. Disneyland Annual Passholder 60th Anniversary" << endl;
  cout << "   - Released in 2015" << endl;
  cout << "   - Features sparkly diamond Mickey head with establishing" << endl;
  cout << "     date and anniversary on ears" << endl;

  cout << "2. Mad Tea Party Teacup" << endl;
  cout << "   - Released in 2015" << endl;
  cout << "   - Features the magenta spinning teacup from the teacup ride" << endl;

  cout << "3. Dapper Day Lapel Pin" << endl;
  cout << "   - Released in 2014" << endl;
  cout << "   - Features purple geometric flower with yellow botwie in" << endl;
  cout << "     the center and 'dapper day' at the bottom" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 3)      // Selected Food and Beverage
{
  cout << "There are eight Food and Beverage Pins!" << endl;

  cout << "1. Malificent BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Malificent from Sleeping Beauty on a green bottle" << endl;

  cout << "2. Mushu BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Mushu from Mulan on a orange bottle" << endl;

  cout << "3. Anger BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Anger from Inside Out on a red bottle" << endl;

  cout << "4. Mr. Toad BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Mr. Toad on a yellow bottle" << endl;

  cout << "5. Hades BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Hades from Hercules on a darn brown bottle" << endl;

  cout << "6. Donald Duck BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Donald Duck on a rust brown bottle" << endl;

  cout << "7. Disney Cruise Line Cupcake" << endl;
  cout << "   - Released in 2018" << endl;
  cout << "   - Features Captain Micky in cupcake form" << endl;

  cout << "8. Mint Julep" << endl;
  cout << "   - Released in 2013" << endl;
  cout << "   - Features a cup with lid filled with mint julep and mint leaves" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 4)       // Selected Walt Disney World
{
  cout << "There are three Walt Disney World Pins!" << endl;

  cout << "1. Disney World Annual Passholder" << endl;
  cout << "   - Released in 2017" << endl;
  cout << "   - Features swing open front that reveals the orange bird on the inside" << endl;

  cout << "2. Fantasyland Trash Can" << endl;
  cout << "   - Released in 2003" << endl;
  cout << "   - Features yellow trash can with Fantasyland coat of arms on the front" << endl;

  cout << "3. Malificent Over Tower of Terror" << endl;
  cout << "   - Released in 2014" << endl;
  cout << "   - Features dragon Malificent over the Hollywwod Tower Hotel" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 5)           // Selected Donald Duck
{
  cout << "There are four Donald Duck Pins!" << endl;

  cout << "1. Lunar New Year Tokyo Disneyland" << endl;
  cout << "   - Released in 2017" << endl;
  cout << "   - Features Donald and Daisy in traditional kimonos with" << endl;
  cout << "     Japnese influences in the background" << endl;

  cout << "2. Donald and Daisy Ring" << endl;
  cout << "   - Released in 2014" << endl;
  cout << "   - Features Donald and Daisy with a marble background" << endl;
  cout << "     inside a large diamnond ring" << endl;

  cout << "3. Daisy 70th Anniversary" << endl;
  cout << "   - Released in 2007" << endl;
  cout << "   - Features Donald serenading Daisy on a windowsill with" << endl;
  cout << "     hearts in the background" << endl;

  cout << "4. Donald Duck BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Donald Duck on a rust brown bottle" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 6)     // Daisy Duck
{
  cout << "There are four Daisy Duck Pins!" << endl;

  cout << "1. Lunar New Year Tokyo Disneyland" << endl;
  cout << "   - Released in 2017" << endl;
  cout << "   - Features Donald and Daisy in traditional kimonos with" << endl;
  cout << "     Japnese influences in the background" << endl;

  cout << "2. Donald and Daisy Ring" << endl;
  cout << "   - Released in 2014" << endl;
  cout << "   - Features Donald and Daisy with a marble background" << endl;
  cout << "     inside a large diamnond ring" << endl;

  cout << "3. Daisy 70th Anniversary" << endl;
  cout << "   - Released in 2007" << endl;
  cout << "   - Features Donald serenading Daisy on a windowsill" << endl;
  cout << "     with hearts in the background" << endl;

  cout << "4. Mardi Gras Daisy" << endl;
  cout << "   - Released in 2007" << endl;
  cout << "   - Features Daisy in beads with a steamboat in" << endl;
  cout << "     the background and the word 'music'" << endl;
  cout << "     on the bottom" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 7)    // Selected Vinegar
{
  cout << "There are three Hercules Pins!" << endl;

  cout << "1. Hades BBQ Sauce Bottle" << endl;
  cout << "   - Released in 2016" << endl;
  cout << "   - Features Hades from Hercules on a dark brown bottle" << endl;

  cout << "2. Hercules 20th Anniversary" << endl;
  cout << "   - Released in 2017" << endl;
  cout << "   - Features Phil measuring Hercules' bicep against a" << endl;
  cout << "     blue background" << endl;

  cout << "3. Herc and Meg" << endl;
  cout << "   - Released in 2010" << endl;
  cout << "   - Features Hercules hugging Meg" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

if (pinType == 8)     // Selected Jessica Rabbit
{
  cout << "There is one Jessica Rabbit Pin!" << endl;

  cout << "1. Jessica and Roger Ring" << endl;
  cout << "   - Released in 2014" << endl;
  cout << "   - Features Donald and Daisy with a marble background" << endl;
  cout << "     inside a large diamnond ring" << endl;

  cout << "Thanks for visiting, have magical day!" << endl;
}

  return 0;
}

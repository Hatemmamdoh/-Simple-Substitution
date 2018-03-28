#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    // FCI – Programming 1 – 2018 - Assignment 2
    // Program Name: Simple Substitution Cipher
    // Last Modification Date : 3/3/2018
    // Author1 and ID and Group : 20170085 , G4
    // Author2 and ID and Group : 20170098  , G4
    // Author3 and ID and Group : 20170081 , G4
    // Teaching Assistant:
    // Purpose: cipher and decipher text

    int i , c , j , keyCounter , k=0 , decision ; // variables that i will use them in the code
    char alphapet [26] = {'a' ,'b' ,'c' ,'d', 'e' ,'f' , 'g' ,'h' ,'i' ,'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' ,'u' , 'v' , 'w' , 'x' ,'y' , 'z' } ;
    char cipherAlphapet [26] ;
    string theText , theKey , theCipherText ;
    // taking number from the user to choose if he want to make cipher or decipher to his text
    cout << "please choose 1 or 2 \n1-cipher \n2-Decipher\nyour choice :  " ;
    cin >> decision ;
    cout << "please enter the key :" ;
    cin >> theKey ;

    while (true)
    {
        if (theKey.length() == 5)
            break ;
        else
        {
            cout << "The Key Length Must Be 5 \nKey : ";
            cin >> theKey ;
        }
    }
    // putting the key in cipher alphabet and then putting the rest of the characters
    for (int i=0 ; i<5 ; i++)theKey[i] = tolower(theKey[i]) ;
    for (i = 0 ; i < 5 ; i++)
      cipherAlphapet[i]=theKey[i] ;
    for (c = 0 , j = 5 ; c < 26 ; c++ )
    {
      bool existing = true ;
      for ( keyCounter = 0 ; keyCounter < 5 ; keyCounter++)
      {
        if (alphapet[c] == theKey[keyCounter])
        {
            existing = false ;
            break ;
        }
      }
      if (existing)
      {
        cipherAlphapet[j] = alphapet[c] ;
        j++ ;
      }
    }
    if (decision == 1)
    {

      // taking the text from user and cipher it
      cout << "please enter the text :";
      cin.ignore () ;
      getline (cin , theText ) ;
      cout << "Your Cipher : " ;
      for (int n = 0 ; n < theText.length() ; n++)
      {
        if (theText[n] != ' ')
        {
            theText[n] = tolower(theText[n]) ;
            if ( theText[n] == 'a' )
             cout << cipherAlphapet[0] ;
            if (theText [n] == 'b')
             cout << cipherAlphapet [1] ;
            if (theText[n] == 'c')
             cout << cipherAlphapet[2] ;
            if (theText[n] == 'd')
             cout << cipherAlphapet[3] ;
            if (theText[n] == 'e')
             cout << cipherAlphapet[4] ;
            if (theText[n] == 'f')
             cout << cipherAlphapet[5] ;
            if (theText[n] == 'g')
             cout << cipherAlphapet[6] ;
            if (theText[n] == 'h')
             cout << cipherAlphapet[7] ;
            if (theText[n] == 'i')
             cout << cipherAlphapet[8] ;
            if (theText[n] == 'j')
             cout << cipherAlphapet[9] ;
            if (theText[n] == 'k')
             cout << cipherAlphapet[10] ;
            if (theText[n] == 'l')
             cout << cipherAlphapet[11] ;
            if (theText[n] == 'm')
             cout << cipherAlphapet[12] ;
            if (theText[n] == 'n')
             cout << cipherAlphapet[13] ;
            if (theText[n] == 'o')
             cout << cipherAlphapet[14] ;
            if (theText[n] == 'p')
             cout << cipherAlphapet[15] ;
            if (theText[n] == 'q')
             cout <<  cipherAlphapet[16] ;
            if (theText[n] == 'r')
             cout << cipherAlphapet[17] ;
            if (theText[n] == 's')
             cout << cipherAlphapet[18] ;
            if (theText[n] == 't')
             cout << cipherAlphapet[19] ;
            if (theText[n] == 'u')
             cout << cipherAlphapet[20] ;
            if (theText[n] == 'v')
             cout << cipherAlphapet[21] ;
            if (theText[n] == 'w')
             cout << cipherAlphapet[22] ;
            if (theText[n] == 'x')
             cout << cipherAlphapet[23] ;
            if (theText[n] == 'y')
             cout << cipherAlphapet[24] ;
            if (theText[n] == 'z')
             cout << cipherAlphapet[25] ;
        }
        else cout << ' ' ;
      }
    }

    if (decision == 2)
    {
      // if the user choose number 2 that means he want to decipher the message
      // then taking the cipher text from the user and check on the characters of the text in cipher alphabet and replace each character with corresponding one in alphabet
      cout << "please enter the cipher text :";
      cin.ignore() ;
      getline(cin , theCipherText);

      cout << "Your Message : " ;
      while ( k < theCipherText.length () )
      {
        if (theCipherText[k] != ' ')
          {
            theCipherText[k] = tolower(theCipherText[k]) ;
            for (int n =0 ; n < 26 ; n++ )
            {
              if (theCipherText[k] == cipherAlphapet[n] )
                cout << alphapet [n] ;
            }
          }
        else cout << " " ;
        k = k+1 ;
      }

    }


    return 0;

}

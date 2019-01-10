#include <iostream>
using namespace std;

int main()
{
   int i, x;
   int key = 0;
   char str[100];
   char strkey[100];

   cout << "Please enter a string:\t";
   cin >> str;
   cout << "Please enter the key:\t";
   cin >> strkey;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the string.\n";
   cout << "2 = Decrypt the string.\n";
   cin >> x;

   //use switch
   switch(x)
   {
      //encrypt code
      case 1:
      	 for (i=0; (i < 100 && strkey[i] != '\0'); i++)
      	 	key = key + int(strkey[i]);
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + key; //the key for encryption is the sum of the ascii values of key

         cout << "\nEncrypted string: " << str << endl;
         break;

      //decrypt code
      case 2:
      	for (i=0; (i < 100 && strkey[i] != '\0'); i++)
      	 	key = key + int(strkey[i]);
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - key; //the key for encryption is the sum of the ascii values of key

      cout << "\nDecrypted string: " << str << endl;
      break;

      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}

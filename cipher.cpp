#include <iostream>

using namespace std;
int main(){
            string message;
            cout << "Enter the message: ";
            getline(cin, message);
            // Stores the deciphered message
            string decipheredMessage = "";

            // Iterates on every char in the message
            for (int i = 0; i < message.length(); i++)
            {
                // ex: To check if aaaaa in alphabets array
                bool found = false;
                if (message[i] == 'a' || message[i] == 'b')
                {
                    // Checks if there is more than 5 char left in the message or not
                    if (i <= (message.length() - 5))
                    {
                        // ex: Stores aaaaa in letter
                        string letter = message.substr(i, 5);
                        // Check is letter in alphabets
                        for (int j = 0; j < 26; j++)
                            if (letter == alphabets[j])
                            {
                                found = true;
                                // Add the letter it to decipheredMessage using ASCII method
                                //     j(the index in alphabets)+65('A' in ascii)
                                decipheredMessage += j + 'A';
                                // Increment i by 4 to skip the next 4 char
                                i += 4;
                                break;
                            }
                        // Adds the char(message[i]) to decipheredMessage if not found in alphabets
                        if (!found)
                            decipheredMessage += message[i];
                    }
                    // Adds the char(message[i]) to decipheredMessage if unchecked char is less than 5
                    else
                        decipheredMessage += message[i];
                }
                // Adds the char(message[i]) to decipheredMessage if is not 'a' or 'b'
                else
                    decipheredMessage += message[i];
            }
            cout << "Deciphered message: " << decipheredMessage << endl;
        
        // Exits to main menu



}
     
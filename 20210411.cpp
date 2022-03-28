// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: Caesar Cipher.cpp
// Program Description: it takes a text and shift each character number of shifts
// Last Modification Date: 3/14/2022
// Author1 and ID and Group: Muhannad Ibrahim Yassin - 20210411 - B
// Teaching Assistant: xxxxx xxxxx
// Purpose: ciphering text in caesar cipher method

#include<bits/stdc++.h>
using namespace std;

int main() {
// text variable is for the input text and result variable is for the decrypted or encrypted output of text and
// upper_text is for making text to upper case
    string text,result,upper_text;
// shift variable for the input shifts and choose variable for the user to choose he wants to encryption or decryption
// and new_shift is used to change shifts if it is more than 26 or less than 0
    int shift,choose,new_shift;
// some inputs and outputs
    cout<<"pls enter the text: ";

    cin >> text;

    cout<<"     ------------------------\n";

    cout<<"pls enter the shifting number: ";

    cin >> shift;
    new_shift = shift;
// this if to sure that shift is less than 0 add 26 if below -26 take the mode and add 26
    if (shift < 0){
        if(shift<-26)
            new_shift = (shift % 26) + 26;
        else
            new_shift = shift +26;
    }
// and this if to sure that the shifts not more than 26 take mod 26
    else if (shift > 26)
        new_shift = (shift % 26);

    cout<<"     ------------------------\n";

    cout<<"type 1 for encryption and 2 for decryption: ";

    cin>>choose;

    cout<<"     ------------------------\n";
// this for loop is for make each character in the text upper case abc to ABC
    for(int i : text){
        upper_text += char(toupper(i));
    }
// this if check is he choose 1 is (encryption) take the upper text and shifts each character to the new character and
// output the new text
    if (choose == 1) {
        for (auto i: upper_text) {
            result += char(int(i + new_shift - 65) % 26 + 65);
        }
        cout <<"the encrypted text is: " << result << endl;
    }
// this  check is he choose 2 is (decryption) take the upper text and shifts each character to the old character and
// output the new text
    else if (choose == 2 ){
        for (auto i: upper_text) {
            result += char(int(i + new_shift + 65) % 26 + 65);
        }
        cout <<"the decrypted text is: " << result << endl;
    }

    return 0;
}
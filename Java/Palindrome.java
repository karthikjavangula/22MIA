// Java CAT2.3 @1048.06062023
// Program to check palindrome in Java

import java.util.Scanner;

public class Palindrome {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        String inputString = scan.nextLine();
        
        //creating and reversing the stringbuffer
        StringBuffer reverseString = new StringBuffer(inputString);
        reverseString = reverseString.reverse();
        
        //converting back into string
        String compareString = reverseString.toString();
        
        if (inputString.equalsIgnoreCase(compareString)) {
            System.out.println(compareString + " is a Palindrome String.");
        }
        else {
            System.out.println(inputString + " is not a Palindrome String.");
        }
    }
}


/*
Task
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. 
For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for  is not found, print Not found instead.
*/

//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        HashMap<String, Integer> book = new HashMap<>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            // Write code here
            book.put(name, phone);
            
        }
        while(in.hasNext()){
            String s = in.next();
            // Write code here
            Integer number = book.get(s);
            if (number != null){
                System.out.println(s + "=" +number);
            } else {
                System.out.println("Not found");
            }
        }
        in.close();
    }
}
